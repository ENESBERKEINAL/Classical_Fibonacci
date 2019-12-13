#include<stdio.h>
#include<process.h>
//fibonacci serisi
int fibo(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
 }
		
int main() {
	int k;
	printf("Enter number");
	while (scanf("%d",&k) != -1) {
		printf("%d\n", fibo(k));
	}
	system("pause");
	return 0;
	}












