const g: Record<string, Array<string>> = {
  A: ["B", "C"],
  C: ["D"],
  D: ["E", "F", "G"],
  H: ["A"],
};

function bfs(start: string, graph: Record<string, Array<string>>) {
  const queue = [start];

  const graphValues: Array<string> = [];

  while (queue.length) {
    const currentNode = queue.pop()!;

    graphValues.push(currentNode);

    if (graph[currentNode]) {
      for (const neighboor of graph[currentNode]) {
        queue.push(neighboor);
      }
    }
  }

  return graphValues;
}

console.log(bfs("A", g));
