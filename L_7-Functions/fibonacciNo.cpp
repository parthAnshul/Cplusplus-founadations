// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1


// Input Format :
// Integer N
// Output Format :
// true or false
// Constraints :
// 0 <= n <= 10^4
// Sample Input 1 :
// 5
// Sample Output 1 :
// true
// Sample Input 2 :
// 14
// Sample Output 2 :
// false    
#include<iostream>
using namespace std;

bool checkFibonacci(int n){
    bool descision = false;
    int n1, n2, n3 = 0;
    n1 = 1;
    n2 = 1;
    if (n==n1 || n==n2)
    {
        descision = true;
    }
    n3 = n1 +n2;
    while(n3<=n){
        if (n3 == n){
            descision = true;
        }
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    return descision;
}

int main() {
    int a;
    cin >> a;
    bool fibo = checkFibonacci(a);
    if (fibo)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
}