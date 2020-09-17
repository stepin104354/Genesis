SRC = src/add.c\
src/sub.c\
src/mul.c\
src/div.c\
main.c

INC= -Iinc

PROJECT_NAME = calc.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC)  -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}