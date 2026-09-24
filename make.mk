CFLAGS += -I/opt/X11/include -L/opt/X11/lib -lXt -lX11 -lXext -lXaw7
clean:
	

xpad: 
	cc xpad.c -o xpad