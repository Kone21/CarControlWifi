from machine import UART, Pin

class Driving:
    def __init__(self):
        self.uart = UART(0, 115200)
        self.uart.init(baudrate=115200, bits=8, parity=None, stop=1, tx_pin=Pin(1), rx_pin=Pin(3))
    
    def fd(self):
        self.uart.write('forward')

    def lft(self):
        self.uart.write('left')

    def rgh(self):
        self.uart.write('right')

    def stp(self):
        self.uart.write('stop')

drive = Driving()