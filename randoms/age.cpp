#include <iostream>
#include <string>

using namespace std;

int main() {
    int year_of_birth;
    int current_year = 2025;
    cout <<"What is your year of birth?\n";
    cin >> year_of_birth;
    int age = current_year - year_of_birth;
    cout << "You are\t" <<age<< "yrs\t old\n";
    return 0;
}