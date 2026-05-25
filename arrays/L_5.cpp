/*Q:Count how many numbers are even and how many are odd in an array.
*/
#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    // Counters
    int even = 0;
    int odd = 0;

    // Traverse array
    for(int i = 0; i < n; i++) {

        // Check if number is divisible by 2
        if(arr[i] % 2 == 0) {

            // Even number
            even++;
        }
        else {

            // Odd number
            odd++;
        }
    }

    cout << "Even Numbers = " << even << endl;
    cout << "Odd Numbers = " << odd;

    return 0;
}