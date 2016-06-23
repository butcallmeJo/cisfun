import json
import urllib
import dicttoxml
import sys

page = urllib.urlopen('http://173.246.108.142/oop/cars.json')
content = page.read()
obj = json.loads(content)
xml = dicttoxml.dicttoxml(obj)

f = open('cars.xml', 'w')
f.write(xml)