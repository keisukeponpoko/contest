N = gets.to_i

def func(rest, s)
  if rest.zero?
    puts s
  else
    ['a', 'b', 'c'].each do |v|
      func(rest - 1, s + v)
    end
  end
end

func(N, '')
