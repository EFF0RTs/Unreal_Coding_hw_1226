#include <iostream>
using namespace std;

// �հ踦 ����ϴ� �Լ�
int calculateSum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

//�迭�� ����� ����ϴ� �Լ�
int calculateAvg(int sum, int size) {
	return sum / size;	// ������ ���������� ��� ���
}

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	
	// �Է�
	cout << "5���� ���ڸ� �Է��ϼ��� : ";
	for (int i = 0; i < SIZE; i++) {
		cin >> numbers[i];
	}
	// �հ�� ��� ���
	int sum = calculateSum(numbers, SIZE);
	double avg = calculateAvg(sum, SIZE);

	cout << "�հ� : " << sum << endl;
	cout << "��� : " << avg << endl;

	return 0;
}