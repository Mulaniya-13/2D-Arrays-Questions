#include<iostream>
using namespace std;

void sum(int mat[][3],int n,int m){
     int sum=0;
     for(int j=0;j<m;j++){
        sum+=mat[1][j];
     }
     cout<<"Sum of second row : "<<sum<<endl;
    }

int main(){
    int nums[3][3]={{1,4,9},
                    {11,4,3},
                      {2,2,3} };
    sum(nums,3,3);
    return 0;
}