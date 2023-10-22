#include <iostream>
using namespace std;
void diamond(int rowsize);
main()
{
    int rowsize;
    cout << "Enter the number of rows: ";
    cin >> rowsize;
    diamond(rowsize);
}
void diamond(int rowsize)
{
    for (int row = 1; row <= rowsize; row++)
    {      int space=10;
        for (;space>=row;space--)
        {
            cout <<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout << endl;  
    }

}