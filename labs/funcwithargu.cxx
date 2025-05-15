#include <iostream>
using namespace std;

void withArguments(int num1, int num2) {
    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
}

int main() {
    withArguments(4, 8);
    return 0;
}
