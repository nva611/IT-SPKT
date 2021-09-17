package mypack;
import java.util.Scanner;
//Lớp dẫn xuất từ LopDaGiac
//LopDaGiac = super class
//LopHinhChuNhat = subclass
public class LopHinhChuNhat extends LopDaGiac {
	private static Scanner sc;
	// thừa kế hàm tạo của LopDaGiac
	public LopHinhChuNhat() {
		super(2);
		// Nhap chieu dai , chieu rong
		sc=new Scanner(System.in);
		System.out.print("Nhap chieu dai hinh chu nhat :");
		cdCanh[0]=sc.nextDouble();	
		System.out.print("Nhap chieu rong hinh chu nhat :");
		cdCanh[1]=sc.nextDouble();	
	}

	@Override
	public double tinhChuVi() {
		// TODO Auto-generated method stub
		return (cdCanh[0]+cdCanh[1])*2;
	}

	@Override
	public double tinhDienTich() {
		// TODO Auto-generated method stub
		return cdCanh[0]*cdCanh[1];
	}
	//
	@Override
	public void inThongTin() {
		// TODO Auto-generated method stub
		super.inThongTin();
		System.out.println("<<LopHinhChuNhat>>==><<LopDaGiac>>");
		System.out.println("Chieu dai hinh chu nhat : "+cdCanh[0]);
		System.out.println("Chieu rong hinh chu nhat : "+cdCanh[1]);
		System.out.println("Chu vi hinh chu nhat: "+tinhChuVi());
		System.out.println("Dien tich hinh chu nhat: "+tinhDienTich());
	}

}
