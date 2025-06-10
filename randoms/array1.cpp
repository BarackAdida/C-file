#include <iostream>
using namespace std;

void array55() {    
    int ar4[5];
    for(int i = 0; i < 5; i++)  // Loop runs 5 times (0 to 4)
        cin >> ar4[i];          // Store input at correct index

    for (int i = 0; i < 5; i++)
        cout << ar4[i] << "\n";
}

int main() {
    array55();
    return 0;
}
