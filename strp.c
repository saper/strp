#include <stdio.h>
#include <time.h>

int
main(int argc, char **argv)
{
	struct tm tp;
	char *out, *p;
	if (argc != 3) {
		fprintf(stderr, "Usage: strp date format\n");
		return 255;
	}
	out = strptime(argv[1], argv[2], &tp);
	fprintf(stderr, "%p\n", out);
	if (out != NULL) {
		fprintf(stderr, "%s\n", argv[1]);
		for(p = argv[1];  *p && p < out; p++)
			fprintf(stderr, " ");
		fprintf(stderr, "^\n");
	}
	return 0;
}
