import math
import csv
import numpy as np

# Create lists for data
cube_data = []
shield_data = []

# Pull cube data from list
with open('output_nt_Cube.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in spamreader:
        #print(', '.join(row))
        cube_data.append(row[0])

# Pull shield data from list
with open('output_nt_Shield.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in spamreader:
        #print(', '.join(row))
        shield_data.append(row[0])



# Remove headers
cube_data = cube_data[5:]
shield_data = shield_data[5:]

# Convet list elements to float
cube_data = [float(i) for i in cube_data]
shield_data = [float(i) for i in shield_data]

# Take the ratio of each cube and shield value
ratio_data = []
for i in range(len(cube_data)):
    val = cube_data[i]/shield_data[i]
    ratio_data.append(val)

# Take average
ratio = np.mean(ratio_data)

print("Average ratio of cube against shield energy: " + str(round(ratio, 3)))


