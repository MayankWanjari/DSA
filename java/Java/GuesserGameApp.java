import java.util.Scanner;

/**
 * Represents the person who selects a secret number for others to guess.
 */
class Guesser {
    int gnum;

    /**
     * Prompts the Guesser to input a number.
     * @return the number guessed by the Guesser
     */
    int guessingNo() {
        System.out.print("Guesser, kindly guess the number: ");
        Scanner scan = new Scanner(System.in);
        gnum = scan.nextInt();
        return gnum;
    }
}

/**
 * Represents a player attempting to guess the Guesser's number.
 */
class Player {
    int pnum;

    /**
     * Prompts the Player to input a prediction.
     * @return the number predicted by the Player
     */
    int predictingNo() {
        System.out.print("Player, predict the number: ");
        Scanner scan = new Scanner(System.in);
        pnum = scan.nextInt();
        return pnum;
    }
}

/**
 * Handles the coordination of the game, including collecting numbers
 * and determining the winner(s).
 */
class Umpire {
    int numFromPlayer1;
    int numFromPlayer2;
    int numFromPlayer3;
    int numFromGuesser;

    /**
     * Collects the number guessed by the Guesser.
     */
    void collectingNumFromGuesser() {
        Guesser g = new Guesser();
        numFromGuesser = g.guessingNo();
    }

    /**
     * Collects predictions from all three Players.
     */
    void collectingNumFromPlayers() {
        Player p1 = new Player();
        Player p2 = new Player();
        Player p3 = new Player();

        numFromPlayer1 = p1.predictingNo();
        numFromPlayer2 = p2.predictingNo();
        numFromPlayer3 = p3.predictingNo();
    }

    /**
     * Compares each Player’s prediction with the Guesser's number and
     * announces the winner accordingly.
     */
    void comparing() {
        boolean winnerFound = false;

        if (numFromGuesser == numFromPlayer1) {
            System.out.println("Player 1 is the winner!");
            winnerFound = true;
        }
        if (numFromGuesser == numFromPlayer2) {
            System.out.println("Player 2 is the winner!");
            winnerFound = true;
        }
        if (numFromGuesser == numFromPlayer3) {
            System.out.println("Player 3 is the winner!");
            winnerFound = true;
        }
        if (!winnerFound) {
            System.out.println("No player guessed correctly.");
        }
    }
}

/**
 * Entry point for the Guesser Game.
 * <p>
 * This class initializes the game flow, allowing one Guesser to pick a number
 * and three Players to guess it. The Umpire manages inputs and decides the result.
 * </p>
 * 
 * <p><b>Game Flow:</b></p>
 * <ol>
 *   <li>Guesser chooses a number.</li>
 *   <li>Players make their predictions.</li>
 *   <li>Umpire compares guesses and announces the winner(s).</li>
 * </ol>
 * 
 * @author Roushan
 * @version 1.0
 */
public class GuesserGameApp {
    /**
     * Starts the game by triggering the Guesser, Players, and Umpire.
     * @param args command-line arguments
     */
    public static void main(String[] args) {
        Umpire u = new Umpire();
        u.collectingNumFromGuesser();
        u.collectingNumFromPlayers();
        u.comparing();
    }
}
