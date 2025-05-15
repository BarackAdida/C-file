// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int withreturnsandarguements(int num1, int num2) {
   return num1 - num2;
}

int main() {
    int calc = withreturnsandarguements(10, 4);
    cout << calc <<"\n";
    return 0;
}