#include <iostream>

using namespace std;

int weth = 30;     // ������ �������� ����
int height = 30;   //  ������ �������� ���� 
int x, y, appX, appY, result;     // ���������� ����, ����� � ����

enum Eways
{
	null = 0, top, right, left, down
};                                                                 // ��� ��������� �������� ����������� ������ � ������������� (enumiration)
Eways ways;

bool YouLost;           

void start() {             // ��� ���������� ��� ��������
	YouLost = false;      //�� ��������� �� �� ���������
	result = 0;            // �� ��������� ���������� ���
	ways = null;          // �� ��������� �� ���������
	x = weth / 2;
	y = height / 2;   // ������ �� ������ ����� �� ���������

}

void Create() {    // ������������ ����� � �������� �� ���
	system("cls");    // ������� �������� �� ����� ������� ������ �������

	for (int i = 0; i < weth; i++)
	{
		cout << "*";
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weth; j++) {           // ��� ��������� ����. ��� ����� ������ � �������......
			
		}
	}

	for (int i = 0; i < weth; i++) 
	{                                          
		cout << "*";
	}
}

void get() {      // �������� ���������� �� ������������   

}

void BackEnd() {      // ��� ������ ����� �����

}

int main() {
	start();
	while (!YouLost)    // ���� �� ��������� �������� �������
	{
		Create();
		get();
		BackEnd();

	}
}