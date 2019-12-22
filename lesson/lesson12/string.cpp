#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int number = 10;
    char surname[20];
    char name1[number] = {'a','r','t','e','m'}; // это массив-набор значений в контейнере. [10] - 10 максимум элементов
    char name2[number] = {'a','r','t','e','m','\0'}; // \0 это Enter - завершение строки,  в принецепе это строка, хоть и через массив.
    char name3[] = "Artem";
    // cout << strlen(name1) << endl;
    // cout << strlen(name2) << endl;
    // cout << strlen(name3) << endl;
    // cout << name1 << endl;
    // cout << name2 << endl;
    // cout << name3 << endl;
    // cout << name3[2] << endl;
    // for(int i = 0; i < number; i++)//v1
    //for(int i = 0; i < strlen(name3); i++)//v2
    for(int i = 0; i < sizeof(name2); i++)//v3
        cout << name2[i] << endl;

    return 0;
}
                                                                                                                                //    O
                                                                                                                                //  '/|\'
                                                                                                                                //  '/ \'
