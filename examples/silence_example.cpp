#include <iostream>
#include <string>

using namespace::std;

#include "../silence.h"

void do_test();

int main()
{
  cout << "\nToggle test\n\n" << endl;

  bool toggle = false;
  silence::toggle(toggle);
  cout << "silnce: " << toggle << endl;
  do_test();

  cout << "\nset toggle off" << endl;
  toggle = true;
  silence::toggle(toggle);
  cout << "silence: " << toggle << endl;
  do_test();

  cout << "\n\nset toggle on" << endl;
  toggle = false;
  silence::toggle(toggle);
  cout << "silence: " << toggle << endl;
  do_test();

  cout << "\n\nToggle On test" << endl;
  silence::toggle_on();
  do_test();

  cout << "\n\n\nToggle Off test" << endl;
  silence::toggle_off();
  do_test();
  
  cout << endl;

}

void do_test()
{
  string test_input;
  cout << "enter some text to verify there is no echo: ";
  cin >> test_input;
}
