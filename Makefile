GNU = -std=gnu99 -Werror -Wall -pedantic


main: myatoi.o myatoiHex.o mystrtol.o main.c
	gcc -o myatoi-test $(GNU) myatoi.o myatoiHex.o main.c

strtol: myatoiHex.o myatoi.o mystrtol.c mystrtol.h
	gcc -o mystrtol.o $(GNU) -c myatoi.o mystrtol.c

atoiHex: myatoi.o myatoiHex.c myatoiHex.h
	gcc -o myatoiHex.o $(GNU) -c myatoiHex.c

atoi: myatoi.c myatoi.h
	gcc -o myatoi.o $(GNU) -c myatoi.c
