#include "print.h"

void kernel_main() {
	print_clear();
    print_str("Welcome to Zed OS!");
    
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("\nAn os made by");
    print_str("\n  Sebsa");
    print_str("\nAnd opensource on GitHub");
    print_str("\n  bit.ly/zedos");
}