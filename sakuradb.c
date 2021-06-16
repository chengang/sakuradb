#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void * sakuradb_open(char * path) {
    return NULL;
}

int sakuradb_put(void * db, char * key, unsigned char * value, int value_size) {
    return 1;
}

int sakuradb_get(void * db, char * key, unsigned char * value, int value_size) {
    strcpy((char *)value, "hello, world.");
    return 1;
}

int sakuradb_delete(void * db, char * key) {
    return 1;
}

int sakuradb_close(void * db) {
    return 1;
}
