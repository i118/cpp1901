#ifndef ADD_HPP
#define ADD_HPP
#pragma onec

#ifndef PRINT
    std::cout << "Not print" << std::endl;
#endif

// plus
int add(int a,int b){
    return a+b;
}
// multiply
int multiply(int a,int b){
    return a*b;
}
// division
int division(int a,int b){
    return a/b;
}
// difference
int difference(int a,int b){
    return a-b;
}