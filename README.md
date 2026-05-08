# Advanced Graph Algorithms & Dynamic Programming in C++ 🚀

Welcome to my repository dedicated to advanced **Graph Theory Algorithms**, **Disjoint Set Union (DSU)** architectures, and **Dynamic Programming (DP)** strategies implemented in C++. This project catalogs implementations of classical network problems, traversal methodologies, and optimization paradigms.

---

## 📂 Repository Architecture

The workspace is systematically divided into structural graph representations, foundational traversals, and specialized algorithm directories:

### 1. Graph Representations & Traversals
*   `Adjacency_matrix.cpp` — $\mathcal{O}(V^2)$ spatial density grid representations.
*   `Adjacency_list.cpp` — Dynamic vector-of-lists mapping for optimal $\mathcal{O}(V + E)$ spatial footprints.
*   `edge_list.cpp` — Linear vector serialization of individual structural edges.
*   `adj_list_to_matrix.cpp` — Conversion pipelines transforming structural graph schemas.
*   `bfs_traversal.cpp` & `bfs_traversal_with_level_tracking.cpp` — Queue-driven Breadth-First Searches for shortest-path routing in unweighted networks.
*   `path_printing.cpp` — Backtracking traversals using parents mapping arrays to reconstruct explicit paths.

### 2. Specialized Algorithm Components

#### 📂 `dfs` (Depth-First Search)
*   Recursive explorations tracking tree-edge routing, component discoveries, and back-edge calculations.

#### 📂 `cycle_detection_graph_algorithm`
*   State-tracking arrays checking loop topologies inside directed and undirected networks.

#### 📂 `dijkstra`
*   Priority-queue based greedy optimizations evaluating $\mathcal{O}(E \log V)$ single-source shortest paths on positive-weighted paths.

#### 📂 `Bellman_Ford_Algorithm`
*   Iterative edge relaxation pipelines handling negative edge weights and identifying harmful negative cycles.

#### 📂 `DSU` (Disjoint Set Union)
*   Equivalence relation clustering featuring optimized path compression and union-by-rank heuristics.

#### 📂 `Dynamic_Programming`
*   Optimal substructure breakdowns utilizing Memoization (Top-down) and Tabulation (Bottom-up) matrix mappings.

### 3. Practical Applied Problem Sets
*   **Pathing & Navigation:** `Can_Go.cpp`, `Can_Go_Again.cpp`, `Maze.cpp`, `Shortest_Distance.cpp`.
*   **Component Analytics:** `Area_of_Component.cpp`, `Count_Apartments.cpp`, `Count_Apartments_II.cpp`.
*   **Network Optimization (MST):** `Building.cpp`, `Emperor_Alexander.cpp`, `Cycle_of_Edges.cpp`.
*   **Knapsack & DP Variants:** `Adventure.cpp`, `Chocolates.cpp`, `Exam_Marks.cpp`, `Make_It.cpp`.

---

## 🛠️ Execution Requirements

A compiler natively interpreting standard `C++11` or higher is necessary (e.g., `g++`).

### Local Development Pipelines

1. **Clone the algorithm ecosystem:**
   ```bash
   git clone github.com
   ```
2. **Access the execution root directory:**
   ```bash
   cd Algorithms
   ```
3. **Compile your implementation file of choice (e.g., Dijkstra variant):**
   ```bash
   g++ dijkstra/dijkstra_implementation.cpp -o graph_demo
   ```
4. **Execute binaries:**
   * **Windows:** `graph_demo.exe`
   * **Linux/macOS:** `./graph_demo`

---

## 📈 Learning Roadmap
* [x] Structural Graph Representations & Standard BFS/DFS
* [x] Single-Source Shortest Paths (Dijkstra / Bellman-Ford)
* [x] Minimum Spanning Trees (Kruskal's via DSU / Prim's)
* [x] Classic DP Paradigms (0-1 Knapsack, Unbounded Knapsack, Longest Common Subsequence)
