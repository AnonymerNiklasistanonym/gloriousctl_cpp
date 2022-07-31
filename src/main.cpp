#include <iostream>
#include <gloriousctl_cpp/app_version.hpp>

#include <fcntl.h>
#include <getopt.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include <hidapi/hidapi.h>

int main() {
    std::cout << "cpp-template v" << cpp_template::version << std::endl;
}
