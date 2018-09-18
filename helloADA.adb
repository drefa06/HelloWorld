with 
    Ada.Text_IO,              -- Needed by Put, Get_line for string
    Ada.Integer_Text_IO,      -- Needed by Get for integer
    Ada.Strings.Unbounded,    -- Needed to declare a string with no predef size
    --Ada.Text_IO.Unbounded_IO, 
    Ada.Strings.Fixed;        -- Needed to transform int to str

procedure HelloADA is
    hello : String := "Hello";
    age : Integer;
    name : Ada.Strings.Unbounded.Unbounded_String;
    flush : String (1..10);
    last : Natural;

begin
    Ada.Text_IO.Put("Enter your age: ");
    Ada.Integer_Text_IO.Get(age);
    Ada.Text_IO.Get_line(flush,last); -- Need to flush the remaining \n
    
    Ada.Text_IO.Put("Enter your name: ");
    name := Ada.Strings.Unbounded.To_Unbounded_String(Ada.Text_IO.Get_Line);  

    declare
        reponse : constant String := hello & " '" & Ada.Strings.Unbounded.To_String(name) & "' You are " & Ada.Strings.Fixed.Trim(Integer'Image(age),Ada.Strings.Left) & " old.";
    begin
        Ada.Text_IO.Put(reponse);
    end;
end Hello;
