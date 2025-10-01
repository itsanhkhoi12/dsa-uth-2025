#include <iostream>
using namespace std;

struct Date
{
    int day, month, year;
};

struct Student
{
    char name[55];
    char student_id[13];
    Date birthday;
};

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    Student s[n];
    cout << "Nhap thong tin cac sinh vien...";
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ": "<<endl;

        cout << "Nhap MSSV cua sinh vien do: ";
        cin.ignore();
        cin.getline(s[i].student_id, 13);

        cout << "Nhap ho va ten cua sinh vien do: ";
        cin.getline(s[i].name, 55);

        cout << "Nhap ngay sinh cua sinh vien do (ngay, thang, nam cach nhau boi dau cach): ";
        cin >> s[i].birthday.day >> s[i].birthday.month >> s[i].birthday.year;
    }

    int july_students_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].birthday.month == 7)
        {
            if (july_students_count == 0)
            {
                cout << "STT\tMSSV\tHo va ten\tNgay sinh" << endl;
            }
            cout << july_students_count+1 << "\t" << s[i].student_id << "\t" << s[i].name << "\t\t";
            cout << s[i].birthday.day << "/" << s[i].birthday.month << "/" << s[i].birthday.year<< endl;
            ++july_students_count;
        }
    }
    if (july_students_count == 0)
    {
        cout << "Khong co sinh vien nao sinh vao thang 7...";
    }
    return 0;
}