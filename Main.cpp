#include <iostream>
#include "student.h"
#include <vector>

using namespace std;

int main() {
	vector<Student> students;
	students.push_back(Student("Kristy", "Mayhem"));
	students.push_back(Student("Lexan", "Flowers"));
	for (Student s : students) {
		cout << s.getName();
	}
	return 0;
}