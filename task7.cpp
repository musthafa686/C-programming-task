#include<iostream>
using namespace std;

void swap(int *x ,int *y );
//Call By Reference
int main()
{
    int a,b;
    cout<<"\nEnter Two Number You Want To Swap \n";
    cin>>a>>b;
    
    swap(&a,&b);
    
 cout<<"\nAfter Swapping Numbers Are Given below\n\n";
    cout<<a<<"   "<<b<<" \n";
    
    return 0;
}
void swap(int *x,int *y)
{
 int z;
 z=*x;
 *x=*y;
 *y=z; 
 
}
