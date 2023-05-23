INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard\library\time\spec\include"
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/studio/spec/win64/lib/mingw/mtwkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/studio/config/win64/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 22.12 Standard/gcc/win64/mingw/libexec/gcc/x86_64-w64-mingw32/4.4.5;C:\Program Files\Common Files\Oracle\Java\javapath;C:\Program Files\Zulu\zulu-18\bin\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files\7-Zip\;C:\Program Files (x86)\Google\Chrome\Application;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\AMD\ATI.ACE\Core-Static;C:\Program Files (x86)\ATI Technologies\ATI.ACE\Core-Static;C:\Users\ArminC\AppData\Local\GitHubDesktop\bin;C:\adb;C:\ADB\;C:\Program Files (x86)\dotnet\;C:\Program Files\dotnet\;C:\Program Files\VSCodium\bin;C:\Users\ArminC\AppData\Local\Programs\Python\Python311\Scripts\;C:\Users\ArminC\AppData\Local\Programs\Python\Python311\;C:\Users\ArminC\AppData\Local\Programs\Python\Python38\Scripts\;C:\Users\ArminC\AppData\Local\Programs\Python\Python38\;C:\Users\ArminC\AppData\Local\GitHubDesktop\bin;C:\Users\ArminC\.dotnet\tools;C:\Program Files\JetBrains\IntelliJ IDEA Community Edition 2023.1\bin; 
SYSTEM_IN_DYNAMIC_LIB = project.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ap975.o ap975d.o eq984.o eq984d.o in1005.o in1005d.o eq983.o \
	eq983d.o it991.o it991d.o er1006.o er1006d.o eq982.o eq982d.o eq981.o \
	eq981d.o in1003.o in1003d.o eq980.o eq980d.o ad990.o ad990d.o \
	in1004.o in1004d.o in1002.o in1002d.o it1001.o it1001d.o eq979.o \
	eq979d.o so989.o so989d.o c_978.o c_978d.o da1000.o da1000d.o da999.o \
	da999d.o it977.o it977d.o so988.o so988d.o pa976.o pa976d.o da997.o \
	da997d.o da998.o da998d.o ti996.o ti996d.o ti995.o ti995d.o gr987.o \
	gr987d.o ti994.o ti994d.o ti993.o ti993d.o co992.o co992d.o da986.o \
	da986d.o da985.o da985d.o 

all::  Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

