# 幅優先探索

# 1を頂点とする木を対象とする。
nodes = {
  1 => [2, 3],
  2 => [1, 4],
  3 => [1, 5, 6],
  4 => [2, 6],
  5 => [3],
  6 => [3, 4]
}

queue = [1]
finished = Array.new(nodes.length, false)
while queue.size.positive?
  node = queue.shift
  finished[node] = true
  nodes[node].each do |child|
    next if finished[child]
    next unless queue.index(child).nil?

    puts child
    queue.push(child)
  end
end
