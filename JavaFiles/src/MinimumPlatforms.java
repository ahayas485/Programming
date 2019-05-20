import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Map;
import java.util.TreeMap;

public class MinimumPlatforms {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(bufferedReader.readLine());
        while((t-=1)!=-1) {
            int n = Integer.parseInt(bufferedReader.readLine().trim());
            TreeMap<Integer, String> time = new TreeMap<>();
            String arr_Time[] = bufferedReader.readLine().split(" ");
            String dep_Time[] = bufferedReader.readLine().split(" ");
            String temp;
            for(int i=0;i<n;i++){
                if(time.containsKey(Integer.parseInt(arr_Time[i].trim()))){
                    temp = time.get(Integer.parseInt(arr_Time[i].trim()));
                    temp += "a";
                    time.put(Integer.parseInt(arr_Time[i].trim()), temp);
                }else{
                    time.put(Integer.parseInt(arr_Time[i].trim()), "a");
                }

                if(time.containsKey(Integer.parseInt(dep_Time[i].trim()))){
                    temp = time.get(Integer.parseInt(dep_Time[i].trim()));
                    temp += "d";
                    time.put(Integer.parseInt(dep_Time[i].trim()), temp);
                }else{
                    time.put(Integer.parseInt(dep_Time[i].trim()), "d");
                }

            }

            int p = 0, diff = 0;
            for(Map.Entry<Integer, String> map: time.entrySet()){
                temp = map.getValue();

                for(int i=0;i<temp.length();i++){
                    if(temp.charAt(i)=='a'){
                        p++;
                        diff = max(p,diff);
                    }else{
                        p--;
                    }
                }
            }

            System.out.println(diff);
        }
    }

    static int max(int a, int b){
        if(a>b){
            return a;
        }
        return b;
    }
}


/*1
6
900  940 950  1100 1500 1800
910 1200 1120 1130 1900 2000*/
