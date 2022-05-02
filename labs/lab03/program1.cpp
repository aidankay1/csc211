#include <iostream>

int main() {
    
    std::cout << "Please enter a numeric grade from 0 - 100: ";
    int grade;
    std::cin >> grade;
    
    std::string letter_grade;
    
    if (grade >= 97) {
        letter_grade = "A+";
    }
    else if (grade >= 93) {
        letter_grade = "A";
    }
    else if(grade >= 90){
        letter_grade = "A-";
    }
    else if (grade >= 87) {
        letter_grade = "B+";
    }
    else if (grade >= 83) {
        letter_grade = "B";
    }
    else if(grade >= 80){
        letter_grade = "B-";
    }
    else if (grade >= 77) {
        letter_grade = "C+";
    }
    else if (grade >= 73) {
        letter_grade = "C";
    }
    else if(grade >= 70){
        letter_grade = "C-";
    }
    else if (grade >= 67) {
        letter_grade = "D+";
    }
    else if (grade >= 65) {
        letter_grade = "D";
    }
    else {
        letter_grade = "F";
    }
    
    std::cout << letter_grade << std::endl;
    
    return 0;
}