#! /bin/bash

linklist: main.o displaymenu.o creatnode.o creatlinklist.o insertnode.o deletenode.o sortlinklist.o displaylinklist.o insertmenu.o insertbeg.o insertend.o insertatnth.o insertkey.o deletemenu.o deletion.o deletebeg.o deleteend.o deleteatnth.o deletekey.o 
	gcc -o linklist main.o displaymenu.o creatnode.o creatlinklist.o insertnode.o deletenode.o sortlinklist.o displaylinklist.o insertmenu.o insertbeg.o insertend.o insertatnth.o insertkey.o deletemenu.o deletion.o deletebeg.o deleteend.o deleteatnth.o deletekey.o 

deletekey.o: deletekey.c header.h prototype.h
	gcc -c deletekey.c
deleteatnth.o: deleteatnth.c header.h prototype.h
	gcc -c deleteatnth.c
deleteend.o: deleteend.c header.h prototype.h
	gcc -c deleteend.c
deletebeg.o: deletebeg.c header.h prototype.h
	gcc -c deletebeg.c
deletebeg.o: deletebeg.c header.h prototype.h
	gcc -c deletebeg.c
deletemenu.o: deletemenu.c header.h prototype.h
	gcc -c deletemenu.c
deletion.o: deletion.c header.h prototype.h
	gcc -c deletion.c
main.o: main.c header.h prototype.h
	gcc -c main.c
displaymenu.o: displaymenu.c header.h prototype.h
	gcc -c displaymenu.c
creatnode.o: creatnode.c header.h prototype.h
	gcc -c creatnode.c
creatlinklist.o: creatlinklist.c header.h prototype.h
	gcc -c creatlinklist.c
insertnode.o: insertnode.c header.h prototype.h
	gcc -c insertnode.c
deletenode.o: deletenode.c header.h prototype.h
	gcc -c deletenode.c
sortlinklist.o: sortlinklist.c header.h prototype.h
	gcc -c sortlinklist.c
displaylinklist.o: displaylinklist.c header.h prototype.h
	gcc -c displaylinklist.c
insertbeg.o: insertbeg.c header.h prototype.h
	gcc -c insertbeg.c
insertend.o: insertend.c header.h prototype.h
	gcc -c insertend.c
insertatnth.o: insertatnth.c header.h prototype.h
	gcc -c insertatnth.c
insertkey.o: insertkey.c header.h prototype.h
	gcc -c insertkey.c

