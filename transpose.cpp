#include<iostream>
using namespace std;

int transpose(int mat[][3],int n,int m){
    int trans[3][2]={{0}};
    //transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i]=mat[i][j];
        }
    }

    //print the transposed matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int mat[2][3]={{1,4,9},
                    {11,4,3} };
    transpose(mat,2,3);                
    return 0;                
}