CFLAGS = -Wall -Wextra -Werror

all: final

final: main.o hello.o
	echo "Linking and producing"
	gcc $(CFLAGS) main.o hello.o -o final
	chmod +x
main.o: main.c
	echo 