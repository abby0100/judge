#include <stdio.h>

int main() {

	int a, b;

	while ( (scanf("%d %d\n", &a, &b)) != EOF ) {
		// press "Enter + ctrl+d", or double "ctrl+d" to get result
		printf("%lld\n", (long long)(a+b));
	}

	return 0;
}
