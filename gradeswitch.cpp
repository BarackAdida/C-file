#include <iostream>
using namespace std;

void gradeswitch() {
    char grade;

    do {
        cout << "\n\tGRADE MENU\n"
             << "A - Excellent\n"
             << "B - Very Good\n"
             << "C - Good\n"
             << "D - Fair\n"
             << "E - Poor\n"
             << "F - Fail\n"
             << "X - Exit\n";
             
        cout << "Enter Grade or X to exit: ";
        cin >> grade;

        switch (toupper(grade)) {
            case 'A':
                cout << "Excellent\n";
                break;
            case 'B':
                cout << "Very Good\n";
                break;
            case 'C':
                cout << "Good\n";
                break;
            case 'D':
                cout << "Fair\n";
                break;
            case 'E':
                cout << "Poor\n";
                break;
            case 'F':
                cout << "Fail\n";
                break;
            case 'X':
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid Grade, try again.\n";
        }

    } while (toupper(grade) != 'X');
}

int main() {
    gradeswitch();
    return 0;
}
