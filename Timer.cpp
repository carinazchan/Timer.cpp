#include <iostream>

int main()
{

  //Variables
  int hours = 0;
  int minutes = 0;
  int seconds = 0;
  int total_seconds = 0;

  //Get user inout
  std::cout << "Hours: ";
  std::cin >> hours;

  std::cout << "Minutes: ";
  std::cin >> minutes;

  std::cout << "Seconds: ";
  std::cin >> seconds;

  //Convert everything to seconds
  total_seconds = (hours * 3600) + (minutes * 60) + seconds;

  //Print total number of seconds
  std::cout << "That is equivalent to " << total_seconds << " seconds :)\n";

}
