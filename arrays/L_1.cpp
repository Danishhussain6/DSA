/*Q:
Find the sum of all the elements in an array.
*/
#include <iostream>
using namespace std;

int main() {

    // Array declaration
    int arr[] = {1, 2, 3, 4, 5};

    // Total number of elements
    int n = 5;

    // Variable to store sum
    int sum = 0;

    // Loop through array
    for(int i = 0; i < n; i++) {

        // Add each element to sum
        sum = sum + arr[i];
    }

    // Print final sum
    cout << "Sum = " << sum;

    return 0;
}