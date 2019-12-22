#include <iostream>
#include <cstring>
#include <cmath> // для pow
using namespace std;
int main(){
    const int number = 10;
    int arr[number];
    int count = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < count; i++)
    {
        arr[i] = i * 2; // из за * 2 оно выводить только чётные числа
        cout << arr[i] << endl;
    }
    cout << endl; // ввыводить пустую строку
    for(int i = 0; i < count; i++)
    {
        cout << arr[i] * arr[i] << endl;// а также можно было зделать pow(arr[i],2), но 1 вариант быстрее.
    }
    return 0;
}
                                                                                                                                //    O
                                                                                                                                //  '/|\'
                                                                                                                                //  '/ \'
