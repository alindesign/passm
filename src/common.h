#ifndef COMMON_H
#define COMMON_H

#include <algorithm>
#include "unistd.h"

#define panic(c) perror("error"); exit( std::max(c, 0) )

#define errorf(...) fprintf(stderr, __VA_ARGS__)

#define fatalf(...) errorf(__VA_ARGS__), exit(1)

#endif //COMMON_H
