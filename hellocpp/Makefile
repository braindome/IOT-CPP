# PROG = main

# # detta är h-filer
# DEPS=

# SRC = main.cpp loops.cpp
# CFLAGS = -g -std=c++17 -Wall -Werror
# LIBS = 
# CC=g++
# OUTPUTDIR=obj

# OBJS = $(addprefix $(OUTPUTDIR)/, $(SRC:.cpp=.o))


# all: $(OUTPUTDIR) $(PROG)

# $(PROG): $(OBJS) 
# 	$(CC) -o $@ $^ $(CFLAGS)

# $(OUTPUTDIR)/%.o: %.cpp $(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)


# $(OUTPUTDIR):
# 	mkdir "$(OUTPUTDIR)"

# clean:
# 	rm -rf "$(OUTPUTDIR)" 
# 	rm -rf $(PROG)


# .PHONY: prep clean
# .PHONY: all clean

PROG = main
SRC = main.cpp loops.cpp
CFLAGS = -g -std=c++17 -Wall -Werror
CC = g++

all:
	$(CC) $(SRC) -o $(PROG) $(CFLAGS)

clean:
	rm -f $(PROG)

.PHONY: all clean