hello:hello.o
	cc -o hello hello.o
hello.o:hello.c
	cc -c hello.c
clean:
	rm hello.o
bubbleSort:bubbleSort
	cc -o bubbleSort bubbleSort.o
bubbleSort.o:bubbleSort.c
	cc -c bubleSort.c
BubbleClean:
	rm bubbleSort.o
SelectSort:SelectSort
        cc -o SelectSort SelectSort.o
SelectSort.o:SelectSort.c
        cc -c SelectSort.c
SelectClean:
        rm SelectSort.o



