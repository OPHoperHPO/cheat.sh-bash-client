#!/bin/bash
export ALPHA="Wrong parameters! Usage: c -c <COMMAND>"
while true ; do
  case "$1" in
    -c) export ALPHA="$2" ; shift 2 ;;
    *) break ;;
  esac
done
if [[ $ALPHA == *"Wrong parameters! Usage: c -c <COMMAND>"* ]]
then
   echo $ALPHA
   exit
else
   curl cheat.sh/$ALPHA
   exit
fi
