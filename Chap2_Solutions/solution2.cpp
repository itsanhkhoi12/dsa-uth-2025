#include <iostream>
using namespace std;

/* Using Binary Search to search an element and return its index
   if exists in an ascending order array, otherwise return -1 */
int BinarySearch(int A[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    do
    {
        int mid = (low + high) / 2;
        if (A[mid] == target)
        {
            return mid;
        }
        else if (A[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    } while (low <= high);
    return -1;
}

// Using Bubble Sort in order to sort an array in an ascending order
void BubbleSorting(int A[], int &size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] > A[j])
            {
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
}

// Deleting an element in an array using its index
void DeletingAnElement(int A[], int &size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        A[i] = A[i + 1];
    }
    --size;
}

int main()
{
    int n;
    int target;
    cout << "Moi ban nhap so luong phan tu: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Moi ban nhap phan tu thu " << i << ": ";
        cin >> arr[i];
    }
    BubbleSorting(arr, n);
    cout << "Moi ban nhap phan tu can xoa: ";
    cin >> target;
    int target_index = BinarySearch(arr, n, target);
    if (target_index == -1)
    {
        cout << "\nKhong ton tai phan tu do!";
    }
    else
    {
        DeletingAnElement(arr, n, target_index);
        cout << "\nDa xoa phan tu do!";
        cout << "\nMang so sau khi xoa phan tu " << target << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}