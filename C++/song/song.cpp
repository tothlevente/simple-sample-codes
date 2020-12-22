#include "song.hpp"

void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}

void Song::add_artist(std::string add_artist) {
  
  artist = add_artist;
    
}

std::string Song::get_artist() {
  return artist;
}
