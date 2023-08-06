//7482 상자 만들기
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		double a; 
		scanf("%lf", &a);
		double v;
		v = a / 6;
		printf("%.10f\n", v);
	}
	return 0;
}