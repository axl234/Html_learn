#include <stdio.h>
#include <string.h>

float bezier1(float t, float p0, float p1) {
    return (1 - t) * p0 + t * p1;
}

char * hello(){
    return "hello WebAssembly";
}

char * sayHi(char* name){
    return strcat("hi ",name);
}