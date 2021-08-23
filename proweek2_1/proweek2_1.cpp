#include<stdio.h>
int main() {
	int n[3],sum1,sum2,sum3;
	for (int i = 0; i < 3; i++) {
		printf("Enter number : ");
		scanf_s("%d", &n[i]);
	}
	sum1 = n[0] + n[1];
	sum2 = n[0] + n[2];
	sum3 = n[1] + n[2];
	if (sum1 >= sum2 && sum1 >= sum3)
		printf("%d + %d = %d", n[0], n[1], sum1);
	else if (sum2 > sum1 && sum2 >= sum3)
		printf("%d + %d = %d", n[0], n[2], sum2);
	else if (sum3 > sum1 && sum3 > sum2)
		printf("%d + %d = %d", n[1], n[2], sum3);
}