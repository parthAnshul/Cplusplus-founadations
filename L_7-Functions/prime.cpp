// a program to print all the prime no.s within the given range
#include<iostream>
using namespace std;
bool isPrime(int n){
    for (int i= 2; i < n-1; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int i =2;
    while (i <= n){
        if (isPrime(i))
        {
            cout << i << endl;
        }
        i++;
    }
}