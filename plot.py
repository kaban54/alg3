import matplotlib.pyplot as plt

filename1 = 'output/bubbleSort.txt'
filename2 = 'output/insertionSort.txt'
filename3 = 'output/selectionSort.txt'
title = 'Quadratic sorts'
imgname = 'plots/p1.png'

data1 = open(filename1, 'r').read().splitlines()
data2 = open(filename2, 'r').read().splitlines()
data3 = open(filename3, 'r').read().splitlines()

xvals1 = [float (data1[i].split()[0]) for i in range(len(data1))]
yvals1 = [float (data1[i].split()[1]) for i in range(len(data1))]

xvals2 = [float (data2[i].split()[0]) for i in range(len(data2))]
yvals2 = [float (data2[i].split()[1]) for i in range(len(data2))]

xvals3 = [float (data3[i].split()[0]) for i in range(len(data3))]
yvals3 = [float (data3[i].split()[1]) for i in range(len(data3))]

plt.axis([0, 50000, 0, 10])
plt.title(title, fontsize=20, fontname='Times New Roman')
plt.xlabel('Size', color='gray')
plt.ylabel('Time',color='gray')
plt.grid(True)
plt.plot (xvals1, yvals1, 'ro')
plt.plot (xvals2, yvals2, 'bo')
plt.plot (xvals3, yvals3, 'go')

plt.legend(['Bubble sort','Insertion sort', 'Selection sort'], loc=2)

plt.savefig(imgname)