#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		char a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int b[n], cnt=1;
		b[0]=x;
		for(int i=0; i<n; ++i) {
			if(a[i]=='L')
				x--;
			else
				x++;
			b[cnt++]=x;
		}
		int	ans=1;
		sort(b, b+cnt);
		for(int i=1; i<cnt; ++i)
			if(b[i]!=b[i-1])
				ans++;
		cout << ans << "\n";
	}
}
