#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;


    for(int j=1; j<=10; j++)
    {
        cout << n << " x " << j << " = " << n*j << "\n";
    }

    return 0;
}