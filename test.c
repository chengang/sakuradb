#include <stdio.h>
#include "sakuradb.h"

int main() {
    int ret = 0;
    char data[255];

    void * db = sakuradb_open("test.db");
    ret = sakuradb_put(db, "mykey", (unsigned char *)"myvalue", 7);
    ret = sakuradb_get(db, "mykey", (unsigned char *) data , 255);
    sakuradb_close(db);

    printf("myvalue is [%s]\n", data);

    return 0;
}


