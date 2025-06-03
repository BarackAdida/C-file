#include <iostream>
using namespace std;

void maxarr() {
    int arr[] = {4, 5, 7, 8, 9, 2};
    int n = arr[0];
    for(int i = 0; i < 5; i++)
        if (arr[i] > n)
        n = arr[i];

    cout << n <<"\n";
}

int main () {
    maxarr();
    return 0;
}