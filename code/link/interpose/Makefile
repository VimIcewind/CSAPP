OBJECT = intc intl intr

ALL : $(OBJECT)

intc : mymalloc.c
	gcc -DCOMPILETIME -c mymalloc.c
	gcc -I. -o intc int.c mymalloc.o
intl : mymalloc.c
	gcc -DLINKTIME -c mymalloc.c
	gcc -c int.c
	gcc -Wl,--wrap,malloc -Wl,--wrap,free -o intl int.o mymalloc.o
intr : mymalloc.c
	gcc -DRUNTIME -shared -fpic -o mymalloc.so mymalloc.c -ldl
	gcc -o intr int.c

clean :
	rm -rf $(OBJECT) *.o *.so
