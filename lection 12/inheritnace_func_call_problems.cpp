#include<iostream>

 struct A
 {
     char x;
     void bar() {
         std::cout << "A" << std::endl;
     }
};

struct B : A    // struct inheritance is always public
{
    int y;
    void bar() {
        std::cout << "B" << std::endl;
    }
};

struct C: A
{
    double z;
    void bar() {
        std::cout << "C" << std::endl;
    }
};

void foo(A& p)
{
    p.bar();
}

int main() {
    A a;    // Create class objects
    B b;
    C c;
    foo(b); // ???
    foo(c); // Will this stuff work??
}
