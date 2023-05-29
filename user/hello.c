#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

/// This is a simple command just for testing & fun
/// You'll need to check UPROGS in Makefile to register command like this
/// Lastly, enjoy the trip and have fun
int
main(int argc, char *argv[]) {
    printf("Hello XV6!\n");
    printf("By Zihao, May 29, 2023, from DolphinDB\n");
    exit(0);
}

