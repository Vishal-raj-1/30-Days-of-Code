#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n,phNo;
    string name;
    cin >> n;

    map <string,int> phoneBook;

    for(int i=0; i<n; i++)
    {
        cin >> name >> phNo;

        phoneBook.insert({name,phNo});
    }

    while(cin >> name)
    {
        auto itr = phoneBook.find(name);
        
        if(itr == phoneBook.end())
            cout << "Not found";
        else
            cout << itr -> first << "=" << itr -> second;

        cout << '\n';
    }

    return 0;
}