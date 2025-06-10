#include <iostream>
#include <fstream>
using namespace std;

void ioSum () {
    ofstream fout;
    fout.open("output.txt");
    int a, b, c;
    cout << "Enter any three numbers:\n";
    cin >> a >> b >> c;
    
    fout << "Second sum is:\n" << a + b + c << "\n";
    fout.close();
    cout << "Success!!\n";
}

int main () {
    ioSum();
    return 0;
}