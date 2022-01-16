#!/bin/bash

# Variabile globale
iesire() { clear; echo "> Inchidere..."; exit 0; }
eroare() { clear; echo "> Optiune invalida."; meniulprincipal; }

c13() {
    echo -ne "
------------
CAPITOLUL 13
------------
1) service
2) kcalc

m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
        clear
        service --status-all
        c13
        ;;
    2)
        clear
        kcalc
        c13
        ;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c12() {
    echo -ne "
------------
CAPITOLUL 12
------------
1) echo
2) variabila + echo
3) printf
4) time

m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        echo "Script Bash Linux"
		c12
        ;;
    2)
        clear
        autor=ArminC
        echo "^_^ $autor"
        c12
        ;;
    3)
        clear
        # ascii encrypted art
        base64 -d <<< "H4sIAAAAAAAA/9PVRQHaqFxdLgU4iI+PV9CPi4sG0SggHqFIvyYObII2kF2jHI8A+vowRRoKQNkakFgN1FQggNgNV6NgawvXqaurjmxZDJKL6uJB5gAxAJguw0HFAAAA" | gunzip
        printf "\n \n helikopter helikopter"
        c12
        ;;
    4)
        clear
        time
        c12
        ;;

    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c10() {
    echo -ne "
------------
CAPITOLUL 10
------------
1) pwgen
2) umask
3) uptime
4) free
5) df
6) who
7) last
8) passwd

m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        pwgen -N 1
		c10
        ;;
    2)
        clear
        umask
        c10
        ;;
	3)
		clear
		uptime
		c10
		;;
	4)
		clear
		free
		c10
		;;
	5)
		clear
		df
		c10
		;;
	6)
		clear
		who
		c10
		;;
	7) 
		clear
		last
		c10
		;;
    8)
		clear
		passwd
		c10
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}


c9() {
    echo -ne "
-----------
CAPITOLUL 9
-----------
1) netstat
2) telnet
3) wget
4) ssh
5) scp
6) ftp
7) curl

m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        netstat --tcp --listening
		c9
        ;;
    2)
        clear
        telnet github.com
        c9
        ;;
	3)
		clear
		wget https://github.com/ArmynC/ArminC-UTM-Info/raw/main/Anul%201/Semestrul%201/Sisteme%20de%20operare/Introducere%20in%20sisteme%20de%20operare.pdf
		c9
		;;
    4)
		clear
		ssh
		c9
		;;
    5)
		clear
		scp
		c9
		;;
    6)
		clear
		ftp
		c9
		;;
    7)
		clear
		curl github.com/armync
		c9
		;;

    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c8() {
    echo -ne "
-----------
CAPITOLUL 8
-----------
1) ipconfig
2) route
3) hostname
4) host
5) ping

m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        ipconfig
		c8
        ;;
    2)
        clear
        route
        c8
        ;;
	3)
		clear
		hostname
		c8
		;;
    4)
		clear
		host utm.ro
		c8
		;;
	5)
		clear
		ping google.com
		c8
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c7() {
    echo -ne "
-----------
CAPITOLUL 7
-----------
1) lsmod
2) /proc/modules
3) uname
4) lsusb
5) lspci
6) hwinfo
7) /proc/interrupts
8) /proc/meminfo


m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        lsmod
		c7
        ;;
    2)
        clear
        cat /proc/modules
        c7
        ;;
	3)
		clear
		unrame -r
		c7
		;;
	4)
		clear
		lsusb
		c7
		;;
	5)
		clear
		lspci
		c7
		;;
	6)
		clear
		hwinfo --short
		c7
		;;
	7) 
		clear
		cat /proc/interrupts
		c7
		;;
	8)
		clear
		cat /proc/meminfo
		c7
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c6() {
    echo -ne "
-----------
CAPITOLUL 6
-----------
1) runlevel
2) init
3) grub
4) file
5) halt
6) find

m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        runlevel
		c6
        ;;
	2)
		clear
		init1
		c6
		;;
	3)
		clear
		grub
		c6
		;;
	4)
		clear
		file /dev/null
		c6
		;;
    5)
		clear
		halt
		c6
		;;
    6)
		clear
		find
		c6
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c5() {
    echo -ne "
-----------
CAPITOLUL 5
-----------
1) pgrep
2) time
3) proc
4) jobs
5) fg
6) kill
7) free
8) top


m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        pgrep -u root,daemon
		c5
        ;;
	2)
		clear
		time updatedb
		c5
		;;
	3)
		clear
		cd /proc/
		c5
		;;
	4)
		clear
		jobs
		c5
		;;
	5)
		clear
		fg
		c5
		;;
	6)
		clear
		kill -1
		c5
		;;
	7)
		clear
		free
		c5
		;;
    8)
		clear
		top
		c5
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

c4() {
    echo -ne "
-----------
CAPITOLUL 4
-----------
1) PATH
2) cd
3) /etc/resolv.conf
4) ls -l
5) mkdir
6) ls -alh
7) touch
8) mv


m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        echo $PATH
		c4
        ;;
	2)
		clear
		cd /home/
		c4
		;;
	3)
		clear
		cat /etc/resolv.conf
		c4
		;;
	4)
		clear
		ls -l /home/
		c4
		;;
	5)
		clear
		mkdir arminc
		c4
		;;
	6)
		clear
		ls -alh
		c4
		;;
	7)
		clear
		touch fisier_test
		c4
		;;
	8)
		clear
		mv fisier_test fisier_test_2
		c4
		;;
	m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

stergereuser() {
	echo -ne "
-------------------
Stergere utilizator
------------------- "

	read -p "Introdu numele de utilizator: " user
	
	egrep "^$user" /etc/passwd >/dev/null
	
	if [ $? -ne 0 ]; then
		echo -e "\nUtilizatorul $user nu exista."
		c3
	else
		userdel "$user"
		
		if grep "${user}" /etc/passwd >/dev/null 2>&1; then
        	echo -e "\nOperatiunea de stergere a esuat."
		else 
			echo -e "\nUtilizatorul a fost sters."
		fi
	fi
	
	c3
}

usernou() {
	echo -ne "
-------------------
Adaugare utilizator
------------------- "

	read -p "Introdu numele de utilizator: " user
	read -s -p "Introdu parola: " parola
	
	egrep "^$user" /etc/passwd >/dev/null
	
	if [ $? -eq 0 ]; then
		echo -e "\nUtilizatorul $user exista deja."
		c3
	else
		cheie=$(perl -e 'print crypt($ARGV[0], "password")' $parola)
		useradd -m -p "$cheie" "$user"
		[ $? -eq 0 ] && echo -e "\nUtilizatorul a fost adaugat in sistem." || echo -e "\nOperatiunea de adaugare a esuat."
	fi
	
	c3
}

c3() {
    echo -ne "
-----------
CAPITOLUL 3
-----------
1) /etc/passwd
2) /etc/shadow
3) id
4) passwd
5) adduser *interactiv*
6) deluser *interactiv*
7) --display
8) /etc/apt/sources.list
9) usermod


m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        cat /etc/passwd
		c3
        ;;
	2)
		clear
		ls -l /etc/shadow
		c3
		;;
	3)
		clear
		id
		c3
		;;
	4)
		clear
		passwd
		c3
		;;
	5)
		clear
		usernou
		;;
	6) 
		clear
		stergereuser
		;;
	7)
		clear
		update-alternatives --display editor
		c3
		;;
	8)
		clear
		cat /etc/apt/sources.list
		c3
		;;
    9)
		clear
		usermod -b arminc
		c3
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}


c2() {
    echo -ne "
-----------
CAPITOLUL 2
-----------
1) ps
2) help
3) whatis
4) apropos
5) man
6) shutdown
7) su


m) Meniul principal
0) Iesire

Introdu optiunea> "
    read optiuni
    case $optiuni in
    1)
		clear
        ps -o uid,pid,cmd
		c2
        ;;
	2)
		clear
		cp --help
		c2
		;;
	3)
		clear
		whatis ps
		c2
		;;
	4)
		clear
		apropos zip
		c2
		;;
	5)
		clear
		man whatis
		c2
		;;
	6) 
		clear
		shutdown -h now
		c2
		;;
	7)
		clear
		su
		c2
		;;
    m)
	    clear
        meniulprincipal
        ;;
    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

# Meniul standard & optiunile
meniulprincipal() {
    # -n opreste trecerea la o linie noua dupa terminarea afisarii
	# -e permite utilizarea caracterelor tip \n, \t
    echo -ne "
--------------------
SCRIPT COMENZI CARTE
--------------------

2) Capitolul 2
3) Capitolul 3
4) Capitolul 4
5) Capitolul 5
6) Capitolul 6
7) Capitolul 7
8) Capitolul 8
9) Capitolul 9
10) Capitolul 10
12) Capitolul 12
13) Captiolul 13

0) Iesire

Introdu optiunea> "
	
	# Citeste valoarea pentru 'optiuni'
    read optiuni
	
	# Leaga valoarea de multiplele cazuri
    case $optiuni in
	2)
		clear
		c2
		;;
	3)
		clear
		c3
		;;	
	4)
		clear
		c4
		;;	
	5)
		clear
		c5
		;;
	7)
		clear
		c7
		;;
	8)
		clear
		c8
		;;	
	9)
		clear
		c9
		;;	
	10)
		clear
		c10
		;;	
	12)
		clear
		c12
		;;
    13)
        clear
        c13
        ;;

    0)
        iesire
        ;;
    *)
        eroare
        ;;
    esac
}

# Verificare mod super utilizator
if [[ $(id -un) == 'root'  ]]; then
    clear
    meniulprincipal # Initializare meniu
else
    clear
    echo "[ATENTIE] Mod super utilizator (admin) recomandat !"
    sleep 2
    meniulprincipal
fi
