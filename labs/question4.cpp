#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "What is your year of birth?\n";
    cin >>year;
    while (year <= 2025){
        cout << year << "\t" "Happy Birthday\n";
        year++;
    }
    return 0;
}