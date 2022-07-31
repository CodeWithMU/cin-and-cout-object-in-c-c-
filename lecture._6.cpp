#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a:";
    cin >> a;
    cout << "enter the value of b:";
    cin >> b;
    cin.ignore();
    string s;
    getline(cin, s);
    cout << "the value of a is :" << a << endl;
    cout << "the value of b is :" << b << endl;
    cout << "the value of s is :" << s << endl;
    return 0;
}