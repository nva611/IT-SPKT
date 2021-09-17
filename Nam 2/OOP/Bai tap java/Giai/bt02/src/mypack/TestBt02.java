package mypack;
import java.util.Scanner;
public class TestBt02 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		QuanLyTaiLieu ql = new QuanLyTaiLieu();
		
		while(true)
		{
			System.out.println("=================== MENU ===================");
			System.out.println("   1. Them tai lieu");
			System.out.println("   2. Xoa tai lieu theo ma");
			System.out.println("   3. Hien thi thong tin");
			System.out.println("   4. Tim tai lieu theo loai");
			System.out.println("   5. Thoat");
			
			String luaChonMenu = sc.nextLine();
			
			switch(luaChonMenu)
			{
			case "1":
			{
				System.out.println(" * Chon loai: ");
				System.out.println("      a. Sach");
				System.out.println("      b. Tap chi");
				System.out.println("      c. Bao");
	
				String loai =  sc.nextLine();
				
				switch(loai)
				{
				case "a":
				{
					System.out.print("Nhap ma tai lieu: ");
					String maTL = sc.nextLine();
					
					System.out.print("Nhap ten NXB: ");
					String tenNXB = sc.nextLine();
					
					System.out.print("Nhap so ban phat hanh: ");
					int soBanPhatHanh= sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 					
					
					System.out.print("Nhap ten tac gia: ");
					String tenTacGia = sc.nextLine();
					
					System.out.print("Nhap so trang: ");
					int soTrang = sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 
					
					TaiLieu sach = new Sach(maTL, tenNXB, soBanPhatHanh, tenTacGia, soTrang);
					ql.themTaiLieu(sach);
					
					break;
				}
				case "b":
				{
					System.out.print("Nhap ma tai lieu: ");
					String maTL = sc.nextLine();
					
					System.out.print("Nhap ten NXB: ");
					String tenNXB = sc.nextLine();
					
					System.out.print("Nhap so ban phat hanh: ");
					int soBanPhatHanh= sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 

					System.out.print("Nhap so phat hanh: ");
					int soPhatHanh= sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 
					
					System.out.print("Nhap thang phat hanh: ");
					int thangPhatHanh= sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 
					
					TaiLieu tapChi = new TapChi(maTL, tenNXB, soBanPhatHanh, soPhatHanh, thangPhatHanh);
					ql.themTaiLieu(tapChi);
					
					break;
				}
				case "c":
				{
					System.out.print("Nhap ma tai lieu: ");
					String maTL = sc.nextLine();
					
					System.out.print("Nhap ten NXB: ");
					String tenNXB = sc.nextLine();
					
					System.out.print("Nhap so ban phat hanh: ");
					int soBanPhatHanh= sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 

					System.out.print("Nhap ngay phat hanh: ");
					int ngay = sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 
					
					System.out.print("Nhap thang phat hanh: ");
					int thang = sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 
					
					System.out.print("Nhap nam phat hanh: ");
					int nam = sc.nextInt();
					sc.nextLine();  // xoa bo nho dem 
					
					TaiLieu bao = new Bao(maTL, tenNXB, soBanPhatHanh, new Date(ngay, thang, nam));
					ql.themTaiLieu(bao);
					
					break;
				}
				default:
				{
					System.out.println("Gia tri khong hop le");
					break;
				}
				}
				break;
			}
			case "2":
			{
				if(ql.getQuanLy().isEmpty())
				{
					System.out.println("Trong !");
					break;
				}
				System.out.print("Nhap ma tai lieu can xoa: ");
				String ma = sc.nextLine();	
				
				if(ql.xoaTaiLieuTheoMa(ma))
					System.out.println("Xoa thanh cong !!!");
				else
					System.out.println("Khong ton tai ma de xoa !");
				break;
				
			}
			case "3":
			{
				if(ql.getQuanLy().isEmpty())
					System.out.println("Trong !!!");
				else
					ql.hienThiThongTin();
				break;
			}
			case "4":
			{
				if(ql.getQuanLy().isEmpty())
				{
					System.out.println("Trong !");
					break;
				}
				System.out.println(" * Chon loai: ");
				System.out.println("      a. Sach");
				System.out.println("      b. Tap chi");
				System.out.println("      c. Bao");
	
				String loai =  sc.nextLine();
				switch(loai)
				{
				case "a": case "b": case "c":
				{
					ql.timKiemTheoLoai(loai);
					break;
				}
				default:
				{
					System.out.println("Gia tri khong hop le");
					break;
				}
				}
				break;
			}
			case "5":
				return;
			default:
			{
				System.out.println("Gia tri nhap khong hop le");
				break;
			}
			}

			//sc.close();
		}
		/*TaiLieu sach1 = new Sach("S1", "NXB Kim Dong", 100, "Nam Cao", 98);
		TaiLieu sach2 = new Sach("S2", "NXB Dong Nai", 120, "Ly Bach", 45);
		TaiLieu sach3 = new Sach("S3", "NXB Binh Duong", 110, "Luu Bi", 65);
		
		TaiLieu tapChi1 = new TapChi("TC1", "NXB TPHCM", 250, 123, 1);
		TaiLieu tapChi2 = new TapChi("TC2", "NXB Nam Dinh", 240, 165, 2);
		
		TaiLieu bao1 = new Bao("B1", "NXB Ha Noi", 300, new Date(6,12,2002));
		
		LinkedList<TaiLieu> ds1 = new LinkedList<TaiLieu>();
		QuanLyTaiLieu ql = new QuanLyTaiLieu(ds1);
		
		ql.themTaiLieu(sach1);
		ql.themTaiLieu(bao1);
		ql.themTaiLieu(sach2);
		ql.themTaiLieu(tapChi1);
		ql.themTaiLieu(sach3);
		ql.themTaiLieu(tapChi2);
		
		System.out.println("=========== Hien thi thong tin danh sach tai lieu: ");
		ql.hienThiThongTin();
		
		new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
		/*ql.xoaTaiLieuTheoMa("tc1");
		System.out.println();
		System.out.println("========== Xoa tai lieu co ma la \"tc1\": ");
		ql.hienThiThongTin();
	    System.out.println();
		System.out.println("=========== Kiem theo loai: ");
		ql.timKiemTheoLoai(3); */
		
		
	}
}
