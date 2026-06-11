import re
n = int(input())
for i in range(n):
    s = input()
    print(s)
    s = re.sub(r"\s+([.,!?;:'\"])",r"\1",s)
    s = re.sub(r"\s+"," ",s)
    s = s.strip()
    s2 = s.lower()
    for j in range(len(s)):
        if s[j] == 'I':
            s2 = s2[:j:] + "I" +s2[j+1::]
    s = s2
    s = re.sub(r"\bcan you\b","arkerny can",s)
    s = re.sub(r"\bcould you\b","arkerny could",s)
    s = re.sub(r"\bme\b","you",s)
    s = re.sub(r"\bI\b","you",s)
    s = re.sub(r"\barkerny\b","I",s)
    s = re.sub(r"\barkerny\b","I",s)
    s = re.sub(r"\?","!",s)
    s = s.strip()
    print("AI: "+s)