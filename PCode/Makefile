all :

pcode : PCode.c PCode.h
	gcc -c PCode.c

test% : test%_pcode.c pcode
	gcc -o $@ $< PCode.o 

clean :
	rm -f ../test/*_pcode.c *.o test*
