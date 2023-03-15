CFLAGS += -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -D_DEBUG -D_EJUDGE_CLIENT_SIDE
CC = g++

all: test1 test2 test3

test1: obj/test1.o obj/sorts1.o
	$(CC) -o test1.exe obj/test1.o obj/sorts1.o $(CFLAGS)

obj/test1.o: test1.cpp
	$(CC) -o obj/test1.o test1.cpp -c $(CFLAGS)

obj/sorts1.o: sorts1.cpp
	$(CC) -o obj/sorts1.o sorts1.cpp -c $(CFLAGS)


test2: obj/test2.o obj/qsort.o
	$(CC) -o test2.exe obj/test2.o obj/qsort.o $(CFLAGS)

obj/test2.o: test2.cpp
	$(CC) -o obj/test2.o test2.cpp -c $(CFLAGS)

obj/qsort.o: qsort.cpp
	$(CC) -o obj/qsort.o qsort.cpp -c $(CFLAGS)


test3: obj/test3.o obj/merge.o
	$(CC) -o test3.exe obj/test3.o obj/merge.o $(CFLAGS)

obj/test3.o: test3.cpp
	$(CC) -o obj/test3.o test3.cpp -c $(CFLAGS)

obj/merge.o: merge.cpp
	$(CC) -o obj/merge.o merge.cpp -c $(CFLAGS)

clean:
	rm *.o
	clear

.PHONY: clean