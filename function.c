#include<stdio.h>

// ����
void p(int num);

void function_without_return();

int function_with_return();

void function_without_params();

void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // ��ü total ������ ate���� �԰� ���� ���� ��ȯ

int add(int num1, int num2);

int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void)
{
	// function
	// ����

	//int num = 2;
	////printf("num�� %d �Դϴ�\n", num);
	//p(num);

	//// 2+ 3��?
	//num = num + 3;
	////printf("num �� %d �Դϴ�\n", num); 
	//p(num);

	//// 5 -1��?
	//num -= 1; // num = num - 1;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);

	//// 4 x 3��?
	//num *= 3;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);

	//// 12 / 6��?
	//num /= 6;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);

	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	//function_without_return();

	// ��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret);*/
	
	// �Ķ���� (���ް�)�� ���� �Լ�
	/*function_without_params();*/

	// �Ķ���� (���ް�)�� �ִ� �Լ�
	//function_with_params(35, 27, 15);

	// �Ķ���� (���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); // 5���� ��� �߿��� 2���� �Ծ����
	//printf("��� 5�� �߿� 2���� ������? %d ���� ���ƿ�\n", ret);


	// ���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
	return 0;
}

// ���� 
void p(int num)
{
	printf("num �� %d �Դϴ�\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�");
}

int function_with_return()
{
	printf("���Ѱ��� �ִ� �Լ��Դϴ�");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�\n",
		num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�\n");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}