#!/bin/bash
# Author https://github.com/OPHOPERHPO
# Licensed under MIT License! You can find license on URL https://raw.githubusercontent.com/OPHoperHPO/cheat.sh-bash-client/master/LICENSE
# Set variable
export ALPHA="Wrong parameters! Usage: c -c <COMMAND>"
# Check curl installation
if [[ ! $(curl -V) ]]
then
        echo -e "ERROR!"
        echo -e "To run this script, you need install 'curl'"
        echo -e "To install curl run this command: 
        'sudo pacman -S curl' # For Arch Linux based distro
        'sudo yum install curl' # For Fedora/Red Hat Enterprise Linux etc
        'sudo apt install curl' #For Debian-based distro like Ubuntu, Debian, etc "
        exit 1
fi
# Parse parameters
while true ; do
  case "$1" in
    -c) export ALPHA="$2" ; shift 2 ;;
    *) break ;;
  esac
done
# Check parameters
if [[ $ALPHA == *"Wrong parameters! Usage: c -c <COMMAND>"* ]]
then
   echo $ALPHA
   exit
else
   curl cheat.sh/$ALPHA
   exit
fi

