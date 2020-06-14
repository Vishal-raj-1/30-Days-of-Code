#include<iostream>
#include<cmath>
using namespace std;

void solve(double meal_cost,int tip_percent,int tax_percent)
{
   int total_cost = round(meal_cost + meal_cost*(tip_percent + tax_percent)/100);

   cout << total_cost;
}

int main()
{
    double meal_cost;
    int tip_percent,tax_percent;
    //ws == Whitespace 
    cin >> meal_cost >> ws >> tip_percent >> ws >> tax_percent; 
    
    solve(meal_cost,tip_percent,tax_percent);
    
    return 0;
}
