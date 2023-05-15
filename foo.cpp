#include "foo.h"

Foo::Foo(){
    m_imInteger = 15;
    std::cout << "Instance created " << m_imInteger << std::endl;
}

void Foo::bar(){
        std::cout << "Hello Foo " << m_imInteger << std::endl;
    }

Foo::~Foo(){
    std::cout << "Bye Foo" << std::endl;
}    