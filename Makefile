# Method 1
# calc:
# 	gcc calc.c operation.c -o calc


# Method 2 using variables
# $(CC)=gcc
# calc:
# 	$(CC) calc.c operation.c -o calc

# clean:
# 	rm calc

# Method 3
$(CC)=gcc
calc: calc.o operation.o
	$(CC) calc.o operation.o -o calc

calc.o: calc.c operation.h
	$(CC) -c calc.c

operation.o: operation.c operation.h
	$(CC) -c operation.c

clean:
	rm *.o calc