#include "1_Person.cpp"
#include "1_Employee.cpp"
#include "1_Customer.cpp"

int main() {
	Person *person1 = new Employee("Trung", "HN", 3300);
	Person *person2 = new Customer("Linh", "BN", 10400);
	person1->display();
	person2->display();
	return 0;
}