#include "1_student.cpp"
#include "1_person.cpp"
#include "1_teacher.cpp"
#include <iostream>
using namespace std;

int main() {
    system("cls");
    Student s1("Bui Quang Vinh", 20, "Ha Noi",  9.75);
    Teacher t1("Teacher Vinh", 30, "Quang Ninh", 10000);
    t1.display(); cout << "------------\n";
    t1.setSalary(20000);
    t1.display(); cout << "------------\n";
    t1.setName("Giao su Vinh");
    t1.display(); cout << "------------\n";
	return 0;
}

