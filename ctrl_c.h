#ifndef CTRL_C_H
#define CTRL_C_H

#include <signal.h>

extern volatile sig_atomic_t ctrl_c;
void ctrl_c_handler(int signal);
#define init_ctrl_c signal(SIGINT, ctrl_c_handler)

#endif
