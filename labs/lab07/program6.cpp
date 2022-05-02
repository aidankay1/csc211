#include <iostream>
#include <cmath>

int n = 0;

void findStats(int *arr, double *resultArray) {
    double mean = 0;
    for (int i = 0; i < n; i++) {
        mean += arr[i];
    }
    mean /= n;

    double median = 0;
    if (n % 2 == 0 ){
        median = (arr[n / 2] + arr[(n / 2) + 1]) / 2;
    }
    else {
        median = arr[n / 2];
    }

    double mode = 0;
    int tempCounter = 0;
    int counter = 0;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (arr[j] == arr[i]) {
                tempCounter += 1;
            }
        }

        if (tempCounter > counter){
            counter = tempCounter;
            mode = arr[i];
        }

        tempCounter = 0;
    }

    resultArray[0] = mean;
    resultArray[1] = median;
    resultArray[2] = mode;
}

int main() {
    std::cin >> n;
    
    int *myArray = new int[n];
    double *results = new double[3];

    for (int i = 0; i < n; i++) {
        std::cin >> myArray[i];
    }

    findStats(myArray, results);

    for (int i = 0 ; i < 3 ; i++) {
        std::cout << results[i] << " ";
    }
    std::cout << std::endl;

    delete[] myArray;
    delete[] results;
}