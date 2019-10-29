#include "types.h"
#include "user.h"

int main() {
	for(int i = 0; i < 1; i++) {
		void* obama = GetSharedPage(i, 1);
		strcpy(obama, "obama");
		printf(1, "%s\n", obama);
	}

	exit();
}
