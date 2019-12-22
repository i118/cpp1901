#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i <= 10; i++) //цыкл (в место i++ поставить i + 2 или убать i <= 10 и оставить ; то будет бесконечный цыкл)
    {
        cout << 2*i << endl;
    }

    return 0;
}