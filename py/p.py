import turtle

def clut(bds):
    global t #全局变量
    global t
    pde = {'+': 1, '-': 1, '*': 2, '/': 2}
    outk = []
    opsk = []
    t = ''
    for char in bds:
        if char.isdigit():
            t += char
        elif ((char in pde) or (char in ['(', ')'])) :
            if t:
                outk.append(t)
                t = ''
            if (char in pde):
                while (opsk and (opsk[-1] in pde) and pde[opsk[-1]] >= pde[char]):
                    outk.append(opsk.pop())
                opsk.append(char)
            elif (char == '(') :
                opsk.append(char)
            elif (char == ')') :
                while (opsk[-1] != '('):
                    outk.append(opsk.pop())
                opsk.pop()
            else :
                pass
        elif (char == 'x') :
            outk.append('x')
        else :
            pass
    if t:
        outk.append(t)
    while opsk:
        outk.append(opsk.pop())
    return ' '.join(outk)

def jis(bds, x):
    stack = []
    for tkn in bds.split():
        if tkn.isdigit():
            stack.append(int(tkn))
        elif (tkn == 'x') :
            stack.append(x)
        elif (tkn in ['+', '-', '*', '/']) :
            if (len(stack) < 2):
                raise ValueError("不正确的后缀表达式")
            b = stack.pop()
            a = stack.pop()
            if (tkn == '+'):
                c = (a + b)
            elif (tkn == '-') :
                c = (a - b)
            elif (tkn == '*') :
                c = (a * b)
            elif (tkn == '/') :
                if (b == 0):
                    raise ZeroDivisionError("除以零")
                c = (a / b)
            else :
                pass
            stack.append(c)
        else :
            raise ValueError("不正确的后缀表达式")
    if (len(stack) != 1):
        raise ValueError("不正确的后缀表达式")
    return stack[0]

def inf(y):
    if (y <= -200):
        return 0
    elif (y >= 200) :
        return 0
    else :
        return 1


n = turtle.Pen()
n.color("#000000")
n.hideturtle()
n.penup()
n.clear()
n.goto((-400),0)
n.pendown()
n.goto(400,0)
n.penup()
n.goto(0,300)
n.pendown()
n.goto(0,(-300))
n.penup()
c="#0000ff"
n.color(c)
while True:
    s = turtle.textinput('input', '请输入表达式')
    if (s == 'out'):
        break
    x = (-400)
    while (x < 400):
        y = jis(clut(s), x)
        if y>=-350 and y<=350 :
            n.goto(x,y)
            n.pendown()
        x=x+1
    n.color("#000000")
    s = ('y=' + s)
    n.write(s)
    n.penup()
    n.color(c)

turtle.done()
