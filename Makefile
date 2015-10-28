# A simple Makefile

.PHONY: clean lnlist

CFLAGS = -Wall

# $(wildcard <pattern>)
# A side note on wildcard:
#   - Wildcard expansion happens automatically in rules. But does not normally
#     takes place when a variable is set.
SRC=$(wildcard *.c)

# $@ means the target i.e: lnlist
# $^ means the list of pre-requisites for the rule i.e: $(SRC)
lnlist: $(SRC)
	gcc -o $@ $^ $(CFLAGS)

# clean is not associated as a file ;)
clean:
	rm lnlist &> /dev/null 
