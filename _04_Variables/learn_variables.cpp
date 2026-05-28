#include<iostream>
using namespace std;

int main() 
{
    char var1 = 'A';
    cout << "var1: " << var1 << " size: " << sizeof(var1) << endl;

    char16_t var2 = 'a';
    cout << "var2: " << var2 << " size: " << sizeof(var2) << endl;      // printing ASCII value

    char32_t var3 = 'b';
    cout << "var3: " << var3 << " size: " << sizeof(var3) << endl;

    wchar_t var4 = 'd';
    cout << "var4: " << var4 << " size: " << sizeof(var4) << endl;


    float var5 = 3.5f;
    cout << "var5: " << var5 << " size: " << sizeof(var5) << endl;

    double var6 = 3.56;
    cout << "var6: " << var6 << " size: " << sizeof(var6) << endl;

    long var7 = 876329230023;
    cout << "var7: " << var7 << " size: " << sizeof(var7) << endl;

    long double var8 = 3.5L;
    cout << "var8: " << var8 << " size: " << sizeof(var8) << endl;

    bool var9 = true;
    cout << "var9: " << var9 << " size: " << sizeof(var9) << endl;

}