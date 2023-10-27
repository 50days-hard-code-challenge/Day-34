class Solution {
    public int largestRectangleArea(int[] heights) {
        int n=heights.length;
        Stack<Integer> st=new Stack<>();
        int leftsmall[]=new int[n];
        int rightsmall[]=new int[n];
        int ans=0;
        // for left small array
        for(int i=0;i<n;i++)
        {
            while(!st.isEmpty() && heights[st.peek()]>=heights[i])
            {
                st.pop();
            }
            if(!st.isEmpty())
            {
                leftsmall[i]=st.peek()+1;
            }
            else
            {
                leftsmall[i]=0;
            }
            st.push(i);
        }
        while(!st.isEmpty())
        {
            st.pop();
        }
        // for rightsmall array
         for(int i=n-1;i>=0;i--)
        {
            while(!st.isEmpty() && heights[st.peek()]>=heights[i])
            {
                st.pop();
            }
            if(!st.isEmpty())
            {
                rightsmall[i]=st.peek()-1;
            }
            else
            {
                rightsmall[i]=n-1;
            }
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
           ans=Math.max(ans,heights[i]*(rightsmall[i]-leftsmall[i]+1));
        }
      return ans;
    }
}
