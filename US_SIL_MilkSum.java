import java.io.*;
import java.util.*;

public class US_SIL_MilkSum {
	static BufferedReader in;
	static StringTokenizer st;
	static int n, q, x, y;
	static HashMap<Integer, Integer> m;
	static PriorityQueue<Integer> pq;
	
    public static void main(String[] args) throws IOException {
        in = new BufferedReader(new InputStreamReader(System.in));
        
        st = new StringTokenizer(in.readLine());
        n = Integer.parseInt(st.nextToken());
        m = new HashMap<Integer, Integer>();
        st = new StringTokenizer(in.readLine());

        for(int i=1; i<=n; i++)
        	m.put(i, Integer.parseInt(st.nextToken()));
        
        q = Integer.parseInt(in.readLine()); 
    	pq = new PriorityQueue<Integer>();

        while(q-->0)
        	solve();     
        
    }
    
    static void solve() throws IOException {
        st = new StringTokenizer(in.readLine());
    	x = Integer.parseInt(st.nextToken());
    	y = Integer.parseInt(st.nextToken());
    	
    	int keep = m.get(x);
    	m.put(x, y);
    	pq.addAll(m.values());
    	m.put(x, keep);
    	
    	long ans = 0l;
    	int i = 1;
    	while(!pq.isEmpty()) {
    		ans+= i*pq.poll();
    		i++;
    	}
    	
    	System.out.println(ans);
    }
}