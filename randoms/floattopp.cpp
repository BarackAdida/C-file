#include <iostream>
using namespace std;

void floattopp(float q, int& L, int& P) {
    L = q;
    P = (q - L) * 100; 
}

int main() {
    float money;
    int pounds, pence;
    cout << "Enter the amount\n";
    cin >> money;
    floattopp(money, pounds, pence);
    cout <<money <<pounds <<pence;
}
