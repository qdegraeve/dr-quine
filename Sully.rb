i=5
while(i >= 0)
str="i=%d%cwhile(i >= 0)%cstr=%c%s%c%cFile.open(%c./Sully_%c{i}.rb%c, 'w') { |file| file.write(sprintf(str, i, 10, 10, 34, str, 34, 10, 34, 35, 34, 10, 10, 10)) }%ci -= 1%cend%c"
File.open("./Sully_#{i}.rb", 'w') { |file| file.write(sprintf(str, i, 10, 10, 34, str, 34, 10, 34, 35, 34, 10, 10, 10)) }
i -= 1
end
