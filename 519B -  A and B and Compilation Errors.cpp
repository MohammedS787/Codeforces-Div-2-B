#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<int>errors(n);
	multiset<int>phase_1,phase_2;
	for(int i = 0;i<n;i++){
		cin >> errors[i];
		phase_1.insert(errors[i]);
		phase_2.insert(errors[i]);
	}
	for(int i = 0;i<n-1;i++){
		int x;
		cin >> x;
		phase_1.erase(phase_1.find(x));
	}
	cout << *phase_1.begin() << endl;
	for(int i = 0;i<n-2;i++){
		int x;
		cin >> x;
		phase_2.erase(phase_2.find(x));
	}
	phase_2.erase(phase_2.find(*phase_1.begin()));
	cout << *phase_2.begin() << endl;


}
