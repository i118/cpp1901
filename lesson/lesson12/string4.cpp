#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char name[20];
    char address[15];

    cout << "Enter your name: ";
    cin.get(name,20).get();// нужн добавить .get(), иначе оно будет пирывать вункцыю.

    cout << "Enter your name: ";
    cin.get(name,15);

    cout << "Your name is " << name << ", and your age is "
        << address << endl;

    return 0;
}