CC       = gcc
CFLAGS   = -Wall -Wextra -std=c11
PROGRAMS = hello variables

all: $(PROGRAMS)

# Build any program NAME from NAME.c
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# make run          -> runs hello
# make run-variables -> runs variables (works for any program name)
run: run-hello

run-%: %
	./$*

clean:
	rm -f $(PROGRAMS)

.PHONY: all run clean
