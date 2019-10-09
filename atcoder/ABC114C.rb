N = gets.to_i

ans = []
def func(s, ans, n)
  return if s.to_i > N

  ans.push(s.to_i) if (s.chars & ['3', '5', '7']).length == 3

  ['3', '5', '7'].each do |i|
    func(s + i, ans, n)
  end
end

func('', ans, N)
p ans.length
