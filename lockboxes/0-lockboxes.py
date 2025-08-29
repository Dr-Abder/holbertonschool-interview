#!/usr/bin/python3

def canUnlockAll(boxes):

    visited = {0}   # ensemble contenant juste la boîte 0
    stack = [0]     # pile pour explorer les boîtes

    while stack:
        box =  stack.pop()
        for key in boxes[box]:
            if key < len(boxes) and key not in visited:
                visited.add(key)
                stack.append(key)
    return len(boxes) == len(visited)