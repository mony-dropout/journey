#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5, 7};  // First sorted sequence
    vector<int> v2 = {2, 6, 4, 8};  // Second sorted sequence

    // Create a vector to store the merged result
    vector<int> merged(v1.size() + v2.size());

    // Merge the two sorted sequences
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), merged.begin());

    // Print the merged sequence
    cout << "Merged sequence: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    // Find the 4th smallest element
    cout << "4th smallest element: " << merged[3] << endl;

    return 0;
}
