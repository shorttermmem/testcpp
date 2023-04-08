g++   -E -c -Wall   B.cpp
# 0 "B.cpp"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "B.cpp"
# 1 "A.h" 1
       
# 1 "B.h" 1
       

class A;

class B{
public:
    B();
private:
    A* m_A;
};
# 3 "A.h" 2

class B;
class A{
public:
    A(B* b);
private:
    B* m_B;
};
# 2 "B.cpp" 2







B::B(){
    m_A = static_cast<A*>(new A(this));
# 19 "B.cpp"
}