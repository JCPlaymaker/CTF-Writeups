import nibabel as nib
import matplotlib.pyplot as plt

img = nib.load("flag.nii")
data = img.get_fdata()

print("Shape:", data.shape)

# Loop through slices
for i in range(data.shape[2]):
    plt.imshow(data[:, :, i], cmap='gray')
    plt.title(f"Slice {i}")
    plt.axis('off')
    plt.show()

