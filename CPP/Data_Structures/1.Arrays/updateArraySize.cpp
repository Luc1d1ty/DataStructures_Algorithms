#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int original_array[5] = {1, 2, 3, 4, 5};
    int new_size = 8;

    // Create a new array with the new size
    int new_array[new_size];

    // Copy the elements from the old array to the new array
    copy(original_array, original_array + 5, new_array);

    // Update the size of the original array by assigning the new array to it
    copy(new_array, new_array + new_size, original_array);

    // Print the elements of the updated array
    for (int i = 0; i < new_size; i++) {
        cout << original_array[i] << " ";
    }

    return 0;
}
