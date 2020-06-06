#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    string s;

    for(int i=0; i<t; i++)
    {
        cin >> s;
        cin.ignore();

        for(int j = 0; j < s.size() ; j += 2)
            cout << s[j];

        cout << " ";

        for(int j = 1; j < s.size(); j += 2)
            cout << s[j];

        cout << "\n";
    }
}