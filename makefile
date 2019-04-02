a.out: 21300166.o main.o 21100506.o
    gcc -o a.out main.o 21300166.o 21100506.o

21300166.o: 21300166.c
    gcc -c -o 21300166.o 21300166.c

21100506.o: 21100506.c
    gcc -c -o 21100506.o 21100506.c

main.o: main.c
    gcc -c -o main.o main.c

clean:
    rm a.out 21100166.o 21300166.o main.o
