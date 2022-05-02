#include <iostream>

const int arrSize = 3;

void fillArray(int arr[][arrSize]) {
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			arr[i][j] = ((i + 1) * (j + 1));
		}
	}
}

void printArray(int arr[][arrSize]) {
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
    int myArr[arrSize][arrSize];
    fillArray(myArr);
    printArray(myArr);
}