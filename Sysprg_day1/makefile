OBJECTS = main.o read.o write.o
test : $(OBJECTS)
		gcc -o test $(OBJECTS)
main.o : io.h main.c
		gcc -c main.c
read.o : io.h read.c
		gcc -c read.c
write.o : io.h write.c
		gcc -c write.c


