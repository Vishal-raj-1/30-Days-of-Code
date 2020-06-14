#include<iostream>
using namespace std;

int main()
{
    int n,temp = 0,ans = 0;
    cin >> n;

    while(n > 0)
    {
        if(!(n%2))
            temp = 0;
        else
        {
            temp++;
            if(ans < temp)
                ans = temp;
        }

        n /= 2;
    }
    
    cout << ans << "\n";
    
    return 0;
}