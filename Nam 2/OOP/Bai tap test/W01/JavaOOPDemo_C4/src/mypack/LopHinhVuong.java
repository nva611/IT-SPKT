package mypack;
import java.util.Scanner;
// Lớp dẫn xuất từ LopDaGiac
// LopDaGiac = super class
// LopHinhVuong = subclass

public class LopHinhVuong extends LopDaGiac {
	private static Scanner sc;
	// thừa kế hàm tạo của LopDaGiac
	public LopHinhVuong() {
		super(1);
		// nhập chiều dài cạnh
		sc=new Scanner(System.in);
		System.out.print("Nhap chieu dai canh hinh vuong :");
		cdCanh[0]=sc.nextDouble();		
	}
	// ĐA HÌNH = Viết lại các phương thức thuần ảo: bắt buộc
	@Override
	public double tinhChuVi() {
		// TODO Auto-generated method stub
		return cdCanh[0]*4;
	}

	@Override
	public double tinhDienTich() {
		// TODO Auto-generated method stub
		return cdCanh[0]*cdCanh[0];
	}
	// phương thức ảo
	@Override
	public void inThongTin() {
		// GỌI inThongTin() từ LopDaGiac = Thừa kế
		super.inThongTin();
		System.out.println("<<LopHinhVuong>>==><<LopDaGiac>>");
		System.out.println("Canh hinh vuong : "+cdCanh[0]);
		System.out.println("Chu vi hinh vuong: "+tinhChuVi());
		System.out.println("Dien tich hinh vuong: "+tinhDienTich());
	}

}
