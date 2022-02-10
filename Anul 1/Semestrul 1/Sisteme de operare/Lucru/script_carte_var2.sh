#!/bin/bash

RE="\e[31m" # red
GR="\e[32m" # green
NO="\e[0m" # no / standard

hsub12() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 12 -    "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - echo; 2 - var + echo; "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        echo "tema sisteme operare"
		hsub12
        ;;
    2)
        clear
        variabila=examen
        echo "Pentru $variabila"
        hsub12
        ;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hsub10() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 10 -    "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - pwgen; 2 - umask;     "
    echo " 3 - uptime; 4 - free;     "
    echo " 5 - df; 6 - who; 7 - last;"
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        pwgen -N 1
		hsub10
        ;;
    2)
        clear
        umask
        hsub10
        ;;
	3)
		clear
		uptime
		hsub10
		;;
	4)
		clear
		free
		hsub10
		;;
	5)
		clear
		df
		hsub10
		;;
	6)
		clear
		who
		hsub10
		;;
	7) 
		clear
		last
		hsub10
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}


hsub9() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 9 -     "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - netstat; 2 - telnet;  "
    echo " 3 - wget;                 "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        netstat --tcp --listening
		hsub9
        ;;
    2)
        clear
        telnet youtube.com
        hsub9
        ;;
	3)
		clear
		wget http://us.download.nvidia.com/tesla/396.37/nvidia-diag-driver-local-repo-ubuntu1710-396.37_1.0-1_amd64.deb 
		hsub9
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hsub8() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 8 -     "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - ipconfig; 2 - route   "
    echo " 3 - hostname; 4 - ping    "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        ipconfig
		hsub8
        ;;
    2)
        clear
        route
        hsub8
        ;;
	3)
		clear
		hostname
		hsub8
		;;
	4)
		clear
		ping www.facebook.com
		hsub8
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hsub7() {
    echo -en " \n \n "

    echo "       - HUB SUBMENU 7 -       "
    echo "      Comenzi disponibile:     "
    echo "                               "
    echo " 1 - lsmod; 2 - /proc/modules; "
    echo " 3 - uname; 4 - lsusb;         "
    echo " 5 - lspci; 6 - hwinfo;        "
    echo " 7 - /proc/interrupts;         "
    echo " 8 - /proc/meminfo;            "
    echo " ............................. "
    echo "                               "
    echo " Hub - H                       "
    echo " Exit - 0                      "
    echo "                               "

    read -p "-> " val

    case $val in
    1)
		clear
        lsmod
		hsub7
        ;;
    2)
        clear
        cat /proc/modules
        hsub7
        ;;
	3)
		clear
		unrame -r
		hsub7
		;;
	4)
		clear
		lsusb
		hsub7
		;;
	5)
		clear
		lspci
		hsub7
		;;
	6)
		clear
		hwinfo --short
		hsub7
		;;
	7) 
		clear
		cat /proc/interrupts
		hsub7
		;;
	8)
		clear
		cat /proc/meminfo
		hsub7
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hsub5() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 5 -     "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - pgrep; 2 - time;      "
    echo " 3 - proc; 4 - jobs;       "
    echo " 5 - fg;                   "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        pgrep -P l
		hsub5
        ;;
	2)
		clear
		time updatedb
		hsub5
		;;
	3)
		clear
		cd /proc/
		hsub5
		;;
	4)
		clear
		jobs
		hsub5
		;;
	5)
		clear
		fg
		hsub5
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hsub4() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 4 -     "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - path; 2 - cd;         "
    echo " 3 - /etc/resolv.conf;     "
    echo " 4 - ls; 5 - mkdir         "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        echo $PATH
		hsub4
        ;;
	2)
		clear
		cd /home/
		hsub4
		;;
	3)
		clear
		cat /etc/resolv.conf
		hsub4
		;;
	4)
		clear
		ls -l /home/
		hsub4
		;;
	5)
		clear
		mkdir douaa
		hsub4
		;;
	h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hsub3() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 3 -     "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - /etc/passwd;          "
    echo " 2 - /etc/shadow;          "
    echo " 3 - id; 4 - passwd        "
    echo " 5 - adduser; 6 - deluser  "
    echo " 7 - --display;            "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in

    1)
		clear
        cat /etc/passwd
		hsub3
        ;;
	2)
		clear
		ls -l /etc/shadow
		hsub3
		;;
	3)
		clear
		id
		hsub3
		;;
	4)
		clear
		passwd
		hsub3
		;;
	5)
		clear
		adduser douaa
		;;
	6) 
		clear
		userdel douaa
		;;
	7)
		clear
		update-alternatives --display editor
		hsub3
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}


hsub2() {
    echo -en " \n \n "

    echo "     - HUB SUBMENU 2 -     "
    echo "    Comenzi disponibile:   "
    echo "                           "
    echo " 1 - ps; 2 - help          "
    echo " 3 - whatis; 4 - apropos   "
    echo " 5 - man; 6 - shutdown     "
    echo " 7 - apt-get update        "
    echo " ......................... "
    echo "                           "
    echo " Hub - H                   "
    echo " Exit - 0                  "
    echo "                           "

    read -p "-> " val

    case $val in
    1)
		clear
        ps -o uid,pid,cmd
		hsub2
        ;;
	2)
		clear
		cp --help
		hsub2
		;;
	3)
		clear
		whatis ls
		hsub2
		;;
	4)
		clear
		apropos zip
		hsub2
		;;
	5)
		clear
		man ls
		hsub2
		;;
	6) 
		clear
		shutdown -h now
		hsub2
		;;
	7)
		clear
		apt-get update
		hsub2
		;;
    h)
	    clear
        hub
        ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

hub() {
    clear
    echo -e "${RE}    - HUB SCRIPT -          "
    echo -e "${NO} Capitole disponibile:      "
    echo -e "${GR}  2 3 4 5 7 8 9 10 12       "
    echo -e "${NO} .....................      "
    echo -e "                                 "
    echo -e " Exit - 0                        "
    echo -e "                                 "
	
    read -p "-> " val
	
    case $val in
	2)
		clear ; hsub2 ;;
	3)
		clear ; hsub3 ;;
	4)
		clear ; hsub4 ;;
	5)
		clear ; hsub5 ;;
	7)
		clear ; hsub7 ;;
	8)
		clear ; hsub8 ;;
	9)
		clear ; hsub9 ;;
	10)
		clear ; hsub10 ;;
	12)
		clear ; hsub12 ;;
    0)
        exit 0 ;;
    *)
        echo -en "\nValoare ${RE}nedefinita${NO} in script!" ; sleep 2 ; hub ;;
    esac
}

trap '' SIGINT SIGQUIT SIGTSTP
hub
