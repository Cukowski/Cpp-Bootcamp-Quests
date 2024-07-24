#include <iostream>
#include <string>

void christmas_song(std::string s3, std::string s2, std::string s1) {
  std::cout << s1 << ", " << s3 << std::endl;
  std::cout << s2 << std::endl;  
}

void prints_my_strings(const std::string& s1, const std::string& s2, const std::string& s3) {
  christmas_song(s1, s2, s3);
}

int main() {
  std::string my_first_string = "Jingle bells";
  std::string my_second_string("Jingle all the way");
  std::string my_third_string = my_first_string;

  prints_my_strings(my_first_string, my_second_string, my_third_string);
  return 0;
}