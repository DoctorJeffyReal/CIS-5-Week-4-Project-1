#include <iostream>
#include <string>

// Project 1 — Jesus
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO (week 3): declare and initialize the four boxes
  
  std::string first = "";
  int age = 0;
  int credits = 0;
  double gpa = 0.0;
  int grad_year = CURRENT_YEAR + 4;
 
  std::cout << "Enter your first name: ";
  std::cin >> first;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "Enter your credits: ";
  std::cin >> credits;
  std::cout << "Enter your GPA: ";
  std::cin >> gpa;

  std::cout << "=== Student card ===\n";
  std::cout << "Name: " << first << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Credits: " << credits << "\n";
  std::cout << "GPA: " << gpa << "\n";
  std::cout << "Expected graduation: " << grad_year << "\n";

  return 0;
}
