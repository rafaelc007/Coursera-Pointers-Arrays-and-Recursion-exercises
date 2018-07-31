GNU = -std=gnu99 -Werror -Wall -pedantic -ggdb3

atoi_test: myatoi.c
	gcc -o myatoi-test $(GNU) myatoi.c
