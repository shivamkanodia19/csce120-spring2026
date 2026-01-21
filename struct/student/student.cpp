#include <iostream>
#include <string>

// define a struct
struct Student {
  std::string firstName = "";
  std::string lastName = "";
  int graduatingClass = 0;
};


void PrintStudent(Student student) {
  std::cout << student.firstName << " " << student.lastName
    << ", class of " << student.graduatingClass;
}


int main() {
  // declare / define a struct variable
  Student student;

  // assign values to members of the struct
  student.firstName = "Shawna";
  student.lastName = "Thomas";
  student.graduatingClass = 2002;

  // access members of the struct
  std::cout << "I am ";
  PrintStudent(student);
  std::cout << "." << std::endl;

  // another way to declare a struct variable and set its members
  Student grandfather;
  grandfather = {"Charles", "Miller", 1940};
  std::cout << "My grandfather was ";
  PrintStudent(grandfather);
  std::cout << "." << std::endl;

  // yet another way, all on 1 line
  Student ta({"Miss", "Rev", 2026});
  std::cout << "The TA is ";
  PrintStudent(ta);
  std::cout << "." << std::endl;
}
