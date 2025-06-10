#include <iostream>
using namespace std;

int main() {
    int year;
    cout <<"Enter year of birth!\n";
    cin >> year;
    int leap_year = year % 4;

    if (leap_year == 0)
    cout << "You were born in a leap year\n";

    else
    cout << "You were not born in a leap year\n";

}