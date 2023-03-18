import java.io.*;
import java.util.*;

public class EventualReduction {
    public static void main(String[] args) throws Exception {
        BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int t = Integer.parseInt(buffer.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(buffer.readLine());
            String a = buffer.readLine();
            HashMap<Character, Integer>hashMap = new HashMap<>();
            for (char ch :
                    a.toCharArray()) {
                hashMap.put(ch,hashMap.getOrDefault(ch,0)+1);
            }
            boolean check = true;
            for (char ch :
                    hashMap.keySet()) {
                if (hashMap.get(ch) % 2 == 1)
                {
                    check = false;
                    break;
                }
            }
            if (!check)
                sb.append("NO\n");
            else
                sb.append("YES\n");
        }
        System.out.println(sb);
    }
}
