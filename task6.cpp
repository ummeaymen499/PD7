#include <iostream>
using namespace std;
bool isPrime(int);
int primorial(int);
main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<primorial(n);
}

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
         return false;
        }
    }
    return true;
}

int primorial(int n)
{
    int pro = 1, i = 2;
    while(n!=0)
    {
        if(isPrime(i))
        {
            pro *= i;
            n--;
        }
        i++;
    }
    return pro;
}