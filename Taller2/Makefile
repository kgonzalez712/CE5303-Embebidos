CC = gcc
LIB-FLAG = -lm
SOURCE = calculadora.c
LIB = libbibiolteca.a
OBJ = biblioteca.o
EXEC = Calculadora
DLIB = libbiblioteca.so

# Otros
compile-lib:
	${CC} -c biblioteca.c
compile-dlib:
	${CC} biblioteca.c -c -fPIC
clean:
	rm -f *.o *.a *.so Calculadora

# Biblioteca Estática
build-static-lib: compile-lib
	ar rcs ${LIB} ${OBJ}
calc-SL: build-static-lib
	${CC} ${SOURCE} -o ${EXEC} ${LIB} ${LIB-FLAG} -w
static: calc-SL
	echo "Calculadora con biblioteca estática";\
	./Calculadora
	

# Biblioteca Dinámica

build-dynamic-lib: compile-dlib
	${CC} ${OBJ} -shared -o ${DLIB}
dynamic: build-dynamic-lib
	export LD_LIBRARY_PATH=$(shell pwd); \
	${CC} -L . ${SOURCE} -l biblioteca -o ${EXEC} -w -lm; \
	echo "Calculadora con biblioteca dinámica"; \
	./Calculadora
