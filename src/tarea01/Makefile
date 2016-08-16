CC := g++ # This is the main compiler
# CC := clang --analyze # and comment out the linker last line for sanity
BUILDDIR := ../../build
TARGET := ../../bin/tarea01

SRCEXT := cpp
SOURCES := $(shell find . -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst ./%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g # -Wall

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@echo " $(CC) $^ -o $(TARGET)"; $(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: ./%.$(SRCEXT)
	@mkdir -p $(@D)
	@echo " $(CC) $(CFLAGS) -c -o $@ $<"; $(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
