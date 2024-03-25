#include <iostream>
using namespace std;
int main() {
	int n, m, s = 0, c = 0; char str[100][99];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> str[i][j];
			if (str[i][j] == 'O') s++;
		}
		if ((m / 2) < s) c++;
		s = 0;
	}
	printf("%d", c);
	return 0;
}