import matplotlib.pyplot as plt

filename1 = 'output/random.txt'
filename2 = 'output/MergeSort.txt'
title = 'Merge VS Quicksort'
imgname = 'plots/p3.png'

data1 = open(filename1, 'r').read().splitlines()
data2 = open(filename2, 'r').read().splitlines()

xvals1 = [float (data1[i].split()[0]) for i in range(len(data1))]
yvals1 = [float (data1[i].split()[1]) for i in range(len(data1))]

xvals2 = [float (data2[i].split()[0]) for i in range(len(data2))]
yvals2 = [float (data2[i].split()[1]) for i in range(len(data2))]

plt.axis([0, 5000000, 0, 2])
plt.title(title, fontsize=20, fontname='Times New Roman')
plt.xlabel('Size', color='gray')
plt.ylabel('Time',color='gray')
plt.grid(True)
plt.plot (xvals1, yvals1, 'r.')
plt.plot (xvals2, yvals2, 'b.')

plt.legend(['Quicksort','Merge sort'], loc=2)

plt.savefig(imgname)