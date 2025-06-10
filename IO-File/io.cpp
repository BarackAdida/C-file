#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream fin;
    ofstream fout;

    fin.open("input.txt");
    fout.open("output.txt");

    int num1, num2, num3;

    fin >> num1;    
    fin >> num2;    
    fin >> num3;
    
    fout << "The sum is: \n" <<num1 + num2 + num3 << "\n";
    fin.close();
    fout.close();
    cout << "Success!" <<"\n";

    return 0;
}