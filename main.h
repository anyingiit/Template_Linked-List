#include <iostream>
using namespace std;

template<typename T>
class MyNode{
public:
    T e;
    MyNode<T> *next;
    MyNode(T e,MyNode *next) : e(e),next(next){} //使用初始化列表构造
    MyNode(T e) : e(e), next(nullptr){}
    MyNode() : e(),next(nullptr){}
//    Node(T e,Node *next);
};

template<typename T>
class LinkedList{
public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }
    int getSize() {
        return size;
    }
    int isEmpty() {
        return size == 0;
    }
    void addFirst(T e) {
        head = new MyNode<T>(e,head); //将一个装有e元素并且指向到head的MyNode赋值给head, 使得head数据为新加入数据, 并且next指向到以前的head
        size++; //大小增加1
    }
    void add(int index, T e) {
        if (!(index > 0 && index <= size)){
            //TODO:异常
            cout<<"add时发现异常, 错误的index: "<<index<<endl;
        }
        if (index == 0){
            addFirst(e);
        } else{
            MyNode<T> *prev = head;
            for (int i = 0; i < index - 1; i++) { //1. 注意这里的结果最终实际指向的是index的前一个元素  2. 注意这里的index和数组的index不一样, 这里的index就是纯粹的从0开始数, 数到第index个元素. 例如add(index = 3,e = P);, 那么就是 A B →P← C D E F
                prev = prev->next;
            }
            //这里的prev实际上就是index前一个元素.
            prev->next = new MyNode<T>(e,prev->next); //新的MyNode元素的next指向的实际上就是原先next指向的元素.
            size++;
        }
    }
    void addLast(T e) {
        add(size, e);
    }
private:
    MyNode<T> *head;
    int size;
};