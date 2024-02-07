#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;  
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  
}


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1];
    int rightArr[n2];

    for (int i = 0; i < n1; ++i) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}


void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;


	for (i = 0; i < n - 1; i++) {

		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}


		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}
int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);
  return i + 1;
}


void quicksort(int arr[], int low, int high) {
  if (low < high) {
    int pivotIndex = partition(arr, low, high);

    quicksort(arr, low, pivotIndex - 1);
    quicksort(arr, pivotIndex + 1, high);
  }
}

int main() {


    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cout<<endl<<endl;
     cout<<" Choice Search : ";
    cin >> choice;

    if (choice == 1) {
        int target;
        cout << "Enter the target element for Linear Search: ";
        cin >> target;
        int result = linearSearch(arr, n, target);
        if (result != -1) {
            cout << "Element found at index: " << result << endl;
        } else {
            cout << "Element not found." << endl;
        }
    } else if (choice == 2) {
        int sortChoice;
        cout<<endl<<endl;
        cout << "Choose a sorting algorithm:" << endl;
         cout << "1. Bubble Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Insertion Sort" << endl;
         cout << "4. Selection Sort" << endl;
          cout << "5. Quick Sort" << endl;
          cout<<endl<<endl;
          cout<<"The number of sort choice : ";
        cin >> sortChoice;

          if (sortChoice == 1) {
           bubbleSort(arr, n);
        }else if (sortChoice == 2) {
            mergeSort(arr, 0, n - 1);
        } else if (sortChoice == 3) {
            insertionSort(arr, n);
        } else if (sortChoice == 4) {
            selectionSort(arr, n);
        } else if (sortChoice == 5) {
            quicksort(arr,0,n);
        }
        cout<<endl<<endl;
        cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl<<endl;

        int target;
        cout << "Enter the target element for Binary Search: ";
        cin >> target;
        int result = binarySearch(arr, n, target);
        if (result != -1) {
            cout << "Element found at index: " << result << endl;
        } else {
            cout << "Element not found." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }

return 0;
}
