import java.util.*;

public class GeneratingAllSubarrays{

    public static List<List<Integer>> getSubarrays(int[] arr)
    {
        List<List<Integer>> ans = new ArrayList<>();

        int n = arr.length;

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                List<Integer> sub = new ArrayList<>();
                for(int k = i; k <= j; k++)
                {
                    sub.add(arr[k]);
                }
                ans.add(sub);
            }
        }
        return ans;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Size of the Array: ");
        int n = sc.nextInt();

        int [] arr = new int[n];
        System.out.println("Enter the Array Element: ");
        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        List<List<Integer>> result = getSubarrays(arr);

        for(List<Integer> sub : result)
        {
            for(int num : sub)
            {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}