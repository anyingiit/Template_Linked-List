/*
 * 学习版本
 * 无法使用
 * 可以看看注释, 但是程序有问题
 */

//#include <iostream>
//using namespace std;
//
//template<typename T>
//class MyNode{
//public:
//    T e;
//    MyNode<T> *next;
//    MyNode(T e,MyNode *next) : e(e),next(next){} //使用初始化列表构造
//    MyNode(T e) : e(e), next(nullptr){}
//    MyNode() : e(),next(nullptr){}
////    Node(T e,Node *next);
//};
//
//template<typename T>
//class LinkedList{
//public:
//    LinkedList() {
//        dummyHead = new MyNode<T>();
//        size = 0;
//    }
//    int getSize() {
//        return size;
//    }
//    int isEmpty() {
//        return size == 0;
//    }
//    void addFirst(T e) {
//        add(0,e);
//    }
//    void add(int index, T e) {
//        if (!(index > 0 && index <= size)){
//            //TODO:异常
//            cout<<"add时发现异常, 错误的index: "<<index<<endl;
//        }
//        MyNode<T> *prev = dummyHead;
//        for (int i = 0; i < index; i++) { //1. 注意这里的结果最终实际指向的是index的前一个元素  2. 注意这里的index和数组的index不一样, 这里的index就是纯粹的从0开始数, 数到第index个元素. 例如add(index = 3,e = P);, 那么就是 A B →P← C D E F
//            prev = prev->next;
//        }
//        //这里的prev实际上就是index前一个元素.
//        prev->next = new MyNode<T>(e,prev->next); //新的MyNode元素的next指向的实际上就是原先next指向的元素.
//        size++;
//    }
//    void addLast(T e) {
//        add(size, e);
//    }
//private:
//    MyNode<T> *dummyHead; //有了虚拟节点后, 相当于链表的实际长度总是+1的.
//    int size;
//};
