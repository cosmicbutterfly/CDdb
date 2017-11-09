CC = gcc
CFLAGS = -g -Wall
TARGET = cddb
OBJS = cddb.o add.o menu.o rem.o modify.o view_k.o view_l.o view_year.o view_band.o view_all.o search.o view.o viewmenu.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
cddb.o: cddb.c
	$(CC) $(CFLAGS) -c cddb.c
add.o: add.c
	$(CC) $(CFLAGS) -c add.c
rem.o: rem.c
	$(CC) $(CFLAGS) -c rem.c
modify.o: modify.c
	$(CC) $(CFLAGS) -c modify.c
menu.o: menu.c
	$(CC) $(CFLAGS) -c menu.c
view_k.o: view_k.c
	$(CC) $(CFLAGS) -c view_k.c
view_l.o: view_l.c
	$(CC) $(CFLAGS) -c view_l.c
view_band.o: view_band.c
	$(CC) $(CFLAGS) -c view_band.c
view_all.o: view_all.c
	$(CC) $(CFLAGS) -c view_all.c
search.o: search.c
	$(CC) $(CFLAGS) -c search.c
view.o: view.c
	$(CC) $(CFLAGS) -c view.c
viewmenu.o: viewmenu.c
	$(CC) $(CFLAGS) -c viewmenu.c
view_year.o: view_year.c
	$(CC) $(CFLAGS) -c view_year.c
clean:
	/bin/rm -f *.o $(TARGET)
