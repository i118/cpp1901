#include <iostream>
using namespace std;

int returnInt(){
    return 7;
}

int main(void) {
    cout << "start main()" << endl;

    //v1
    // int a = 8;
    // cout << returnInt << endl;
    // cout << returnInt() << endl;

    //v2
    int x = returnInt();
    cout << x << endl;
    cout << "end main()" << endl;
    return 0;
}