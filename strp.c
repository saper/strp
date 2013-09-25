#include <stdio.h>
#include <time.h>

int
main(int argc, char **argv)
{
	struct tm tp;
	char *out;
	if (argc != 3) {
		fprintf(stderr, "Usage: strp date format\n");
		return 255;
	}
	out = strptime(argv[1], argv[2], &tp);
	fprintf(stderr, "%p\n", out);
	return 0;
}
