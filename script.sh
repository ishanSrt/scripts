rm /usr/src/minix/servers/pm/forkexit.c
cp forkexit.c /usr/src/minix/servers/pm/forkexit.c
cd /usr/src && make build MKUPDATE=yes
