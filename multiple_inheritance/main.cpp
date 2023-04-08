#include <iostream>
using namespace std;

class A {
public:
    void print() {
        cout << "A non-virtual print." << " - size:" << sizeof(A) << endl;
    }
};

class B : public A {
public:
    virtual void print() {
        cout << "B(A) virtual print" << " - size:" << sizeof(B) << endl;
        A::print();
    }
};

class C : public A {
public:
    void print() {
        cout << "C(A) non-virtual print" << " - size:" << sizeof(C) << endl;
        A::print();
    }
};

class D : public B, public C {
public:
    void print() {
        cout << "D(B, C) non-virtual print" << " - size:" << sizeof(D) << endl;
        B::print();
        C::print();
    }
};

int main(void) {

    A a;
    a.print();

    cout<<endl;

    B b;
    b.print();

    cout<<endl;

    C c;
    c.print();
    
    cout<<endl;
    
    D d;
    d.print();
}