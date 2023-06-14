import java.net.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.beans.Statement;
import java.io.*;
import java.lang.Thread.State;

class tcp2server{
    public static void main(String[] args) throws Exception{
        ServerSocket ss = new ServerSocket(8788);
        Socket s = ss.accept();
        PrintStream ps = new PrintStream(s.getOutputStream());
        BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader kb = new BufferedReader(new InputStreamReader(System.in));
        while(1){
            String str, str1;
            while((str=br.readline()) != null){
                System.out.println("S : " + str);
                str1 = kb.readLine();
                ps.println(str1);
            }
        }
        ps.close();
        br.close();
        kb.close();
        s.close();
        ss.close();
    }
}

class tcp2Client{
    public static void main(String[] args) throws Exception{
        Server s = new server("localhost", 8788);
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        BufferedReader br  = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader kb = new BufferedReader(new InputStreamReader(System.in));
        String str, str1;
        while(!((str = kb.readLine()).equals("exit"))){
            dos.writeBytes(str);
            str1 = br.readLine();
            System.out.println("R : " + str1);
        }
        dos.close();
        br.close();
        kb.close();
        s.close();
        ss.close();
    }
}


class que{
    public static void main(String[] args) throws Exception {
        String url = "jdbc:mysql://localhost/mysql";
        string name = "root";
        string pass = "";
        String que = "update student set name = Toshhhhuu" where partner="yasshhuu"""
        Class.forname("com.jdbc.mysql.Driver");
        Connection con = DriverManager.getConnection(url, name, pass);
        Statement st = con.createStatement();
        int count = st.execute(que);
    }
}