cd ..
rmdir ./dist/
rmdir ./build/
del ./target/x86_64/iso/boot/kernel.bin
call docker rmi zedos-buildenv -f