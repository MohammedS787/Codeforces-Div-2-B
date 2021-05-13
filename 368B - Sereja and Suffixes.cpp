#include <bits/stdc++.h>
using namespace std;

int main(void){
 	set<int>s;

    int n,m;
    cin >> n >> m;
    int array[n];
    for(int i = 0;i<n;i++){
        cin >> array[i];
    }
	
    for(int i = n-1;i>= 0;i--){
        s.insert(array[i]);
        array[i] = s.size();
    }
    while(m--){
        int x;
        cin >> x;
        cout << array[x - 1] << endl;
    }


}
