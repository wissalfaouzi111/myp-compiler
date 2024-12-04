all :	ex1 ex2 ex3 ex4 ex5 ex6 ex7

pcode : PCode.c PCode.h
	gcc -c PCode.c

test% : test%_pcode.c pcode
	gcc -o $@ $< PCode.o 

clean :
	rm -f ../test/*_pcode.c *.o test*
