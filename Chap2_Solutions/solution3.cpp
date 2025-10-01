#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[200];
    cout<<"Nhap vao mot chuoi bat ky: ";
    cin.getline(s,200);
    int uppercase_alphabet_count = 0;
    int spacing_count = 0;
    int numeric_characters_count = 0;
    for (int i = 0; i<strlen(s); i++){
        if (s[i]>='0' and s[i]<='9') numeric_characters_count++;
        if (s[i]>='A' and s[i]<='Z') uppercase_alphabet_count++;
        if (s[i] == ' ') spacing_count++;
    }
    cout<<"So ki tu la mot khoang trang: "<<spacing_count<<endl;
    cout<<"So ki tu la mot ki tu so: "<<numeric_characters_count<<endl;
    cout<<"So ki tu la mot ki tu chu cai in hoa: "<<uppercase_alphabet_count<<endl;
}