// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a day(1 to 5)\n";
    cin >> day;
    switch (day) {
        case 1:
        cout << "Monday\n";
        break;
        case 2:
        cout << "Tuesday\n";
        break;
        case 3:
        cout <<"Wednesday\n";
        break;
        case 4:
        cout << "Thursday\n";
        break;
        case 5:
        cout <<"Friday\n";
        break;
        default:
        cout << "Invalid day\n";
    }
    
    return 0;
}

