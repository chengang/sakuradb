T01:
	clang sakuradb.c test.c -o test
	./test
clean:
	rm -rfv test *.o
