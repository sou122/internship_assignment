
def count(para,words):
    d={}
    w=para.lower().split()
    for i in w:
        word = i.replace(",", "")
        word = i.replace("!", "")
        word = i.replace(":", "")
        word = i.replace("?", "")
        word = word.replace(".", "")
        if word==words:
            d[word]=d.get(word,0)+1
    for k,v in d.items():
        print('key = {}\t occurs {} times'.format(k,v))
para=input("Enter the para : ")
word=input("Enter a string : ")
count(para,word)