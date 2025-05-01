def chess_to_ascii(coords):
    message = ""
    for square in coords.split():
        col = ord(square[0]) - ord('a')  # 0-7
        row = int(square[1]) - 1         # 0-7
        value = row * 8 + col            # 0-63
        message += chr(value)
    return message

coords = "a8 a7 a6 a5 b8 c7 b6 d5 e4 f5 g4 h5 c1 c2 c3 d2 e1 e2 e3"
print(chess_to_ascii(coords))

