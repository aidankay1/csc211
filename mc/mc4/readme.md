## Mini Programming Challenge #03 (Due Date 02/20)

This mini-challenge is about getting you comfortable with the autograder and basic C++ arethmatic operations. **Arrays, functions, and loops are not allowed. The only libraries allowed for this assignment are `<iostream>` and `<iomanip>`**.  Mini-challenge problemsets are to be completed individually. You are not allowed to share your code with other students. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.

> If you need to post any of your actual source code on Piazza for any reason, **please** be sure to tag the post as being _visible to instructors only_, so that you don't inadvertently share code with others and violate class rules.

### Format details
Your submission will be tested and graded by an autograder, for this reason it cannot be stressed enough that your program must exactly follow the specifications for input and output upon submission.

If the question specifies that it will take a `double` then a `char` you must follow this input order or else fail the test.  For this assignment, you should use the `int` data type for regular whole numbers and as the default when a number format is not specified, you should use the `double` data type for any question which specifies decimal or floating point numbers, and `char` for single letter variables or input.

The output will always be some form of string printed out on a single line. It will always begin on a new line and end with some form of newline character; either `std::endl` or `'\n'`.  Whenever printing a `double` you should always have exactly 4 decimal places; if your decimal number is `3.1415926534`, you should print it as `3.1416`. If your number is `0.0` or `0`, it should print as `0.0000`. You can use `<iomanip>` to accomplish this.

For details on expected submission instructions, please refer to the **Submission and Grading** section at the bottom of the document.

1. *All*. Making individual programs to perform basic operations is repetitive and not good coding practice, it would be better to create one program which can add, subtract, divide, and multiply two numbers depending on user input. For this program you will read two integers `a` and `b` from the user and an operator character `c`. Eg. `2 5 *` will multiply `a` and `b` and output the string `2 * 5 = 10`, `5 2 /` will divide `a` by `b` and output the string `5 / 2 = 2`. Don't worry about validating input, the auto-grader will only give you legal numbers and one of the four basic operator characters `+ - * /`.

2. *Larger than 100 and multiple of 8*. Prompt the user for an integer value. If the number is both a multiple of 8 and is larger than 100, the single line `<number> satisfies the criteria` should be printed. If the number does not satisfy _both_ criteria, print out `<number> does not satisfy the criteria`

3. *Privileges*. This program should prompt the user for an integer representing age, then output one of the following: `Too young` for an age under 16; `Can drive` for those in the interval [16, 18); `Can join the military` [18, 21) and finally `Can have a beer` for ages greater than or equal to 21.

4. *Word for number*. Prompt the user for a digit [0, 9] and print out the name of that digit as a string. Entering `9` should output `Nine`, entering `7` should output `Seven` etc. An number outside of the specified range should print `Not a valid number`. Use a `switch` statement for this problem.


### Submission and Grading
You will submit a single _zip file_ named `mc3.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
