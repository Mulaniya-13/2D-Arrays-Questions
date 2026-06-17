#include<iostream>
using namespace std;

bool searchMatrix(int mat[][4],int m,int n,int target){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int m=3;
    int n=4;
    int target=7;
    if(searchMatrix(mat,m,n,target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}