// Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int j=0;j<3;j++)
        for(int i=0;i<3;i++){
            int l=0;
            int m=2;
            while(l<=m){
                if(j%2!=0){
                    swap(array[l][j],array[m][j]);
                    l++;
                    m--;
                }
            }
        }
    for(int j =0;j<=2;j++){
        for(int i = 2;i>=0;i--){
            cout<<array[i][j]<<"  ";
        }cout<<endl;
    }
}