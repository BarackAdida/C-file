#include <iostream>
using namespace std;

void twoArrays () {
    float A[5];
    float B[5];
    int sumA = 0;
    int sumB = 0;
    int productSum = 0;
    int n;
    cout << "Enter the elements of the first array, A\n";
    for (int i = 0; i < 5; i++)
    cin >> A[i];
    for (int i = 0; i < 5; i++)
    sumA += A[i];
    cout <<"Sum of elements in A is:\n" << sumA <<"\n";
    

    cout << "Enter elements of the second array, B\n";
    for (int t = 0; t < 5; t++)
    cin >> B[t];
    for (int t = 0; t < 5; t++)
    sumB += B[t];
    cout <<"Sum of elements in B is:\n"<< sumB <<"\n";

    float productarr[5];
    for (int i = 0; i < 5; i++)
    productarr[i] = A[i]*B[i];
    cout << "The product of the corresponding elements are:\n";
    for (int i = 0; i < 5; i++)
    cout << productarr[i] <<"\n";

    float squareDiffArr[5];
    for(int i = 0; i < 5; i++)
    squareDiffArr[i] = (A[i] - B[i])*(A[i] - B[i]);
    for (int i = 0; i < 5; i++)
    productSum += squareDiffArr[i];
    float squareDiffSum = productSum / 5;
    cout <<"The sum of the squared differences is:\n" << squareDiffSum << "\n";
}

int main() {
    twoArrays();
    return 0;
}