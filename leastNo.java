import java.util.*;
import java.io.*;

public class leastNo
{
	public static int minIndex(char[] num, int beg, int end)
	{
		int min = beg;
		for(int i = beg; i <= end; i++)
		{
			if(num[i] < num[min])
				min = i;
		}
		return min;
	}

	public static String findLeastNo(String num, int k)
	{
		int len = num.length()-k, start = 0, end = k;
		String leastNo = "";
		for(int i = end; i < num.length(); i++)
		{
			start = minIndex(num.toCharArray(), start, i);
			leastNo = leastNo + num.charAt(start);
			start++;
			end++;
		}
		return leastNo;
	}
	
	public static void main(String args[]) throws IOException
	{
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in)); 
		System.out.print("Number: ");
		String leastNo = bf.readLine();
		System.out.print("No of digits to delete: ");
		int k = Integer.parseInt(bf.readLine());
		System.out.print(findLeastNo(leastNo, k) + "\n");
	}
}