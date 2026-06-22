class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjacency(numCourses);
        vector<int>inDegree(numCourses,0);
        for(auto prerequisite: prerequisites){
            int preCourse = prerequisite[1];
            int course = prerequisite[0];
            adjacency[preCourse].push_back(course);
            inDegree[course]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        int coursesProcessed = 0;
        while(!q.empty()){
            int u = q.front();
            coursesProcessed++;
            q.pop();
            for(int v:adjacency[u]){
                inDegree[v]--;
                if(inDegree[v]==0){
                    q.push(v);
                }
            }
        }

        return coursesProcessed == numCourses;
    }
};
