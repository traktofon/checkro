CC = gcc
OPTS = -Os

checkro: checkro.c
	$(CC) $(OPTS) -o $@ $<
