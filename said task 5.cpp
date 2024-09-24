#include <iostream>
using namespace std;

int main() {
    const int SIZE =2; 
    int arr[SIZE];

    cout << "Enter integer values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < SIZE / 2; i++) {
        if (arr[i] != arr[SIZE - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }


    if (isPalindrome) {
        cout << "The array is a palindrome" << endl;
    } else {
        cout << "The array is not a palindrome" << endl;
    }

    return 0;
}

