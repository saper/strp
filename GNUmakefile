strp: strp.o
	cc -o $@ $<

.c.o:
	cc -D_XOPEN_SOURCE -c $<

clean::
	-rm strp.o strp
