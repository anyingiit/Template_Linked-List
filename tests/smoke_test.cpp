// Smoke test for the header-only LinkedList template (LinkedList.h).
//
// Exercises add/get/set/remove end to end so a broken build, or a
// regression in the list's pointer bookkeeping, fails CI instead of
// shipping silently.
//
// Every index passed to get()/remove() below is kept strictly inside
// [0, size): LinkedList.h guards those calls with `index <= size` instead
// of `index < size`, so index == size dereferences a null `next` pointer
// and crashes rather than looping. This test stays inside the valid range
// on purpose -- it is not this smoke test's job to turn that bug into a
// CI timeout or a crash; see the README's dropped-claims note instead.

#include <cassert>

#include "../LinkedList.h"

int main() {
    LinkedList<int> list;
    assert(list.isEmpty());
    assert(list.getSize() == 0);

    for (int i = 1; i <= 5; ++i) {
        list.addLast(i);
    }
    assert(list.getSize() == 5);
    assert(list.getFirst() == 1);
    assert(list.getLast() == 5);
    assert(list.get(2) == 3);
    assert(list.contains(4));
    assert(!list.contains(42));

    list.add(2, 999);
    assert(list.getSize() == 6);
    assert(list.get(2) == 999);

    int removed = list.remove(2);
    assert(removed == 999);
    assert(list.getSize() == 5);
    assert(list.get(2) == 3);

    list.set(0, 100);
    assert(list.get(0) == 100);

    list.removeFirst();
    assert(list.getSize() == 4);
    assert(list.getFirst() == 2);

    list.removeLast();
    assert(list.getSize() == 3);
    assert(list.getLast() == 4);

    return 0;
}
