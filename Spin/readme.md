

# Notes for converting spin to hex


# Ensure that the file has a "PUB x" 

openspin -c booter.spin

hexdump  -v -e '/4 "%08x"' -e '/4 "\n"'  booter.dat > booter.hex




