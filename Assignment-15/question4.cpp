// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;
    int count = 1;
    while(minr <= maxr && minc <= maxc){
        for(int i = minc; i <= maxc; i++){
            v[minr][i] = count;
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i = minr; i <= maxr; i++){
            v[i][maxc] = count;
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i = maxc; i >= minc; i--){
            v[maxr][i] = count;
            count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i = maxr; i >= minr; i--){
            v[i][minc] = count;
            count++;
        }
        minc++;
        cout<<endl;
    }
    cout<< endl;
    for(int i = 0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}