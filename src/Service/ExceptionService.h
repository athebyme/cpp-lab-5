#ifndef CPP_LAB_5_EXCEPTIONSERVICE_H
#define CPP_LAB_5_EXCEPTIONSERVICE_H


#include <exception>
namespace CustomExceptions {
    class NotEnoughArgumentsException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "[!] Not enough arguments.";
        }
    };
    class StackIsFull: public std::exception{
        public:
            const char* what() const noexcept override{
                return "[!] Stack is full !";
            }
    };
    class ElementNotFound: public std::exception{
        public:
            const char* what() const noexcept override{
                return "[!] Element not found !";
            }
        };
    class StackIsEmpty: public std::exception{
    public:
        const char* what() const noexcept override{
            return "[!] Stack is empty !";
        }
    };
}

#endif
