#include <iostream>
using namespace std;

float meanarray(int arr[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    float average = sum/ n;
    return average;
}

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    float average = meanarray(arr, n);
    cout << "The average is: " << average << endl;

    return 0;
}
