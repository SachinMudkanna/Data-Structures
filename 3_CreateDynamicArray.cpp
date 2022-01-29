#include<iostream>
using namespace std;
int* createNewArray(int A[],int B[],int n,int m);
int main()
{
    int n,m;
    cout<<"Enter Size of Two Array\n";
    cin>>n>>m;
    int A[n],B[m];
    cout<<"Enter "<<n<<" Number of First Array\n";
    for(int i=0;i<n;i++)
        cin>>A[i];

    cout<<"Enter "<<m<<" Number of Second Array\n";
    for(int i=0;i<m;i++)
        cin>>B[i];

    int *arr;
    arr=createNewArray(A,B,n,m);

    for(int i=0;i<n+m;i++)
        cout<<*arr++<<" ";
}
int* createNewArray(int A[],int B[],int n,int m)
{
    int *arr;
    arr=new int[n+m];

    for(int i=0;i<n+m;i++)
    {
        if(i<n)
            arr[i]=A[i];
        else
            arr[i]=B[i-n];
    }
    return arr;
}
