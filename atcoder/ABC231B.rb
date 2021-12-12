N = gets.to_i

votes = {}
N.times do
    name = gets.to_s.chomp
    votes[name] = 0 if votes[name].nil?
    votes[name] += 1
end

vote = votes.max{ |x, y| x[1] <=> y[1] } 
puts vote[0]
