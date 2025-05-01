# fix_yoda_image.py

def fix_yoda_image(input_path: str, output_path: str):
    with open(input_path, "rb") as f:
        data = bytearray(f.read())

    # Step 1: Swap every adjacent pair of bytes
    pairwise_swapped = bytearray()
    for i in range(0, len(data) - 1, 2):
        pairwise_swapped.extend([data[i+1], data[i]])
    if len(data) % 2 != 0:
        pairwise_swapped.append(data[-1])

    # Step 2: Reorder every 4-byte block (swap halves of each 4-byte chunk)
    final = bytearray()
    for i in range(0, len(pairwise_swapped) - 3, 4):
        block = pairwise_swapped[i:i+4]
        final.extend([block[2], block[3], block[0], block[1]])

    # Add leftover bytes if not multiple of 4
    remainder = len(pairwise_swapped) % 4
    if remainder:
        final.extend(pairwise_swapped[-remainder:])

    # Save the final fixed image
    with open(output_path, "wb") as f:
        f.write(final)

    print(f"[+] Fixed image written to: {output_path}")

# Usage example
if __name__ == "__main__":
    fix_yoda_image("yoda", "yoda_fixed.jpg")

