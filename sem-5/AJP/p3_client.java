import java.io.*;
import java.net.*;

public class p3_client {
    public static void main(String[] args) {
        String sentence, modifiedSentence;
        BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in)); 
        Socket clientSocket = new Socket("hostname", 123);
        DataOutputStream outToServer = new DataOutputStream(clientSocket.getOutputStream()); 
        BufferedReader inFromServer = new BufferedReader(new InputStreamReader(clientSocket.getInputStream())); 
        sentence = inFromUser.readLine(); 
        outToServer.writeBytes(sentence + '\n'); 
        modifiedSentence = inFromServer.readLine(); 
        System.out.println("FROM SERVER: " + modifiedSentence); 
        clientSocket.close(); 
    } 
}
