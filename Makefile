# Method 1
# final:
# 	gcc calc.c operation.c -o final


# Method 2 using variables
# $(CC)=gcc
# final:
# 	$(CC) calc.c operation.c -o final

# clean:
# 	rm final

# Method 3
$(CC)=gcc
final: calc.o operation.o
	$(CC) calc.o operation.o -o final

calc.o: calc.c header.h
	$(CC) -c calc.c

operation.o: operation.c header.h
	$(CC) -c operation.c

clean:
	rm *.o final