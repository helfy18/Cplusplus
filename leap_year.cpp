#include <iostream>

int main() {
  int year;
  bool leap_year;
  std::string boolean;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if(year >= 1000 and year <= 9999){
    if(year % 4 == 0){
      if(year % 100 == 0 && year % 400 != 0){
        leap_year = false;
      }
      else{
        leap_year = true;
      }
    }
    else{
      leap_year = false;
    }
  }
  if(leap_year == true){
    boolean = " is a leap year.";
  }
  else{
    boolean = " isn't a leap year.";
  }
  std::cout << year << boolean << "\n";

}
