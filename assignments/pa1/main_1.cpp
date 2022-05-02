#include <iomanip>
#include <iostream>

int main() {
    int num_cases;
    std::cin >> num_cases;

    // Loop over each data set 
    for (int i = 0; i < num_cases; i++) {
        int num_students;
        std::cin >> num_students;

        int grades[num_students];

        // Load students' grades into an array
        for (int j = 0; j < num_students; j++) {
            std::cin >> grades[j];
        }

        int sum_of_grades = 0;

        // Sum students' grades
        // Loop over list values: https://programming-idioms.org/idiom/6/iterate-over-list-values
        for (const auto &grade : grades) {
            sum_of_grades += grade;
        }

        // Calculate average grade
        double average = sum_of_grades / num_students;

        int num_students_above_average = 0;

        // Determine how many grades exceed the data set average
        for (const auto &grade : grades) {
            if (grade > average) {
                num_students_above_average++;
            }
        }

        // Calculate percent of class "above average"
        double percent_students_above_average = (static_cast<double>(num_students_above_average) / num_students) * 100;
        std::cout << std::fixed << std::setprecision(3) << percent_students_above_average << "%" << std::endl;
    }
}
