#June3rd2020
##for x in range(65,91):print(chr(x),',',chr(x+32))
##ord('A')-64

f = open('names.txt','r')
sum = 0
#sorted() returns a list
names = sorted(f.read().replace('"','').split(','))
#enumrate() goes over an iteratable and keeps in mind the index starts at 0
for i,word in enumerate(names):
    letters_score=0
    #ord and chr switch between letters and ASCII
    for letter in word: letters_score += ord(letter)-64
    sum += letters_score*(i+1)
#print(list(names))
print(sum)
