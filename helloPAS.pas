program HelloPAS;

Uses sysutils; {Needed to call IntToStr}

var
    age : integer;
    name : String;
    result : String;
    i : Integer;
Const
    hello = 'Hello';

begin
    write('Enter your age: ');
    readln(age);

    write('Enter your name: ');
    readln(name);

    writeln(hello + ' ''' + name + ''' You are ' + IntToStr(age) + ' years old.');
end.
