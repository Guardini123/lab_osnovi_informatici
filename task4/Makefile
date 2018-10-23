
all : primes goldbach

primes : primes.o calculate_primes.o
        gcc -g -O0 -o primes primes.o calculate_primes.o

goldbach : goldbach.o calculate_primes.o
        gcc -g -O0 -o goldbach goldbach.o calculate_primes.o

primes.o : primes.c calculate_primes.h
        gcc -c -std=c89 -pedantic-errors -g -O0 -Wall -Wextra primes.c

goldbach.o : goldbach.c calculate_primes.h
        gcc -c -std=c89 -pedantic-errors -g -O0 -Wall -Wextra goldbach.c

calculate_primes.o : calculate_primes.c calculate_primes.h
        gcc -c -std=c89 -pedantic-errors -g -O0 -Wall -Wextra calculate_primes.c

clear :
        rm *.o

rmbackup :
        rm *~

new :
        rm primes goldbach

indent :
        indent -kr -nut -ts4 *.c
