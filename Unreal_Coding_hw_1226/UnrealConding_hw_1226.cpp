#include <iostream>
using namespace std;

// 합계를 계산하는 함수
int calculateSum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

//배열의 평균을 계산하는 함수
int calculateAvg(int sum, int size) {
	return sum / size;	// 정수의 나눗셈으로 평균 계산
}

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	
	// 입력
	cout << "5개의 숫자를 입력하세요 : ";
	for (int i = 0; i < SIZE; i++) {
		cin >> numbers[i];
	}
	// 합계와 평균 계산
	int sum = calculateSum(numbers, SIZE);
	double avg = calculateAvg(sum, SIZE);

	cout << "합계 : " << sum << endl;
	cout << "평균 : " << avg << endl;

	return 0;
}