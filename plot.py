import matplotlib.pyplot as plt

filename = 'output/MergeSort.txt'
title = 'Merge Sort'
imgname = 'plots/merge.png'

data = open(filename, 'r').read().splitlines()

xvals = [float (data[i].split()[0]) for i in range(len(data))]
yvals = [float (data[i].split()[1]) for i in range(len(data))]

plt.axis([0, 5000000, 0, 2])
plt.title(title, fontsize=20, fontname='Times New Roman')
plt.xlabel('Size', color='gray')
plt.ylabel('Time',color='gray')
plt.grid(True)
plt.plot (xvals, yvals, 'ro')
plt.savefig(imgname)