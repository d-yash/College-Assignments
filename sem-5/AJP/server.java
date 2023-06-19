import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.nio.Buffer;
import java.nio.charset.StandardCharsets;

public class server {
    private static DatagramSocket s;
    public static void main(String[] args) throws Exception{
        s = new DatagramSocket(550);
        byte[] b1 = new byte[2048];
        DatagramPacket dp = new DatagramPacket(b1, b1.length);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        InetAddress inet = InetAddress.getLocalHost();

        System.out.println("Server side ... ");
        while(true){
            s.receive(dp);
            String str3 = new String(dp.getData(), 0, dp.getLength());
            System.out.println("Client : " + str3);

            String str4 = new String(br.readLine());
            b1 = str4.getBytes();
            s.send(new DatagramPacket(b1, str4.length(), inet, 220) );
        }
    }
}

