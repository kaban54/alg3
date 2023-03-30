import matplotlib.pyplot as plt

filename1 = 'output/median.txt'
filename2 = 'output/center.txt'
filename3 = 'output/random.txt'
title = 'Quicksort'
imgname = 'plots/p2.png'

data1 = open(filename1, 'r').read().splitlines()
data2 = open(filename2, 'r').read().splitlines()
data3 = open(filename3, 'r').read().splitlines()

xvals1 = [float (data1[i].split()[0]) for i in range(len(data1))]
yvals1 = [float (data1[i].split()[1]) for i in range(len(data1))]

xvals2 = [float (data2[i].split()[0]) for i in range(len(data2))]
yvals2 = [float (data2[i].split()[1]) for i in range(len(data2))]

xvals3 = [float (data3[i].split()[0]) for i in range(len(data3))]
yvals3 = [float (data3[i].split()[1]) for i in range(len(data3))]

plt.axis([0, 5000000, 0, 0.8])
plt.title(title, fontsize=20, fontname='Times New Roman')
plt.xlabel('Size', color='gray')
plt.ylabel('Time',color='gray')
plt.grid(True)
plt.plot (xvals1, yvals1, 'r.')
plt.plot (xvals2, yvals2, 'b.')
plt.plot (xvals3, yvals3, 'g.')

plt.legend(['median','center', 'random'], loc=2)

plt.savefig(imgname)