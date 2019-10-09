# 深さ優先探索

# 1を頂点とする木を対象とする。
nodes = {
  1 => [2, 3],
  2 => [1, 4],
  3 => [1, 5, 6],
  4 => [2, 6],
  5 => [3],
  6 => [3, 4]
}

stack = [1]
finished = Array.new(nodes.length, false)
while stack.size.positive?
  node = stack.pop
  finished[node] = true
  nodes[node].each do |child|
    next if finished[child]
    next unless stack.index(child).nil?

    puts child
    stack.push(child)
  end
end
