#include <string>
#include "Stack.h"
#include "../Service/ExceptionService.h"

namespace DataStructs {
    template<typename T>
    DataStructs::Stack<T>::Stack() : tail(nullptr), elementCounter(0) {}

    template<typename T>
    DataStructs::Stack<T>::~Stack() {
        while (tail != nullptr) {
            Node* tmp = tail;
            tail = tail->prev;
            delete tmp;
        }
    }

    template<typename T>
    void DataStructs::Stack<T>::push(T value) {
        if (isFull()) {
            throw CustomExceptions::StackIsFull();
        }
        Node* newNode = new Node{ tail, value };
        tail = newNode;
        elementCounter++;
    }

    template<typename T>
    T DataStructs::Stack<T>::pop() {
        if (isEmpty()) {
            throw CustomExceptions::StackIsEmpty();
        }
        Node* tmp = tail;
        T value = tail->value;
        tail = tail->prev;
        delete tmp;
        elementCounter--;
        return value;
    }

    template<typename T>
    std::vector<T> DataStructs::Stack<T>::getAll() {
        std::vector<T> result;
        Node* curr = tail;
        while (curr) {
            result.push_back(curr->value);
            curr = curr->prev;
        }
        return result;
    }

    template<typename T>
    bool DataStructs::Stack<T>::isFull() {
        return elementCounter == STACK_MAX_SIZE;
    }

    template<typename T>
    bool DataStructs::Stack<T>::isEmpty() {
        return elementCounter == 0;
    }

    template class Stack<int>;
    template class Stack<double>;
    template class Stack<std::string>;
}