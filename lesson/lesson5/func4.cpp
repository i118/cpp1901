#include <iostream>
using namespace std;
void printA()
{
    cout << "A" << endl;
}
void printL()
{
    cout << "L" << endl;
}
void printAll()
{
    printA();printL();
}
int main(void){
    printAll();
    return 0;
}