CC              =   gcc
CFLAGS          =   -g
RM              =   rm -f

default: all 

all: ex ex2

ex: ex.c
	$(CC) $(CFLAGS) -o ex ex.c

ex2: ex2.c
	$(CC) $(CFLAGS) -o ex2 ex2.c

clean veryclean:
	$(RM) ex ex2
