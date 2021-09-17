package mypack;
import java.util.Scanner;
import java.util.List;
import java.util.LinkedList;

public class TestBt04 {
	public static void main(String[] args) {
		int n, i ,j;
		int numberOfMember, age;
		String name, career, idNumber;
		Scanner sc = new Scanner(System.in);
		
		Quarter quarter = new Quarter();
		
		System.out.println("Nhap so ho: ");
		n = sc.nextInt();
		
		for(i=0; i<n; i++)
		{
			System.out.println("========== NHAP THONG TIN HO THU " + (i+1) + " ==========");
			System.out.println("Nhap so thanh vien trong gia dinh: ");
			numberOfMember = sc.nextInt();
			sc.nextLine();
			
			Family family = new Family();
			
			for(j=0; j<numberOfMember; j++)
			{
				System.out.println("------------ Nhap Thong Tin Thanh Vien Thu " + (j+1) + "------------");
				System.out.println("Nhap ho va ten: ");
				name = sc.nextLine();
				
				System.out.println("Nhap tuoi: ");
				age = sc.nextInt();
				sc.nextLine();
				
				System.out.println("Nhap nghe nghiep: ");
				career = sc.nextLine();
				
				System.out.println("Nhap so CMND: ");
				idNumber = sc.nextLine();
				
				Person member = new Person(name, age, career, idNumber);
				family.getHousehold().add(member);
				
			}
			quarter.getQuarter().add(family);
		}
		
		System.out.println("********** THONG TIN CAC HO GIA DINH TRONG KHU PHO **********");
		quarter.display();
	}
}
