#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////int main() {
////	int input = 0;
////	printf("Do you want to good good study?Type 1 to answer \"Yes\" Or any others to answer \"No\"\n");
////	scanf("%d", &input);
////	if (input == 1)
////		printf("A bright future");
////	else
////		printf("No offer any more!");
////	return 0;
////}
////int main() {
////	int times = 0;
////	while (times<20000)
////	{
////		printf("%d ", times);
////		times++;
////	}
////	if (times == 20000)
////		printf("AMD YES!");
////	return 0;
////
////}
//int Plus(int x, int y) {
//	int z = x + y;
//	return  z;
//}
//int Minus(int x, int y) {
//	int z = x - y;
//	return  z;
//}
//int Times(int x, int y) {
//	int z = x * y;
//	return  z;
//}
//int Divide(int x, int y) {
//	int z = x / y;
//	return  z;
//}
//int main() {
////	int a = 0;
////	int b = 0;
//	char Calc[10] = "plus";
////	scanf("%d", &a);
////	scanf("%d", &b);
//	scanf("%s", &Calc);
//	printf("%s", Calc);
////	if (Calc == "plus"); {
////		int Result = Plus(a, b);
////		printf("The result is %d\n", Result);
////	}
////	if (Calc == "minus"); {
////		int Result = Minus(a, b);
////		printf("The result is %d\n", Result);
////	}
////	if (Calc == "times"); {
////		int Result = Times(a, b);
////		printf("The result is %d\n", Result);
////	}
////	if (Calc == "divide"); {
////		int Result = Divide(a, b);
////		printf("The result is %d\n", Result);
////	}
//	return 0;
//}
//////������Щif�����ܴ������⣬����һ����ʹ����Cacl������ִ��һ�Ρ�����
//////���Ų飬Ӧ�����ж����������⣬��֪���ַ������ظ�ֵ�Ƿ��������
//// �پ��Ų飬���ַ����ĸ�ֵ�����⣬Ӧ���ж���������Դ�ѧϰ������|^&
int main() {
	int  arr[] = { 1,2,3,4,5,6,7,8,9 };
	int  i = 0;
	while (i < 9) {
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}