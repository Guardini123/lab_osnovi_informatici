dict_prog: dict_prog.o
        gcc -g -O0 -o dict_prog dict_prog.o
dict_prog.o: dict_prog.c
        gcc -c -std=c89 -pedantic-errors -g -O0 -Wall -Wextra dict_prog.c
clean:
        rm *.o
new:
        rm dict_prog
rmback:
        rm *~
indent :
        indent -kr -nut -ts4 *.c