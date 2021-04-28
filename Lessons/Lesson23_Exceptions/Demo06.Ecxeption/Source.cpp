#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");

  cout << "Enter a number: ";
  double a;
  cin >> a;

  try
  {
    if (a < 0.0)
      throw "Can not take sqrt of negative number";
      //throw exception();
      //throw invalid_argument("sqrt of negative number");
      //throw runtime_error("Bad things happened");

    cout << "The sqrt of " << a << " is " << sqrt(a) << endl;
  }
  catch (const char* ex)
  {
    cerr << "Error: " << ex << endl;
  }
  catch (exception ex)
  {
    cerr << "Error: " << ex.what() << endl;
  }
  catch (...)
  {
    cerr << "Error (( \n";
  }

  system("pause>nul");
  return EXIT_SUCCESS;
}

