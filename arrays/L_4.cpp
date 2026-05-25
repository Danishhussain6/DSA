/*Q: Find the average of all the elements in an array.
*/
#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Variable to store sum
    int sum = 0;

    // Loop through array
    for(int i = 0; i < n; i++) {

        // Add each element to sum
        sum = sum + arr[i];
    }

    // Calculate average
    float average = (float)sum / n;

    // Print average
    cout << "Average = " << average;

    return 0;
}