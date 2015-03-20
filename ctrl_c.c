#include "ctrl_c.h"

volatile sig_atomic_t ctrl_c = 1;
void ctrl_c_handler(int signal) { ctrl_c = 0; }
