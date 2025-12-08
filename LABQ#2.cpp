#include<iostream>
using namespace std
main()
{
    int n;
    int sum0, sum1, sum2, sum3;
    cout<< "Total numbers:";
    cin>> n;
    for (int i=1; i<=n; i++){
    cout<< "Enter number: ";
    int a1;
    cin>> a1;}
    for (int x=1; x<=n; x++){
        if(a1%4==0)
         sum0=a1;
    }
    for (int y=1; y<=n; y++){
        if(a1%4==1)
        sum1=a1;
    }
    for (int z=1; z<=n; z++){
        if(a1%4==2)
         sum2=a1;
    }
    for (int w=1; w<=n; w++){
        if(a1%4==3)
        sum3=a1;
    }
   cout << sum0 /n sum1 /n sum2 /n sum3;

    
}