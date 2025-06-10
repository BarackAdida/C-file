#include <iostream>
using namespace std;

void converter() {
    int pence;
    cout << "Enter the amount you want to covert to pounds:\n";
    cin >> pence;
    float pound = pence / 100.0;
    cout <<pound;
}

int main () {
    converter();
}