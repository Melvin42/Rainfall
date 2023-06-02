#include <stdio.h>

int main() {
	unsigned int bip = 2952790016;

	printf("%d\n", 0xb0000000);
//	10110000000000000000000000000000
//	01001111111111111111111111111111;
//
//	10110000000000000000000000000000
//	11001111111111111111111111111111;
//
//	1342177279
//	4FFFFFFF
//	printf("%d\n", 1342177279 & 0xb0000000);
	printf("%d\n", bip & 0xb0000000);
	printf("%d\n", (0x4fffffff & 0xb0000000));
	printf("%d\n", (0xffff6fff & 0xb0000000));
	printf("%d\n", bip & 0xb0000000 == 0xb0000000);

	//0xf7dae1c0 <exit>
	//0xf7dbbcb0 <system>
	return 0;
}
