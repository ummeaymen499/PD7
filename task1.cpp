#include <iostream>
using namespace std;
void diamond(int rowsize);
main()
{
    int rowsize;
    cout<<"Enter the number of rows: ";
    cin>>rowsize;
    diamond(rowsize);

}
void diamond(int rowsize)
{
for(int row=1;row<=rowsize;row++)
{
    for(int col=10;col>=row;col--)
    {
     cout<<"*";
    }
    cout<<endl;
}
}