#include<bits/stdc++.h>
using namespace std;
int main(){
    int key;
    cin>>key;
    vector<vector<int>> v(key);
     // Resize each row to the required size
    for (int i = 0; i < key; i++) {
        v[i].resize(i + 1);
    }
    v[0][0] = 1;
    v[1][0] = 1;
    v[1][1] = 1;
    cout<<v[0][0]<<endl;
    cout<< v[1][0]<<" "<<v[1][1]<<endl;

    for (int i = 2; i < key; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1;
                cout << v[i][j] << " ";
            } else {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
                cout << v[i][j] << " ";
            }
        }
        cout << endl;
    }

}