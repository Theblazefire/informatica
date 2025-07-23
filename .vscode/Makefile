# Compilatore
CC = gcc

# Flag del compilatore
CFLAGS = -g -Wall

# Trova tutti i file .c nella cartella
SRC = $(wildcard *.c)

# Crea gli eseguibili togliendo .c
EXE = $(SRC:.c=)

# Compila tutti
all: $(EXE)

# Regola per costruire ciascun eseguibile da ciascun .c
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Pulisce gli eseguibili
clean:
	rm -f $(EXE)
