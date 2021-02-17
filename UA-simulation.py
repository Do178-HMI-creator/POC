# Python 3.8
import socket
from time import sleep

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
    while True:
        send("my_agtGpDot.point.x=150")
        send("my_agtGpDot.point.y=300")
        sleep(2);
        send("my_agtGpDot.point.x=100")
        send("my_agtGpDot.point.y=250")
        sleep(2);