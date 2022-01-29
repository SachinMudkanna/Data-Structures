#include<iostream>
using namespace std;
int maxValue(int A[],int size);
int main()
{
    int n;
    cout<<"Enter Size of Array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Number\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"\n"<<maxValue(arr,n);
}
int maxValue(int A[],int size)
{
    int large=A[0];
    for(int i=0;i<size;i++)
        if(large<A[i])
            large=A[i];
    return large;
}
