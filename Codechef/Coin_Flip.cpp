#include <iostream>
using namespace std;
#define MOD 1000000007

int main() {
	int t = 0;
	cin >> t;
	while(t--) {
		int g = 0;
		cin >> g;
		while(g--) {
			long long int i, n, q;
			cin>>i>>n>>q;
			if(n % 2 == 0) {
				cout << n/2 << endl;
			}
			else {
				if((i % 2 != 0 && q % 2 != 0) || (i % 2 == 0 && q % 2 == 0)) {
					cout << n/2 << endl;
				}
				else {
					cout<< n/2 + 1 << endl;
				}
			}
		}
	}
	return 0;
}

