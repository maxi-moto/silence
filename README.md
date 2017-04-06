# Silence

Header only C wrapper functions to toggle echo in the terminal on and off


## Main idea
Every once in a while there is a need to hide user key strokes in the terminal.
That's what silence is all about. It is a simple wrapper around C functoins that
handle turning on and off the echo in a terminal.

## Three simple functions

There are three simple functions in silence:
1. toggle
2. toggle_on
3. toggle_off

### toggle
```c++
silence::toggle(bool silence)
```
toggle() takes a boolean. If true, echo will be turned off. If flase, echo will
be turned on.

toggle() is the main function of silence. Both toggle_on() and toggle_off() call
toggle() internally and they really only exist to be more explicit if desired.

### toggle_on
```c++
silence::toggle_on()
```

toggle_on() takes no parameters and will turn off the echo.

### toggle_off
```c++
silence::toggle_off()
```

toggle_off takes no parameters and will turn on the echo.

