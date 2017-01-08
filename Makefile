#
# Makefile generated by:
# CodeBench 0.42
#
# Project: PassMaker
#
# Created on: 19-10-2013 23:27:57
#
#

CC = SDK:gcc/bin/gcc
LD = SDK:gcc/bin/gcc
OBJ = \
	 events.o gui.o handlelibraries.o \
	 lists.o main.o PassMaker.o \
	 usercode.o

BIN = PassMaker

INCPATH = -I.

CFLAGS = $(INCPATH) 

LDFLAGS = -lauto

LIBS = 
#	add any extra linker libraries you want here

.PHONY: all all-before all-after clean clean-custom realclean

all: all-before $(BIN) all-after

all-before:
#	You can add rules here to execute before the project is built

all-after:
#	You can add rules here to execute after the project is built

clean: clean-custom
	rm -v $(OBJ)

realclean:
	rm -v $(OBJ) $(BIN)

$(BIN): $(OBJ) $(LIBS)
#	You may need to move the LDFLAGS variable in this rule depending on its contents
	@echo "Linking $(BIN)"
	@$(LD) -o $(BIN) $(OBJ) $(LDFLAGS) $(LIBS)

###################################################################
##
##  Standard rules
##
###################################################################

# A default rule to make all the objects listed below
# because we are hiding compiler commands from the output

.c.o:
	@echo "Compiling $<"
	@$(CC) -c $< -o $*.o $(CFLAGS)

events.o: events.c includes.h globals.h

gui.o: gui.c includes.h globals.h gui.h

handlelibraries.o: handlelibraries.c includes.h globals.h

lists.o: lists.c includes.h globals.h

main.o: main.c includes.h globals.h

PassMaker.o: PassMaker.c includes.h globals.h

usercode.o: usercode.c includes.h globals.h

