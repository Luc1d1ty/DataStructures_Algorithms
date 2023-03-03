#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copy elements from the source array to the destination vector
    copy(source, source + 5, destination);

    // Print the elements of the destination vector
    for (int i = 0; i <5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
