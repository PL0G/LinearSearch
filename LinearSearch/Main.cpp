#include <iostream>
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
template <typename T>
int search_index(T arr[],const int length,T value,int begin=0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length-1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T value,int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//�������� ����� ��������� � �������
	/*
	const int size = 10;
	int arr[size]{ 10,17,8,-1,90,17,11,10,0,50 };
	//				0 1  2 3  4  5  6  7  8 9
	std::cout << "\nArray:\n";
	print_arr(arr, size);
	std::cout << "������� ����� ��� ������->";
	std::cin >> n;
	int index;
	//�������� ����� ������� ��������� �������� � ������
	//index=search_index(arr, size, n,3);
	//if (index != -1)
	//	std::cout << "������ ����� " << n << " ��� " << index << "\n";
	//else
	//	std::cout << "����� ��� � �������!\n";

	//�������� ����� ���������� ��������� �������� � ������
	index = search_last_index(arr, size, n, 6);
	if (index != -1)
		std::cout << "������� ���������� ��������� ����� � ������ " << n << " ��� " << index << "\n";
	else
		std::cout << "����� ��� � �������!\n";
		*/
	return 0;
}