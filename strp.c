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
	tp.tm_year = 5555;
	tp.tm_mon = 5555;
	tp.tm_mday = 5555;
	tp.tm_yday = 5555;
	out = strptime(argv[1], argv[2], &tp);
	fprintf(stderr, "%p\n", out);
	if (out != NULL) {
		fprintf(stderr, "%s\n", argv[1]);
		for(p = argv[1];  *p && p < out; p++)
			fprintf(stderr, " ");
		fprintf(stderr, "^\n");
		fprintf(stdout, "Year = %d, month = %d, day = %d, days = %d\n",
			tp.tm_year, tp.tm_mon, tp.tm_mday, tp.tm_yday);
	}
	return 0;
}
