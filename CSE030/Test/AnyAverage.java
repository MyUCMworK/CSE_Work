import java.util.Scanner;
public class AnyAverage {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		// TODO Auto-generated method stub
		//System.out.print("Please enter the min number: ");
		//int min = input.nextInt();
		
		System.out.print("Please enter the max number: ");
		int max = input.nextInt();
		
		int i = 0;
		int sum = 0;
		while (i <= max){
			sum += i;
			i++;
			System.out.print("Number" + i);
			System.out.println("\tsum    " + sum);
			
			
			if (i > 0){
					System.out.println("Average of the " + i + " numbers is " + (sum/i));
			}else{
					System.out.println("There are no numbers to average!");
					
			}
			
		
}
	}
}