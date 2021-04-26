#include "String.hpp"


int main()
{
  const char* line = "Exaple line";
  String string1;
  String string(line, sizeof(line));

  cout << "Size of: " << sizeof(string) << endl;
  cout << "1. Line is \"" << string.get_string() <<"\""<<endl;

  String *p_string = new String("Example",strlen("Example"));
  cout << "2. Line is \"" << p_string->get_string() << "\"" << endl;



  system("pause>nul");
  return EXIT_SUCCESS;
}