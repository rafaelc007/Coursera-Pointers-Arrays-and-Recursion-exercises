GNU = -std=gnu99 -Werror -Wall -pedantic

atoi_test: myatoi.c
	gcc -o myatoi-test $(GNU) myatoi.c
