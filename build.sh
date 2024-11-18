cl65 -t apple2 -O src/program.c src/text.s

## Build to image
cp apple2files/blank.dsk apple2files/program.dsk
java -jar ac.jar -as apple2files/program.dsk program B 0x0800 < src/program