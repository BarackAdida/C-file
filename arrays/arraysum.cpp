#include <iostream>
using namespace std;

void arraySum (){
    int sum = 0;
    int arr[] = {2,3,4,5,6};
    for(int i = 0; i < 5; i++)
    sum += arr[i];
    cout << sum <<"\n";
}

int main() {
    arraySum();
    return 0;
}