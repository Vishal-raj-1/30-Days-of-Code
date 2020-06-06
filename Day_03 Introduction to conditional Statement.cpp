#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    if(n&1 || (n <= 20 && n > 5))
    cout << "Weird\n";
    else
    cout << "Not Weird\n";
    
    return 0;
}