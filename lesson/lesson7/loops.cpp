#include <iostream>
using namespace std;
int main(){
    int x = 10;
    // while(x > 0)
    // {
    //     cout << x << endl;
    //     x--; // если его не будет то будет бесконечный цыкл

    // }
// выполнитса 1 если условие не правилное
    do{
        cout << "do-while " << x << endl;
    }while(x < 0)

    // while(x < 0)
    // {
    //     cout << x << endl;
    // }
    return 0;
}