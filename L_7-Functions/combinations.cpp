//a program to calculate nCr(combinations)
#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    int i = 1;
    while (i <= n)
    {
        ans = ans * i;
        i = i + 1;
    }
    return ans;
}
int main() {
    int n, r;
    cout << "enter the value of n and r" << endl;
    cin >> n >> r;
    if (n >= r)
    {
    
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r); 
    int ans = fact_n/(fact_r*fact_n_r);
    cout << ans << endl;
    }
    else{
        cout << "value of n should be greater than n";
    }
}