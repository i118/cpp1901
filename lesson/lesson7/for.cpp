#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i <= 10; i++) //цикл (вместо i++ поставить i + 2 или убрать i <= 10 и оставить ; то будет бесконечный цикл)
    {
        cout << 2*i << endl;
    }

    return 0;
}
