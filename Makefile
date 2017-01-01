CC              =   gcc
CFLAGS          =   -g
RM              =   rm -f

default: all 

all: ex

ex: ex.c
	$(CC) $(CFLAGS) -o ex ex.c

clean veryclean:
	$(RM) ex
