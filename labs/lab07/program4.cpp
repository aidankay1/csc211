#include <iostream>

const int numStudents = 4;
const int numExams = 3;

void studentAvg(int arr[numStudents][numExams]) {
    for (int i = 0; i < numStudents; i++) {
        double avg = 0;
        for (int j = 0; j < numExams; j++) {
            avg += arr[i][j];
        }
        avg /= numExams;
        std::cout << "Student " << i + 1 << ": " << avg << std::endl;
    }
}

void examAvg(int arr[numStudents][numExams]) {
    for (int i = 0; i < numExams; i++) {
        double avg = 0;
        for (int j = 0; j < numStudents; j++) {
            avg += arr[j][i];
        }
        avg /= numStudents;
        std::cout << "Exam " << i + 1 << ": " << avg << std::endl;
    }
}

int main() {

    int examGrades[numStudents][numExams] = {{ 70, 80, 90},
                                             { 95, 98, 91},
                                             {100, 60, 85},
                                             {  0,  3, 69}};

    studentAvg(examGrades);
    examAvg(examGrades);
    return 0;
}
