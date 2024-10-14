import java.util.Scanner;
import java.util.LinkedList;

class list2	{
	LinkedList<Integer> list = new LinkedList<>();


	public void do_append() {
		Scanner scan = new Scanner(System.in);
		for (;;) {
			System.out.println("Input a positive decimal number:");
			int sc = scan.nextInt();
			if (sc > 0) {
				list.add(sc);
				break;
			} else {
				System.out.println("The number you input is not valid. Try again!!");
			}
		}
	}

	public void do_search() {	
		Scanner scan = new Scanner(System.in);
		System.out.println ("Input a number you've wanted:" );
		int n = scan.nextInt();
		System.out.println("---------------------------------");

		for(Integer i : list){
				if (n == i)	{ 
					System.out.println("The number you've wanted is " + (list.indexOf(i) + 1) + " th!!");// index안에 위치 반환
					break;
				}//end if
			}//end for
	}//end func


	public void do_print() {
		System.out.println("--------------------------------");
		for (Integer i : list) { 
			System.out.println(i + " ");
		}//end for
	}//end func
}//end func



public class java_ll_ex	{
	
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		list2 var = new list2();

		for (;;) {
			System.out.println("Append[1] or Search[2]? :");  
			int param =scan.nextInt();	

			switch(param) {
				case 1 :
				var.do_append();
				break;   
			
				case 2 :
				var.do_search();
				break;

				default:
				break;
			}//end switch  
			var.do_print();
		}//end for 
	}//end func 
}//end func







