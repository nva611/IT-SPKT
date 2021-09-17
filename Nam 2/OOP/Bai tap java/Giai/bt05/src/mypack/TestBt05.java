package mypack;
import java.util.Scanner;

public class TestBt05 {
	public static void main(String[] args) {
		Hotel ht = new Hotel();
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			System.out.println("1. Them thong tin khach thue phong");
			System.out.println("2. Xoa thong tin khach hang theo CMND");
			System.out.println("3. Tinh tien phong");
			System.out.println("4. Hien thi thong tin tat ca 1khach thue");
			System.out.println("5. Thoat");
			
			String choose = sc.nextLine();
			
			switch(choose)
			{
			case "1":
			{
				
				
				System.out.println("Nhap ho va ten: ");
				String name = sc.nextLine();
				
				System.out.println("Nhap tuoi: ");
				int age = sc.nextInt();
				sc.nextLine();
				
				System.out.println("Nhap CMND: ");
				String idNumber = sc.nextLine();
				
				System.out.println("Nhap so ngay thue: ");
				int numberOfRentaDays = sc.nextInt();
				sc.nextLine();
				
				System.out.println("Nhap loai phong: ");
				String room = sc.nextLine();
				
				if(room.equalsIgnoreCase("A"))
				{
					Person ps = new Person(name, age, idNumber, numberOfRentaDays, new RoomA());
					ht.addPerson(ps);
				}
				else if(room.equalsIgnoreCase("B"))
				{
					Person ps = new Person(name, age, idNumber, numberOfRentaDays, new RoomB());
					ht.addPerson(ps);
				}
				else if(room.equalsIgnoreCase("C"))
				{
					Person ps = new Person(name, age, idNumber, numberOfRentaDays, new RoomC());
					ht.addPerson(ps);
				}
				//ht.getPersons().add(ps);
				System.out.println("Them thong tin thanh cong !!!");
				break;
			}
			case "2":
			{
				System.out.println("Nhap CMND can xoa: ");
				String idNumber = sc.nextLine();
				if(ht.delete(idNumber)==false)
					System.out.println("Khong tim thay CMND cua khach thue phong de xoa");
				else
					System.out.println("Xoa thanh cong !!");
				break;
			}
			case "3":
			{
				System.out.println("Nhap CMND can tinh tien phong: ");
				String idNumber = sc.nextLine();
				if(ht.calculator(idNumber)==-1)
					System.out.println("Khong tim thay CMND cua khach thue phong de tinh tien");
				else
					System.out.println("Tien phong = " + ht.calculator(idNumber));
				break;
			}
			case "4":
			{
				if(ht.getPersons().isEmpty()==true)
					System.out.println("Danh sach trong");
				else
					ht.show();
				break;
			}
			case "5":
			{
				System.out.println("SEE YOU AGAIN !!! ");
				sc.close();
				return;
			}
			default:
			{
				System.out.println("Gia tri khong hop le, vui long nhap lai !");
				break;
			}
			}
		}
	}
}
