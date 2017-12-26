#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=3;
	float b=5.5;

	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);

	printf("--------------上是d下是f--------------\n");

	printf("%f\n",a+b);
	printf("%f\n",a-b);
	printf("%f\n",a*b);
	printf("%f\n",a/b);

	//用D的結果:前三個是0 最後一個跑掉了
	//說明了因為是整數輸出的關係 所以無法顯示出小數的數值 只好寫0
	//用F的結果:所有算式皆正常運算 並顯示到小數下第6位

	system("pause");
	return 0;

}