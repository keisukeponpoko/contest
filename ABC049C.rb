S = gets.chomp.reverse

divide = ['dream', 'dreamer', 'erase', 'eraser'].map(&:reverse)

can = true
i = 0
while i < S.size
  can2 = false
  divide.each do |d|
    if S.slice(i, d.size) == d
      can2 = true
      i += d.size
    end
  end

  if !can2
    can = false
    break
  end
end

puts can ? 'YES' : 'NO'

# 時間OVER
# def check(string)
#   return true if string == ''

#   first_char = string.chars.first
#   if first_char == 'd'
#     sub_string = string.sub(/^dream/, '')
#     if string != sub_string
#       return true if check(sub_string)
#     end

#     sub_string = string.sub(/^dreamer/, '')
#     if string != sub_string
#       return true if check(sub_string)
#     end
#   elsif first_char == 'e'
#     sub_string = string.sub(/^erase/, '')
#     if string != sub_string
#       return true if check(sub_string)
#     end

#     sub_string = string.sub(/^eraser/, '')
#     if string != sub_string
#       return true if check(sub_string)
#     end
#   end

#   return false
# end

# puts check(S) ? 'YES' : 'NO'
