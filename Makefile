main: main.c utils.h
	@clang main.c -o mm

clean:
	@rm mm
