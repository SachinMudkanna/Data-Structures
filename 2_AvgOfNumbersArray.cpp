#include<iostream>
using namespace std;
int avg(int[],int);
int main()
{
    int n;
    cout<<"Enter Size of Array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Number\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"\n"<<avg(arr,n);
}
int avg(int A[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=A[i];
    return (sum/size);
}

