hello:hello.o
	cc -o hello hello.o
hello.o:hello.c
	cc -c hello.c
clean:
	rm hello.o
bubbleSort:bubbleSort.o
	cc -o bubbleSort bubbleSort.o
bubbleSort.o:bubbleSort.c
	cc -c bubleSort.c
BubbleClean:
	rm bubbleSort.o
SelectSort:SelectSort.o
        cc -o SelectSort SelectSort.o
SelectSort.o:SelectSort.c
        cc -c SelectSort.c
SelectClean:
        rm SelectSort.o

QUickSort:QUickSort.o
        cc -o QUickSort QUickSort.o
QUickSort.o:QUickSort.c
        cc -c QUickSort.c
QUickClean:
        rm QUickSort.o




