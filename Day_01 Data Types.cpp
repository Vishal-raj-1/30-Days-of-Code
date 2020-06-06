#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int j;
    double k;
    string input_string;
    cin >> j >> k;
    
    getline(cin >> ws,input_string);
    
    cout << i + j << "\n";
    cout << fixed <<setprecision(1) << k + d << "\n";
    cout << s + input_string << "\n";
    
    return 0;
}