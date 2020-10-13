#include <iostream>
using namespace std;
int main()
{
    int rows1=7;
    for(int i=1;i<=rows1;i++)
    {
        for(int k=1;k<i-1;k++)
        {
            k++;
            cout<<" ";

        }

        for(int j=i;j<=rows1;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    int rows=7;
    for(int i = rows-1; i >= 1;--i)
    {

     for(int k=1;k<i-1;k++)
        {
            k++;
            cout<<" ";

        }
        for(int j=i; j<=rows;++j)
        {
            cout << j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
