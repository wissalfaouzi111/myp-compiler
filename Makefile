all :	myp

syntax : lexic	src/myp.y
	bison -v -y  -d  src/myp.y
lexic : src/myp.l
	flex src/myp.l

PCode/PCode.o : PCode/PCode.c PCode/PCode.h
	cd PCode; make pcode

myp		:	syntax src/Table_des_symboles.c src/Table_des_chaines.c PCode/PCode.o
	run ;gcc -o myp lex.yy.c y.tab.c PCode/PCode.o -Isrc/ src/Table_des_symboles.c src/Table_des_chaines.c

clean		:	
	rm -f lex.yy.c *.o y.tab.h y.tab.c myp *~ y.output; cd PCode; make clean

