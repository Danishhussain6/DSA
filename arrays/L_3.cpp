/*Q: Find the minimum element in an array.
*/
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 25, 7, 89, 45};
    int n = 5;

    // Assume first element is minimum
    int min = arr[0];

    // Check remaining elements
    for(int i = 1; i < n; i++) {

        // If smaller element found
        if(arr[i] < min) {

            // Update minimum
            min = arr[i];
        }
    }

    cout << "Minimum Element = " << min;

    return 0;
}