#include <stdio.h>
#include <time.h>

int
main(int argc, char **argv)
{
	char *TIME = "1899:12:31";
	struct tm tp;
    char *out;
    out = strptime(TIME, "%Y:%m:%d", &tp);
	fprintf(stderr, "%p\n", out);
}
