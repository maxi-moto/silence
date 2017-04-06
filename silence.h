#ifndef SILENCE_H
#define SILECNE_H

#include <termios.h>
#include <unistd.h>

namespace silence
{
  inline void toggle(bool silence)
  {
    termios terminal;
    tcgetattr(STDIN_FILENO, &terminal);

    silence ? terminal.c_lflag &= ~ECHO : terminal.c_lflag |= ECHO;

    tcsetattr(STDIN_FILENO, TCSANOW, &terminal);
  }

  inline void toggle_on()
  {
    silence::toggle(true);
  }

  inline void toggle_off()
  {
    silence::toggle(false);
  }
}


#endif
