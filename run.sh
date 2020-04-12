#! /bin/bash

rm -rf *.o
echo Compiling...
gcc -c *.c
if [ $? != 0 ]
then 
echo ----failed----
exit
fi
echo Linking...
gcc -o a.out *.o && ./a.out
echo
echo ...done
rm -rf *.o