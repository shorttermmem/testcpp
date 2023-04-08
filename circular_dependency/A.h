#pragma once
#include "B.h"

class B;
class A{
public:
    A(B* b);
private:
    B* m_B;
};