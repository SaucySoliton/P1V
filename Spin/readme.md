

# Notes for converting spin to hex


# Ensure that the file has a "PUB x" 

openspin -c rambooter.spin

hexdump  -v -e '/4 "%08x"' -e '/4 "\n"'  rambooter.dat > rambooter.hex




