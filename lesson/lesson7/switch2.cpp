#include <iostream>
using namespace std;
int main(){
    int d = 0;
    do{
        cout << "Enter the how old are you: ";
        cin >> d;
    }while (d <= 0);
    switch(d){
        case 1:
            cout << "One\n";
            cout << "Work day\n";
        break; // конец функции case
        case 2:
            cout << "Two\n";
            cout << "Work day\n";
        break;
        case 3:
            cout << "Three\n";
            cout << "Work day\n";
        break;
        case 4:
            cout << "Four\n";
            cout << "Work day\n";
        break;
        case 5:
            cout << "Five\n";
            cout << "Work day\n";
        break;
        case 6:
            cout << "Six\n";
            cout << "Ven day\n";
        break;
        case 7:
            cout << "Seven\n";
            cout << "Ven day\n";
        break;
        // default:
        //     cout << "smth\n";
    }
}

