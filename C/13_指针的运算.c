#include <stdio.h>
#include <stdlib.h>

int main() {

	char *p1 = NULL;
	short *p2 = NULL;
	int *p3 = NULL;
	double *p4 = NULL;

	int buf[5];
	int *p = &buf[0];
	int *q = &buf[3];

	short *p0 = (short *)p;
	short *q0 = (short *)q;

	printf("p1 = %#x p1 + 1 = %#x\n",p1,p1 + 1);
	printf("p2 = %#x p2 + 1 = %#x\n",p2,p2 + 1);
	printf("p3 = %#x p3 + 1 = %#x\n",p3,p3 + 1);
	printf("p4 = %#x p4 + 1 = %#x\n",p4,p4 + 1);

	printf("q - p = %d\n",q - p);
	printf("q - p = %d\n",q0 - p0);

	return 0;
}
