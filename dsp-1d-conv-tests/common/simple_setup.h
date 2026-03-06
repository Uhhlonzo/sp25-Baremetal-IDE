#ifndef SIMPLE_SETUP_H
#define SIMPLE_SETUP_H

#include <stdint.h>

void init_test(uint64_t target_frequency);
void reconfigure_pll(uint64_t target_frequency, uint32_t sleep_ms);
uint64_t rdcycle(void);

#endif