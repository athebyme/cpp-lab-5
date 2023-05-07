#ifndef CPP_LAB_5_STACK_H
#define CPP_LAB_5_STACK_H
#include <vector>
namespace DataStructs {
    template <typename T>
    class Stack {
    private:
        const int STACK_MAX_SIZE = 50;
        struct Node{
            Node* prev;
            T value;
        };
        Node* tail;
        int elementCounter;
    public:

        Stack();
        ~Stack();
        void push(T value);
        T pop();

        std::vector<T> getAll();

        bool isFull();
        bool isEmpty();

    };
}
#endif