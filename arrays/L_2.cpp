/*Q: Find the maximum element in an array.
*/
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 25, 7, 89, 45};
    int n = 5;

    // Assume first element is maximum
    int max = arr[0];

    // Start checking from second element
    for(int i = 1; i < n; i++) {

        // If current element is greater
        if(arr[i] > max) {

            // Update max
            max = arr[i];
        }
    }

    cout << "Maximum Element = " << max;

    return 0;
}