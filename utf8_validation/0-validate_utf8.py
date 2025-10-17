#!/usr/bin/python3

def validUTF8(data):
    """
    Détermine si data représente un encodage UTF-8 valide
    """
    n_byte = 0

    for num in data:

        byte = num & 0xFF

        if n_byte == 0:
            if (byte & 0b10000000) == 0b00000000:
                n_byte = 0
            elif (byte & 0b11100000) == 0b11000000:
                n_byte = 1
            elif (byte & 0b11110000) == 0b11100000:
                n_byte = 2
            elif (byte & 0b11111000) == 0b11110000:
                n_byte = 3
            else:
                return False

        elif n_byte > 0:
            if (byte & 0b11000000) == 0b10000000:
                n_byte -= 1
            else:
                return False

    return n_byte == 0
