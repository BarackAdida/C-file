#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

void calcmix () {
    int num1;
    int tries = 4;
    do {
        cout << "Enter a number you want to find its random value when powered:\n";
        cin >> num1;
        srand(time(0));
        int number = rand() % 20;
        long complx = pow(num1, number);
        cout << "You entered:\n" <<num1 <<"\nThe random number to be used as power is:\n" <<number <<"\nAnd the power is:\n" <<complx <<"\n"; 
        tries--;
        cout << "You have:" <<tries <<"\ttrials remaining!\n";
    }while(tries > 0);
    cout << "Your trials are over, exiting system...\n";
}

int main () {
    calcmix();
}


