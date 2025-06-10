// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void asterisksblock() {
    int n = 5;
    do {
        cout <<"\n*";
        int m = 10;
        do{
            cout <<"*";
            m--;
        } while(m > 0);
        n--;
    } while(n > 0);
}
int main() {
    asterisksblock();
    return 0;
}