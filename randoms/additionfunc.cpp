// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void calc (int num1, int num2) {
    cout << "Enter two numbers, num1, num2 to culculate the sum:\n";
    cin >> num1;
    cin >> num2;
    int sum = num1 + num2;
    cout << sum;
}

int main() {
    calc(num1, num2);
    return 0;
}

