// Write a program to print the matrix in wave form.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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
    cout<< endl;
    for(int j=0; j<=m-1; j++){
        if(j%2==0){
            for(int i=n-1;i>=0; i--){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int i=0; i<=n-1; i++){
                cout<<v[i][j]<<" ";
            }
        }
    }
    return 0 ;
}