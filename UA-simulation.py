# Python 3.8
import socket
from time import sleep
import math
UDP_IP = "127.0.0.1"
UDP_PORT = 7777
sock = socket.socket


def connect():
    global sock
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)


def send(MESSAGE):
    global sock
    sock.sendto(bytes(MESSAGE, "utf-8"), (UDP_IP, UDP_PORT))


if __name__ == '__main__':
    connect()
    x=250
    y=250
    degree=0
    r=100
    while True:
        send("my_agtGpDot.point.x="+str(x+r*math.cos(degree)))
        send("my_agtGpDot.point.y="+str(y+r*math.sin(degree)))
        degree=degree+2*math.pi/24;
        sleep(0.2);
