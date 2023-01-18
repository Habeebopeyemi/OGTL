blah: blah.o
	cc blah.o -o blah # Runs third
blah.o: blah.c
	gcc -Wall -Wextra -Werror -c blah.c -o blah.o # Runs second
# blah.c:
# 	echo "int main(){ return 0; }" > blah.c # Runs
clean:
	rm -f *.o
fclean:
	rm -f blah
