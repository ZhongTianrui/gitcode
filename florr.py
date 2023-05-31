import os
import time
import requests
s = ""
for i in range(0, 17):
  headers = {
    'User-Agent':
    'Mozilla/5.0 (Linux; Android 6.0; Nexus 5 Build/MRA58N)          AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Mobile Safari/537.36'
  }
  url = 'https://api.n.m28.io/endpoint/florrio-map-' + str(i) + '-green/findEach/'
  param = {}
  response = requests.get(url=url, params=param, headers=headers)  #三个参数
  ssss = str(i)
  if i < 10:
    ssss = '0' + ssss
    sid_NA = response.json()["servers"]["vultr-miami"]["id"] + ".s.m28n.net"
    sid_EU = response.json()["servers"]["vultr-frankfurt"]["id"] + ".s.m28n.net"
    sid_AS = response.json()["servers"]["vultr-tokyo"]["id"] + ".s.m28n.net"
    time.sleep(1)
    flag = os.system('ping -c 1 -w 1 %s' % sid_NA)
    
    if (flag == 0) :
        print(f"ERR on NA Server -> ")
        s += sid_NA
        s += "OK\n"
    else :
        print(f"OK on NA Server ->")
        s += sid_NA
        s += "ERR\n"
    time.sleep(1)
    flag = os.system('ping -c 1 -w 1 %s' % sid_EU)
    if (flag == 0) :
        print(f"ERR on EU Server -> ")
        s += sid_EU
        s += "OK\n"
    else :
        print(f"OK on EU Server ->")
        s += sid_EU
        s += "ERR\n"
    time.sleep(1)
    flag = os.system('ping -c 1 -w 1 %s' % sid_AS)
    if (flag == 0) :
        print(f"ERR on AS Server -> ")
        s += sid_AS
        s += "OK\n"
    else :
        print(f"OK on AS Server ->")
        s += sid_AS
        s += "ERR\n"
print(s)