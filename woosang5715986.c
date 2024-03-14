
#include <stdio.h>
#include<time.h>
int main(void)
{
	int result = 0; 
	int k = 0; 
	clock_t start, stop;
	double duration;
	start = clock();

	for (int i = 2; i <= 100; i++)  // 2부터 100까지 반복
	{
		for (k = 2;k < i;k++) // 2부터 i까지 반복
		{
			if (i % k == 0)break; // 나머지가 0일때 break
		}

		if (k == i)    // k가 i와 같을 때
			result += k;
	}
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC; 
	printf("수행시간은 %f초입니다.\n", duration);
	
	printf("1부터 100까지 소수의 합=%d\n", result); 
	system("pause");
}