all: proc

proc:
	echo "test 이백행"

	- rmdir /S /Q Debug
	
	- mkdir Debug\src\pc
		
	proc iname=pc/t2.pc oname=Debug/src/pc/t2.c
	proc iname=pc/t3.pc oname=Debug/src/pc/t3.c

	gcc "-IC:\\eGovFrameDev-5.0.0-Windows-64bit\\eclipse-cpp-2025-12-R-win32-x86_64\\instantclient_19_29\\sdk\\include" "-Ipc" -O0 -g3 -Wall -c -fmessage-length=0 -o "Debug\\src\\swat-proc-jni.o" "src\\swat-proc-jni.c" 

	gcc "-IC:\\eGovFrameDev-5.0.0-Windows-64bit\\eclipse-cpp-2025-12-R-win32-x86_64\\instantclient_19_29\\sdk\\include" "-Ipc" -O0 -g3 -Wall -c -fmessage-length=0 -o "Debug\\src\\pc\\t2.o" "Debug\\src\\pc\\t2.c" 
	gcc "-IC:\\eGovFrameDev-5.0.0-Windows-64bit\\eclipse-cpp-2025-12-R-win32-x86_64\\instantclient_19_29\\sdk\\include" "-Ipc" -O0 -g3 -Wall -c -fmessage-length=0 -o "Debug\\src\\pc\\t3.o" "Debug\\src\\pc\\t3.c" 

	gcc "-LC:\\eGovFrameDev-5.0.0-Windows-64bit\\eclipse-cpp-2025-12-R-win32-x86_64\\instantclient_19_29" -o Debug\\swat-proc-jni.exe "Debug\\src\\pc\\t2.o" "Debug\\src\\pc\\t3.o" "Debug\\src\\swat-proc-jni.o" -loci 

#PROC_HOME = C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\instantclient_19_29
#PROC      = $(PROC_HOME)\sdk\proc.exe
#INCLUDE   = $(PROC_HOME)\sdk\include
#
#PC_SRCS = $(wildcard pc/*.pc)
#C_SRCS  = $(PC_SRCS:.pc=.c)
#
##all: proc
#all: clean
#
#proc: $(C_SRCS)
#
#%.c: %.pc
##	mkdir Debug
##	mkdir Debug\src
##	$(PROC) iname=$<
#	$(PROC) iname=$< oname=Debug\src\$(@F)
#
##PROC_HOME = C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\instantclient_19_29
##PROC      = $(PROC_HOME)\sdk\proc.exe
##INCLUDE   = $(PROC_HOME)\sdk\include
##
##PC_SRCS = $(wildcard pc/*.pc)
##C_SRCS  = $(PC_SRCS:.pc=.c)
##
##all: proc
##
##proc: $(C_SRCS)
##
##%.c: %.pc
###	$(PROC) iname=$< oname=$@ sqlcheck=syntax include=$(INCLUDE)
###	$(PROC) iname=$< oname=src\$(@F)
##	$(PROC) iname=$< oname=Debug\src\$(@F)
##
###%.o: %.pc
###	gcc -c $< -o $@
##
#clean: proc
##	del /Q *.c 2>nul
#	del /Q Debug
