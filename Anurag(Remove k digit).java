class Solution {
    public String removeKdigits(String num, int k) {
        Stack<Character> st=new Stack<>();
        StringBuilder str = new StringBuilder();
        for(int i=0;i<num.length();i++)
        {
            char ch=num.charAt(i);
            while(!st.isEmpty() && k>0 &&st.peek()>ch)
            {
                st.pop();
                k--;
         
            }
            if(!st.isEmpty() || ch!='0')
            {
                st.push(ch);
            }
            
        }
          while(!st.isEmpty() && k>0)
            {
               st.pop();
               k--;
            }
            if(st.isEmpty())
            {
                return "0";
            }
            while(!st.isEmpty())
            {
                str.append(st.pop());
            }
        String ans=str.reverse().toString();
          return ans;
    }
}
