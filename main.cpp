#include <iostream>
using namespace std;

int findMax(int* arr, int size) {
    int* ptr = arr;
    int max = *ptr;

    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max)
            max = *ptr;
    }
    return max;
}

int main() {
    int arr[] = {45, 78, 12, 89, 34, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    cout << "Maximum element: " << max << endl;

    return 0;
}
