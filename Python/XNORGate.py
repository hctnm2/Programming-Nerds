''' An XNOR Gate is a logic gate in boolean algebra which results to False(0) if inputs are unequal,
   and True(1) if the inputs are equal.
   Following is the truth table of an XNOR Gate:
   | Input 1 | Input 2 |  Output |
   |      0      |     0      |      1      |
   |      0      |     1      |      0      |
   |      1      |     0      |      0      |
   |      1      |     1      |      1      |
'''
'''Following is the code implementation of the XNOR Gate'''

def XNOR_Gate(input_1,input_2):
    if input_1 != input_2 :
        return 0
    else:
        return 1
    
if __name__== '__main__':
    print('Truth Table of XNOR Gate:')
    print('| Input 1 |',' Input 2 |',' Output |')
    print('|      0      |','     0      |     ',XNOR_Gate(0,0),'     |')
    print('|      0      |','     1      |     ',XNOR_Gate(0,1),'     |')
    print('|      1      |','     0      |     ',XNOR_Gate(1,0),'     |')
    print('|      1      |','     1      |     ',XNOR_Gate(1,1),'     |')
"""Code provided by Akshaj Vishwanathan"""
