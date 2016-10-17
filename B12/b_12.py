from __future__ import division
from multiprocessing import Process, Queue
import math

def readFile(filename):
	data = {}
	data['age'] = []
	data['income'] = []
	data['student'] = []
	data['credit'] = []
	data['buys_computer'] = []
	file = open(filename, 'r')
	for line in file:
		data['age'].append(line.split()[0])
		data['income'].append(line.split()[1])
		data['student'].append(line.split()[2])
		data['credit'].append(line.split()[3])
		data['buys_computer'].append(line.split()[4].rstrip("\n"))
	return data

def getAge(q):
	age_high_yes = 0
	age_high_no = 0
	age_low_yes = 0
	age_low_no = 0
	cnt_yes = 0
	cnt_no = 0
	for x in xrange(n):
		if int(data['age'][x]) >= threshold:
			if data['buys_computer'][x] == 'yes':
				age_high_yes += 1
				cnt_yes += 1
			else:
				age_high_no += 1
				cnt_no += 1
		else:
			if data['buys_computer'][x] == 'yes':
				age_low_yes += 1
				cnt_yes += 1
			else:
				age_low_no += 1
				cnt_no += 1
	age_high_yes_prob = age_high_yes/cnt_yes
	age_high_no_prob = age_high_no/cnt_no
	age_low_yes_prob = age_low_yes/cnt_yes
	age_low_no_prob = age_low_no/cnt_no
	q.put([age_high_yes_prob, age_high_no_prob, age_low_yes_prob, age_low_no_prob])

def getIncome(q):
	income_high_yes = 0
	income_high_no = 0
	income_medium_yes = 0
	income_medium_no = 0
	income_low_yes = 0
	income_low_no = 0
	cnt_yes = 0
	cnt_no = 0
	for x in xrange(n):
		if data['income'][x] == 'high':
			if data['buys_computer'][x] == 'yes':
				income_high_yes += 1
				cnt_yes += 1
			else:
				income_high_no += 1
				cnt_no += 1
		elif data['income'][x] == 'medium':
			if data['buys_computer'][x] == 'yes':
				income_medium_yes += 1
				cnt_yes += 1
			else:
				income_medium_no += 1
				cnt_no += 1
		else:
			if data['buys_computer'][x] == 'yes':
				income_low_yes += 1
				cnt_yes += 1
			else:
				income_low_no += 1
				cnt_no += 1
	income_high_yes_prob = income_high_yes/cnt_yes
	income_high_no_prob = income_high_no/cnt_no
	income_medium_yes_prob = income_medium_yes/cnt_yes
	income_medium_no_prob = income_medium_no/cnt_no
	income_low_yes_prob = income_low_yes/cnt_yes
	income_low_no_prob = income_low_no/cnt_no
	q.put([income_high_yes_prob, income_high_no_prob, income_medium_yes_prob, income_medium_no_prob, income_low_yes_prob, income_low_no_prob])

def getStudent(q):
	stud_yes_yes = 0
	stud_yes_no = 0
	stud_no_yes = 0
	stud_no_no = 0
	cnt_yes = 0
	cnt_no = 0
	for x in xrange(n):
		if data['student'][x] == 'yes':
			if data['buys_computer'][x] == 'yes':
				stud_yes_yes += 1
				cnt_yes += 1
			else:
				stud_yes_no += 1
				cnt_no += 1
		else:
			if data['buys_computer'][x] == 'yes':
				stud_no_yes += 1
				cnt_yes += 1
			else:
				stud_no_no += 1
				cnt_no += 1
	stud_yes_yes_prob = stud_yes_yes/cnt_yes
	stud_yes_no_prob = stud_yes_no/cnt_no
	stud_no_yes_prob = stud_no_yes/cnt_yes
	stud_no_no_prob = stud_no_no/cnt_no
	q.put([stud_yes_yes_prob, stud_yes_no_prob, stud_no_yes_prob, stud_no_no_prob])

def getCredit(q):
	credit_excellent_yes = 0
	credit_excellent_no = 0
	credit_fair_yes = 0
	credit_fair_no = 0
	cnt_yes = 0
	cnt_no = 0
	for x in xrange(n):
		if data['credit'][x] == 'excellent':
			if data['buys_computer'][x] == 'yes':
				credit_excellent_yes += 1
				cnt_yes += 1
			else:
				credit_excellent_no += 1
				cnt_no += 1
		else:
			if data['buys_computer'][x] == 'yes':
				credit_fair_yes += 1
				cnt_yes += 1
			else:
				credit_fair_no += 1
				cnt_no += 1
	credit_excellent_yes_prob = credit_excellent_yes/cnt_yes
	credit_excellent_no_prob = credit_excellent_no/cnt_no
	credit_fair_yes_prob = credit_fair_yes/cnt_yes
	credit_fair_no_prob = credit_fair_no/cnt_no
	q.put([credit_excellent_yes_prob, credit_excellent_no_prob, credit_fair_yes_prob, credit_fair_no_prob])

data = readFile("data_nb.txt")
print data

n = len(data['buys_computer'])
threshold = 40

q = Queue()
p = []
p1 = Process(target = getAge, args = (q,))
p2 = Process(target = getIncome, args = (q,))
p3 = Process(target = getStudent, args = (q,))
p4 = Process(target = getCredit, args = (q,))

p.append(p1)
p.append(p2)
p.append(p3)
p.append(p4)

process_output = []
for x in p:
	x.start()
	process_output.append(q.get())
for x in p:
	x.join()
print process_output

age_high_yes_prob = process_output[0][0]
age_high_no_prob = process_output[0][1]
age_low_yes_prob = process_output[0][2]
age_low_no_prob = process_output[0][3]

income_high_yes_prob = process_output[1][0]
income_high_no_prob = process_output[1][1]
income_medium_yes_prob = process_output[1][2]
income_medium_no_prob = process_output[1][3]
income_low_yes_prob = process_output[1][4]
income_low_no_prob = process_output[1][5]

stud_yes_yes_prob = process_output[2][0]
stud_yes_no_prob = process_output[2][1]
stud_no_yes_prob = process_output[2][2]
stud_no_no_prob = process_output[2][3]

credit_excellent_yes_prob = process_output[3][0]
credit_excellent_no_prob = process_output[3][1]
credit_fair_yes_prob = process_output[3][2]
credit_fair_no_prob = process_output[3][3]

age = raw_input("Enter age: ")
income = raw_input("Enter income: ")
student = raw_input("Enter student status: ")
credit = raw_input("Enter credit: ")

total_yes_prob = 1
total_no_prob = 1

if age >= threshold:
	total_yes_prob *= age_high_yes_prob
	total_no_prob *= age_high_no_prob
else:
	total_yes_prob *= age_low_yes_prob
	total_no_prob *= age_low_no_prob

if income == 'high':
	total_yes_prob *= income_high_yes_prob
	total_no_prob *= income_high_no_prob
elif income == 'medium':
	total_yes_prob *= income_medium_yes_prob
	total_no_prob *= income_medium_no_prob
else:
	total_yes_prob *= income_low_yes_prob
	total_no_prob *= income_low_no_prob

if student == 'yes':
	total_yes_prob *= stud_yes_yes_prob
	total_no_prob *= stud_yes_no_prob
else:
	total_yes_prob *= stud_no_yes_prob
	total_no_prob *= stud_no_no_prob

if credit == 'excellent':
	total_yes_prob *= credit_excellent_yes_prob
	total_no_prob *= credit_excellent_no_prob
else:
	total_yes_prob *= credit_fair_yes_prob
	total_no_prob *= credit_fair_no_prob

print 'Total yes prob', total_yes_prob
print 'Total no prob', total_no_prob

print "Buys Computer?"

if total_yes_prob > total_no_prob:
	print "Yes"
else:
	print "No"