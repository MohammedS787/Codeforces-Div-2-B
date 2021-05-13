#include <bits/stdc++.h>
using namespace std;

int main(void){

	int n;
    cin >> n;
    map<string,string>m;
    while(n--){
        string a,b;
        cin >> a >> b;    
        auto it = m.begin();
        while(it != m.end()){
            if(it->second == a){
                break;
            }
            it++;
        }
        if(it == m.end()){
            m.insert({a,b});
        }
        else{
            it->second = b;
        }
 
    }
    cout << m.size() << endl;
    auto it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }



}
