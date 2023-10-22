#include<iostream>

using namespace std;

int triangle(int);

main()
{
    int number;
    cout<<"Enter number of Triangle: ";
    cin>>number;
    int dots=triangle(number);
    cout<<"Dots in the Triangle: " <<dots;  
}
int triangle(int num)
{
    int dot= 0;
    int pre= 0;
    for (int i=1;i<=num;i++)
    {
        dot=i+pre;
        pre=pre+i ;
    }
    return dot;
}