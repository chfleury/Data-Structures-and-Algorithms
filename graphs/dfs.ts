const graph: Record<string, Array<string>> = {
  A: ["B", "C"],
  B: ["D", "E", "J", "K"],
  C: ["D"],
  D: ["E", "F", "G", "H"],
  H: ["A"],
};

function dfs(start: string, graph: Record<string, Array<string>>) {
  const stack = [start];
  const visited = new Set();

  const graphValues: Array<string> = [];

  while (stack.length) {
    const currentNode = stack.pop()!;

    graphValues.push(currentNode);
    visited.add(currentNode);

    if (graph[currentNode]) {
      for (const neighboor of graph[currentNode]) {
        if (!visited.has(neighboor)) stack.push(neighboor);
      }
    }
  }

  return graphValues;
}

function dfsRecursive(
  start: string,
  graph: Record<string, Array<string>>,
  visited: Set<string>
) {
  let values: string[] = [];

  if (visited.has(start)) {
    return [];
  }

  visited.add(start);

  if (graph[start]) {
    for (const neighboor of graph[start]) {
      values = [...values, ...dfsRecursive(neighboor, graph, visited)];
    }
  }

  return [start, ...values];
}

console.log(dfs("A", graph));

const visited: Set<string> = new Set();
console.log(dfsRecursive("A", graph, visited));
