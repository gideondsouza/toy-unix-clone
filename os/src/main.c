// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
//           Made for JamesM's tutorials <www.jamesmolloy.co.uk>

#include "monitor.h"

int main(struct multiboot *mboot_ptr)
{
    // All our initialisation calls will go in here.
  monitor_clear();
  monitor_write("Hey there!!\n");
  monitor_write("Hello beautiful world!");
  return 0;
}
