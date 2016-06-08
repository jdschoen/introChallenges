import base64


if __name__ == "__main__":

    flag1 = 'This is not the flag'
    flag2 = 'This is not the flag either'
    flag3 = 'Still not your flag'
    flag4 = 'Not your flag'
    flag5 = 'Keep looking - this is not it'
    flag6 = '#THISsdf&()sIStasdfNOTfasdfsdsAabcdeFLAG'
    output1 = 'The secret '
    output3 = 'inside'
    output2 = 'is on the '
    output = output1 + output2 + output3

    flag7 = base64.b64encode(output)
    flag8 = 'Close ... but this is not it'
    flag9 = 'The flag is in here somewhere'


    print "%s !" % base64.b64decode(flag7)
