int search(int* arr, int n, int key) 
{    
    // Write your code here.
    int low = 0, high = n - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {

            return mid; // Key found

        }

        // Check if the left half is sorted

        if (arr[low] <= arr[mid]) {

            if (arr[low] <= key && key < arr[mid]) {

                high = mid - 1; // Search in the left half

            } else {

                low = mid + 1; // Search in the right half

            }

        } else { // Right half is sorted

            if (arr[mid] < key && key <= arr[high]) {

                low = mid + 1; // Search in the right half

            } else {

                high = mid - 1; // Search in the left half

            }

        }

    }

    return -1; // Key not found

}
