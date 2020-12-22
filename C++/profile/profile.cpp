#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) 
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) { }

std::string Profile::view_profile() {
  
  std::string profile = "Profile: \nName: " + name + "\nAge: " + std::to_string(age) + "\nPronouns: " + pronouns;
  std::string view_hobby = "Hobbies:\n";
    
  for (std::string hobby : hobbies) {
    view_hobby = view_hobby + " - " + hobby + "\n";
  }
  
  return profile + "\n" + view_hobby;
  
}

void Profile::add_hobby(std::string new_hobby) {
  
  hobbies.push_back(new_hobby);
  
}