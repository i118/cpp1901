#include <iostream>
using namespace std;
int getValueFromUser();

int main(){
    const short COUNT = getValueFromUser();
    int arr[COUNT][COUNT];
    for (int i = 0; i < COUNT; i++){
        for (int j = 0; j < COUNT; j++)
        {
            arr[i][j] = 0;
        }
    }
    return 0;
}

int getValueFromUser(){
    cout << "Ведите целочисленое значение: ";
    int al = 0;
    cin >> al;
    return al;
}