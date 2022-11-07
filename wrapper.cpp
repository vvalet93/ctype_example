#include "foo.cpp"

extern "C" {
    int out() { std::cout << "Hello" << std::endl; return 1; }
    Foo* Foo_new(){ return new Foo(); }
    void Foo_del(Foo* foo) { delete foo; }
    void Foo_bar(Foo* foo){ foo->bar(); }
}