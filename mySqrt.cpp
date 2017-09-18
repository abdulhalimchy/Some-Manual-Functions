#include<iostream>
using namespace std;

double mySqrt(double n)
{
    double high=n, low=0.0, mid;
    for(int i=1; i<=64; i++)
    {
        mid = (low+high)/2.0;
        if(mid*mid>n)
            high=mid;
        else
            low=mid;
    }
    return mid;
}

int main()
{
    int n;
    while(cin >> n)
    {
        cout << mySqrt(n) << endl;
    }
    return 0;
}
