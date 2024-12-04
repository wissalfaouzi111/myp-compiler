all :	ex1 ex2 ex3 ex4 ex5 ex6 ex7

pcode : PCode.c PCode.h
	gcc -c PCode.c

ex1 :	pcode ex1_pcode.c
	gcc -o ex1 ex1_pcode.c PCode.o

ex2 :	pcode ex2_pcode.c
	gcc -o ex2 ex2_pcode.c PCode.o

ex3 :	pcode ex3_pcode.c
	gcc -o ex3 ex3_pcode.c PCode.o

ex4 :	pcode ex4_pcode.c
	gcc -o ex4 ex4_pcode.c PCode.o

ex5 :	pcode ex5_pcode.c
	gcc -o ex5 ex5_pcode.c PCode.o

ex6 :	pcode ex6_pcode.c
	gcc -o ex6 ex6_pcode.c PCode.o

ex7 :	pcode ex7_pcode.c
	gcc -o ex7 ex7_pcode.c PCode.o

clean :
	rm -f ../test/*_pcode.c *.o
