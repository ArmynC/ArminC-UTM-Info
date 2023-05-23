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

OBJECTS = eoption.o epattern.o efrozen.o ecall.o eplug.o eskelet.o enames.o \
	evisib.o ececil.o einit.o eparents.o 

all::  $(OBJECTS)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

