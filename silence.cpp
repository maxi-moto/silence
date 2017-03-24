#include "silence.h"

#include <termios.h>
#include <unistd.h>

namespace silence
{
  void toggle(bool silence)
  {
    termios terminal;
    tcgetattr(STDIN_FILENO, &terminal);

    silence ? terminal.c_lflag &= ~ECHO : terminal.c_lflag |= ECHO;

    tcsetattr(STDIN_FILENO, TCSANOW, &terminal);
  }

  void toggle_on()
  {
    silence::toggle(true);
  }

  void toggle_off()
  {
    silence::toggle(false);
  }
}
