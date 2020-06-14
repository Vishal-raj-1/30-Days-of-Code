#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector < vector<int> > v(6);

    for(int i=0; i<6; i++)
    {
        v[i].resize(6);

        for(int j=0; j<6; j++)
            cin >> v[i][j];
    }

    vector<int> sum(16);

    int k = 0;

    for(int i=0; i<4 ; i++)
    {
        for(int j=0; j<4 ; j++)
            sum[k++] = v[i][j] + v[i][j+1] + v[i][j+2] +
                       v[i+1][j+1] + v[i+2][j] + v[i+2][j+1] + v[i+2][j+2];
    }
    
    sort(sum.begin(),sum.end());
    
    cout << sum[15] << "\n";
    return 0;
}