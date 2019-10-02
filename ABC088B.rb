N = gets.to_i
cards = gets.split.map(&:to_i)

alice = 0
bob = 0
cards.sort.reverse.each_with_index do |card, index|
  if index % 2 == 0
    alice += card
  else
    bob += card
  end
end

puts alice - bob
