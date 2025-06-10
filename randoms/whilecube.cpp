#include <iostream>
using namespace std;

int main() {
 int number = 99;

 while (number >= 51) {
  int cube = number*number*number;
  cout <<cube <<"\n";
  number = number - 2;
 }
    return 0;
}