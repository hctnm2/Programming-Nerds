import geocoder

g=geocoder.ip('120.89.104.47')  # you might also try - 147.229.2.90 - this ip address

addr=g.latlng  #this gives latitude and longitude which you can copy and paste on google earth

print(addr)
