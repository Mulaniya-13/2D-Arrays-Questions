#include<iostream>
using namespace std;

void print(int mat[][3],int n,int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==7){
                cout<<i<<","<<j<<endl;
                count++;
            }
        }
    }
    cout<<"Total occurrences of 7: "<<count<<endl;
}

int main(){
    int mat[2][3]={ {4,7,8},
                    {8,8,7} };
    print(mat,2,3);
    return 0;


}