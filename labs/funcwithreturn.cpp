#include <iostream>
using namespace std;

string withreturns() {
    string story = "You must be crazy!";
    return story;
}

int main() {
    string words = withreturns();
    cout << words <<"\n";
    return 0;
}