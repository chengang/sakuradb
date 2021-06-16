void * sakuradb_open(char * path);
int sakuradb_put(void * db, char * key, unsigned char * value, int value_size);
int sakuradb_get(void * db, char * key, unsigned char * value, int value_size);
int sakuradb_delete(void * db, char * key);
int sakuradb_close(void * db);
