#include <iostream>
using namespace std;

int main()
{
    bool t = true;
    bool f = false;
    short a = 1;
    short b = 2;
    short c = 3;

    if ((a < b) && f || !f && c >= a)
    {
        cout << "condition - ";
    }
    //int x = a < b ? a : b;
    cout << (a < b ? a : b) << endl;
    cout << "the end\n";

    return 0;
}