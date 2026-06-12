#include<iostream>
using namespace std;

void convert(int arr[],int m,int n){
    int mat[2][3];
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
}

int main(){
    int arr[]={1,2,3,4,5,6};
    convert(arr, 2, 3);
    
    return 0;
}