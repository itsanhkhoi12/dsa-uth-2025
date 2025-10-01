#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Nhap so luong phan tu mang dau tien: ";
    cin >> m;
    int a[m];

    for (int i = 0; i < m; i++)
    {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }

    cout << "Nhap so luong phan tu mang thu hai: ";
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> b[i];
    }
    cout<<"Cac phan tu chung o ca hai mang: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}