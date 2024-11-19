# cl65 -t apple2 -O src/matrix.c src/program.c src/text.s -o build/program --obj-path build/
make

## Build to image
cp apple2files/blank.dsk apple2files/program.dsk
java -jar ac.jar -as apple2files/program.dsk program B 0x0803 < build//program