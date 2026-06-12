#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int mat[2][3];
    int m=2,n=3;
    int k=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=arr[k++];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}