#include "types.h"
#include "user.h"

int main() {

  void* obama = GetSharedPage(0, 1);

  // write
  strcpy(obama, "obama");

  // read
  printf(1, "%s\n", obama);

  exit();
}
