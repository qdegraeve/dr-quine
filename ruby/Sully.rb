i=5
i -= 1 if File.basename(__FILE__) != 'Sully.rb'
exit if i < 0
str="i=%d%ci -= 1 if File.basename(__FILE__) != 'Sully.rb'%cexit if i < 0%cstr=%c%s%c%cFile.open(%c./Sully_%c{i}.rb%c, 'w') { |file| file.write(sprintf(str, i, 10, 10, 10, 34, str, 34, 10, 34, 35, 34, 10, 34, 35, 34, 10)); file.close }%csystem(%cruby Sully_%c{i}.rb%c)%c"
File.open("./Sully_#{i}.rb", 'w') { |file| file.write(sprintf(str, i, 10, 10, 10, 34, str, 34, 10, 34, 35, 34, 10, 34, 35, 34, 10)); file.close }
system("ruby Sully_#{i}.rb")
