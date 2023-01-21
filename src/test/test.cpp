#include <iostream>
#include <string>

using namespace std;

int main()
{
    // test fuzzy
    string aaa = "12345";
    int c = aaa.rfind("345", 0);
    cout << aaa.rfind("123", 0) << endl;
    cout << aaa.rfind("12345", 0) << endl;
    cout << c << endl;
    cout << aaa.rfind("", 0) << endl;

    // test string
    string bbb = "aaa" + aaa;
    cout << bbb << endl;

}