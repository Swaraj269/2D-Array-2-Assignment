// Write a program to rotate the matrix by 90 degrees anti-clockwise.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rev(vector<vector<int>>& v, int k){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        int temp = v[i][k];
        v[i][k] = v[j][k];
        v[j][k] = temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<< "Enter the no of rows of the matrix: ";
    cin>>n;
    int m;
    cout<< "Enter the no of columns of the matrix: ";
    cin>>m;
    vector<vector<int>> v(n,vector<int>(m));
    cout<< "Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=m-1; j++){
            if(i!=j){
                int temp = v[i][j];
                v[i][j] = v[j][i];
                v[j][i] = temp;
            }
        }
    }
    for(int i = 0; i<=m-1; i++){
        rev(v,i);
    }
    cout<< endl;
    for(int i = 0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}