// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //transpose of the matrix
    for(int i = 0;i<3;i++){
        for(int j =i;j<3;j++){
            swap(array[i][j],array[j][i]);
        }
    }
    //reversing each column
    for(int i = 0;i<3;i++){
        int l=0;
        int m = 2;
        while(l<=m){
            swap(array[l][i],array[m][i]);
            l++;
            m--;
        }
    }
    //printing the anticlockwise rotated matrix;
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<array[i][j]<<" ";

        }cout<<endl;
    }
}