package mypack;
import java.util.Scanner;


public class TestBt03 {
	public static void main(String[] args) {
		TuyenSinh danhSachThiSinh = new TuyenSinh();

		Scanner sc = new Scanner(System.in);
		while(true)
		{
			System.out.println("=================== MENU ===================");
			System.out.println("1. Them thong tin thi sinh");
			System.out.println("2. Hien thi thong tin cac thi sinh");
			System.out.println("3. Tim kiem theo so bao danh");
			System.out.println("4. Thoat chuong trinh");
			
			String luaChon = sc.nextLine();
			switch(luaChon)
			{
			case "1":
			{
				System.out.print("Nhap so banh danh: ");
				String sBD = sc.nextLine();
				
				System.out.print("Nhap ho va ten: ");
				String hoTen = sc.nextLine();
				
				System.out.print("Nhap dia chi: ");
				String diaChi = sc.nextLine();
				
				System.out.print("Nhap muc uu tien: ");
				int mucUuTien = sc.nextInt();
				sc.nextLine();
				
				boolean lap = true;
				while(lap)
				{
					lap = false;
					
					System.out.println("Chon khoi: ");
					System.out.println("   a. Khoi A");
					System.out.println("   b. Khoi B");
					System.out.println("   c. Khoi C");
					System.out.println("   d. Huy");
					
					String khoi = sc.nextLine();
					
					switch(khoi)
					{
					case "a":
					{
						System.out.print("Nhap diem toan: ");
						double diemToan = sc.nextDouble();
						
						System.out.print("Nhap diem ly: ");
						double diemLy = sc.nextDouble();
						
						System.out.print("Nhap diem hoa: ");
						double diemHoa = sc.nextDouble();
						sc.nextLine();
						
						ThiSinh ts = new KhoiA(sBD, hoTen, diaChi, mucUuTien, diemToan, diemLy, diemHoa);
						danhSachThiSinh.themThiSinh(ts);
						
						System.out.println("Them thanh cong");
						
						break;
					}
					case "b":
					{
						System.out.print("Nhap diem toan: ");
						double diemToan = sc.nextDouble();
						
						System.out.print("Nhap diem hoa: ");
						double diemHoa = sc.nextDouble();
						
						System.out.print("Nhap diem sinh: ");
						double diemSinh = sc.nextDouble();
						sc.nextLine();
						
						ThiSinh ts = new KhoiB(sBD, hoTen, diaChi, mucUuTien, diemToan, diemHoa, diemSinh);
						danhSachThiSinh.themThiSinh(ts);

						System.out.println("Them thanh cong");
						
						break;
					}
					case "c":
					{
						System.out.print("Nhap diem van: ");
						double diemVan = sc.nextDouble();
						
						System.out.print("Nhap diem su: ");
						double diemSu = sc.nextDouble();
						
						System.out.print("Nhap diem dia: ");
						double diemDia = sc.nextDouble();
						sc.nextLine();
						
						ThiSinh ts = new KhoiC(sBD, hoTen, diaChi, mucUuTien, diemVan, diemSu, diemDia);
						danhSachThiSinh.themThiSinh(ts);
						
						System.out.println("Them thanh cong");
						
						break;
					}
					case "d":
					{
						System.out.println("Da huy tao thong tin");
						break;
					}
					default:
					{
						System.out.println("Gia tri khong hop le, vui long nhap lai");
						lap = true;
						break;
					}
					}
				}
				break;
			}
			case "2":
			{

				boolean ktrTrong = danhSachThiSinh.hienThiThongTinDanhSach();
				if(ktrTrong == false)
					System.out.println("Danh sach tuyen sinh trong. Vui long nhap du lieu!");
				break;
			}
			case "3":
			{
				System.out.println("Nhap so bao danh can tim: ");
				String sBDTim = sc.nextLine();
				if(danhSachThiSinh.timKiemTheoSoBaoDanh(sBDTim) == false)
					System.out.println("Khong tim thay");
				break;
			}
			case "4":
			{
				System.out.println("SEE YOU AGAIN !!!");
				sc.close();
				return;
			}
			default:
			{
				System.out.println("Gia tri khong hop le. Vui long nhap lai");
				break;
			}
			
			}
		}
	}
}
