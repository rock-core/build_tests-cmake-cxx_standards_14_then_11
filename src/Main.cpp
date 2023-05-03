#include <iostream>
#include <plain_cxx11_package/DummyLeast11.hpp>
#include <plain_cxx14_package/DummyLeast14.hpp>

#if __cplusplus<201402L
#error "no compiling under C++14"
#endif

int main(int argc, char** argv)
{
    return 0;
}
