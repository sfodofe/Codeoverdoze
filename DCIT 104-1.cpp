#include <iostream>

using namespace std;

int main()
{
    int a,b,j,f=0,sum=0;
    cout <<"Enter First Number ";
    cin >> a;
    cout <<"Enter Last Number ";
    cin >> b;
    while(a<=b)
    {
        f=0;
        for(j=2;j<=a/2;j++)
        {
            if(a%j==0)
            {
                f=1;
                break;
            }
        }

        if(f==0)
        {
        sum=sum+a;
        cout<<a<<" is prime.\n";
        }
        a=a+1;
    }
    cout<<"The sum of all prime numbers between this range is " << sum;
}

