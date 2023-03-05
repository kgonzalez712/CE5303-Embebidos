operaciones.o:
		gcc -I../include operaciones.c -c -fpic

build: operaciones.o
		gcc operaciones.o -shared -o liboperaciones.so
		ar rcs liboperaciones.a operaciones.o
