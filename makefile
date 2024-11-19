# Compiler and assembler settings
CC65 = cc65
CA65 = ca65
LD65 = ld65

# Target platform
TARGET = apple2

# Source files
C_SRC = src/matrix.c src/matrix_const.c src/F.c src/program.c
ASM_SRC = src/text.s

# Intermediate assembly files
C_ASM = $(C_SRC:src/%.c=build/%.s)

# Object files
C_OBJ = $(C_SRC:src/%.c=build/%.o)
ASM_OBJ = $(ASM_SRC:src/%.s=build/%.o)
OBJ = $(C_OBJ) $(ASM_OBJ)

# Output binary
OUTPUT = build/program

# Include directories
INCLUDES =

# Compiler and assembler flags
CFLAGS = -t $(TARGET) $(INCLUDES)
AFLAGS = -t $(TARGET)

# Linking flags
LDFLAGS = -t $(TARGET)

# Rule to build all targets
all: $(OUTPUT)

# Rule to compile C files to assembly files
build/%.s: src/%.c
	$(CC65) $(CFLAGS) -o $@ $<

# Rule to assemble generated assembly files to object files
build/%.o: build/%.s
	$(CA65) $(AFLAGS) -o $@ $<

# Rule to assemble ASM files to object files
build/%.o: src/%.s
	$(CA65) $(AFLAGS) -o $@ $<

# Rule to link object files into the final binary
$(OUTPUT): $(OBJ)
	$(LD65) $(LDFLAGS) -o $@ $(OBJ) apple2.lib

# Clean up build artifacts
clean:
	rm -f build/*.s
	rm -f build/*.o

.PHONY: all clean
