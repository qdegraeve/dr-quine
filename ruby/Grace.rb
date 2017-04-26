=begin
  chaine de sortie
=end
str = "=begin%c  chaine de sortie%c=end%cstr = %c%s%c%cFile.open(%c./Grace_kid.rb%c, %cw%c) { |file| file.write(sprintf(str, 10, 10, 10, 34, str, 34, 10, 34, 34, 34, 34, 10)); file.close }%c"
File.open("./Grace_kid.rb", "w") { |file| file.write(sprintf(str, 10, 10, 10, 34, str, 34, 10, 34, 34, 34, 34, 10)); file.close }
