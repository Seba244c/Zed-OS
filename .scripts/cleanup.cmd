cd ..
rmdir /s .\dist\
rmdir /s .\build\
del .\target\x86_64\iso\boot\kernel.bin
call docker rmi zedos-buildenv -f