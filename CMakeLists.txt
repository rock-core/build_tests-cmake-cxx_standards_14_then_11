# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 3.1)
project(cxx_standards_14_then_11 VERSION 0.1 DESCRIPTION "tests if multiple  c++ standards from other packages still result in a valid flag to the compiler")
find_package(Rock)
rock_init()
#rock_feature(NOCURDIR)
rock_standard_layout()
