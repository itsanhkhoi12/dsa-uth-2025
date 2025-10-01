#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so luong phan tu (so luong tu 1-99): ";
    cin >> n;
    if (n <= 0 || n >= 100)
    {
        return -1;
    }
    else
    {
        int arr[n], odd_arr[n];
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap phan tu thu " << i << ": ";
            cin >> arr[i];

            if (arr[i] % 2 == 1)
            {
                odd_arr[odd_count] = arr[i];
                ++odd_count;
            }
        }
        if (odd_count > 0)
        {
            cout << "Mang cac phan tu so le: ";
            for (int i = 0; i < odd_count; i++)
            {
                cout << odd_arr[i] << " ";
            }
        }
        else
        {
            cout << "Khong co phan tu nao la so le!";
        }
    }
}