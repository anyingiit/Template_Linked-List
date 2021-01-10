#include <iostream>
#include "main.h"
#include "LinkedList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto *myList = new LinkedList<int>(); //这里使用了auto, auto类型会根据赋值的类型自动确定类型.
    cout<<myList->toString()<<endl;
    for (int i = 1; i <= 5; i++) {
        myList->addFirst(i);
        cout<<myList->toString()<<endl;
    }
    myList->add(2, 999);
    cout<<myList->toString()<<endl;
    myList->remove(2);
    cout<<myList->toString()<<endl;
    myList->removeFirst();
    cout<<myList->toString()<<endl;
    myList->removeLast();
    cout<<myList->toString()<<endl;
//    for (int i = 1; i <= 5; i++) {
//        myList->removeFirst();
//        cout<<myList->toString()<<endl;
//    }
//    cout<<myList->toString()<<endl;
//    int a = 10;
//    string *test = new string;
//    *test = "abc";
//    test->append("123");
//    test->append(to_string(a) + "test");
//    cout<<*test<<endl;
    return 0;
}
