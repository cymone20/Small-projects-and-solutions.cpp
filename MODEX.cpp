#include <iostream>
using namespace std;


long long binpow(long long a, long long b, long long m) {
	a %= m;
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

int main() {

long long a, b, m;
int c;
cin >> c;

while(c--){

cin >> a >> b >> m;

cout << binpow(a, b, m) << "\n";
    
}

return 0;


}
