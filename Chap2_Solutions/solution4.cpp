#include <iostream>
using namespace std;

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
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap phan tu theo thu tu tang dan!!!\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                DeletingAnElement(a, n, j);
                j--;
            }
        }
    }
    cout << "Mang moi sau khi xoa phan tu trung lap: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}