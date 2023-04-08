#include "A.h"
#include "B.h"

#if ENABLE_IO
#include <iostream>
#include <string>
#endif

B::B(){
    m_A = static_cast<A*>(new A(this));

#if ENABLE_IO
    std::cout 
    << "(void*)m_A: " 
    << std::hex 
    << reinterpret_cast<unsigned long long>(m_A) 
    << std::endl;
#endif
}