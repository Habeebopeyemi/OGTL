my_mastermind: my_mastermind.o
	cc my_mastermind.o -o my_mastermind # Runs third
my_mastermind.o: my_mastermind.c
	gcc -Wall -Wextra -Werror -c my_mastermind.c -o my_mastermind.o # Runs second
# my_mastermind.c:
# 	echo "int main(){ return 0; }" > my_mastermind.c # Runs
clean:
	rm -f *.o
fclean:
	rm -f my_mastermind
