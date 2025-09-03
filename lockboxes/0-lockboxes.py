#!/usr/bin/python3
"""
Module 0-lockboxes
Détermine si toutes les boîtes peuvent être ouvertes à partir de la boîte 0.
"""


def canUnlockAll(boxes):

    """
    Détermine si toutes les boîtes peuvent être ouvertes.
    boxes: list de listes, chaque liste contient
    les clés présentes dans la boîte.
    Retourne True si toutes les boîtes peuvent être ouvertes, sinon False.
    """

    visited = {0}   # ensemble contenant juste la boîte 0
    stack = [0]     # pile pour explorer les boîtes

    while stack:
        box = stack.pop()
        for key in boxes[box]:
