#include<iostream>
using namespace std;

void rotate(int mat[][3],int n){
    //transpose
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        swap(mat[i][j],mat[j][i]);
       }   
    }

    //reverse
    for(int i=0;i<n;i++){
        int st=0,end=n-1;
        while(st<end){
            swap(mat[i][st],mat[i][end]);
            st++;
            end--;
        }
    }

    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    rotate(mat,3);
    return 0;
}