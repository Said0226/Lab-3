#include <iostream>
using namespace std;

int factorial(int n)
 {
    int result = 1;
    for (int i = 1; i <= n; i++) 
	{
        result *= i;
    }
    return result;
}

int main() 
{
    int arr[] = {3, 7, 2, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    cout << "Average of the elements: " << average << endl;
    cout << "Factorials of the elements: ";
    for (int i = 0; i < size; i++) {
        cout << factorial(arr[i]) << " ";
    }
    return 0;
}

