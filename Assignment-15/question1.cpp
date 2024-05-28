// Write a program to print the elements of both the diagonals in a square matrix.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<< "Enter the no of rows of the matrix: ";
    cin>>n;
    int m;
    cout<< "Enter the no of columns of the matrix: ";
    cin>>m;
    vector<vector<int>> v(n,vector<int>(m));
    cout<< "Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j || j==((n-1)-i)){
                cout<<v[i][j]<<" ";
            }
            else{
                cout<< " "<< " ";
            }
        }
        cout<<endl;
    }
    return 0 ;
}