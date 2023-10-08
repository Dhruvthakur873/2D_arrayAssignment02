// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 1 3
//  5
// 7 9
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // 0 to 2 is length of thi arraay;
    int n= 2;
    for(int i = 0;i<3;i++){
        for(int j =0;j<=3;j++){
            if(i==j){
                cout<<array[i][j]<< " ";
            } 
            else if(i+j==n) {
                cout<<array[i][j]<< " ";
            }
            else{
                cout<<" ";
            }   
        }cout<<endl;
    }
}