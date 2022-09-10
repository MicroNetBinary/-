import sys
with open(sys.argv[1],'r') as f:
    f=list(f.read())
del sys
i=len(f)
error=False
tree=[]
while True:
    if i==0:
        break
    else:
        if f[i]=='i':
            i=i+1
            if f[i]=='f':
                i=i+1
                try:
                    while True:
                        if f[i]==' ' or f[i]=='\t':
                            i=i+1
                        else:
                            break
                except IndexError:
                    error=True
                    break
                if f[i]=='(':
                    listif=['if']
                    i2=i
                    try:
                        while True:
                            if f[i]!=')'
                                i=i+1
                            else:
                                break
                    except IndexError:
                        error=True
                        break
                    listif.append(f[i2:i-1])
                    try:
                        while True:
                            if f[i]==' ' or f[i]=='\t':
                                i=i+1
                            else:
                                break
                    except:
                        error=True
                        break
                    if f[i]=='{':
                        i2=i
                        try:
                            while True:
                                if f[i]!='}':
                                    i=i+1
                                else:
                                    break
                        except IndexError:
                            error=1
                            break
                        listif.append(f[i:i2-1])
                        tree.append(listif)
                    else:
                        error=True
                else:
                    error=True
            else:
                error=True
#注释跑丢了......