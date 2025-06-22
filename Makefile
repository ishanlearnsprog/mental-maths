main: main.c
	@clang main.c -o mm

clean:
	@rm mm
