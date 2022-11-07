#include <iostream>

class Foo{
    public:
        void bar(){
            std::cout << "Hello Foo" << std::endl;
        }

    ~Foo(){
        std::cout << "Bye Foo" << std::endl;
    }    
};