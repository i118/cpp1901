#include <iostream>
using namespace std;
int add(int a, int l){
    return a+l;
}
int multiply(int c=1, int d=5){
    return c*d;
}
int main(void){
  cout << 1+7 << endl;
  //cout << add(0,7) << endl;

  cout << multiply(1,7) << endl;//v1
  cout << multiply(1) << endl;//v2
  //cout << multiply() << endl;//v3
    return 0;
}