
#include <stdio.h>
#include<time.h>
int main(void)
{
	int result = 0; 
	int k = 0; 
	clock_t start, stop;
	double duration;
	start = clock();

	for (int i = 2; i <= 100; i++)  // 2���� 100���� �ݺ�
	{
		for (k = 2;k < i;k++) // 2���� i���� �ݺ�
		{
			if (i % k == 0)break; // �������� 0�϶� break
		}

		if (k == i)    // k�� i�� ���� ��
			result += k;
	}
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC; 
	printf("����ð��� %f���Դϴ�.\n", duration);
	
	printf("1���� 100���� �Ҽ��� ��=%d\n", result); 
	system("pause");
}