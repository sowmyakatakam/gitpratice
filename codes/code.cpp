#include <bits/stdc++.h>
using namespace std;
void sort( int array[ ], int n ) {
    int temp,k,i;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(array[i] > array[ i+1] ) {
                temp = array[ i ];
                array[ i ] = array[ i+1 ];
                array[ i + 1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<array[i];
    }
}
int main() {
    int a[10],size,i;
    cin>>size;
   
	for(i=0;i<size;i++){
	    cin>>a[i];
	    }
	    sort(a,size);
	    
	return 0;
}