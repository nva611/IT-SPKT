package mypack;
import java.util.InputMismatchException;
import java.util.Scanner;
//Lớp dẫn xuất từ LopDaGiac
//LopDaGiac = super class
//LopTamGiac = subclass
public class LopTamGiac extends LopDaGiac {
	private static Scanner sc;
	// thừa kế hàm tạo của LopDaGiac
	public LopTamGiac() {
		super(3);
		boolean f=true;
		// Nhap 3 canh tam giac
		sc=new Scanner(System.in);
		Nhap3CanhTamGiac:
			try{
				do{
					try{
						System.out.print("Nhap do dai canh a: ");
						cdCanh[0]=sc.nextDouble();
						if(cdCanh[0]<=0)
							throw new NhapCanhDuong("Phai nhap canh la so duong!!!");
						f=false;
					}
					catch(InputMismatchException e){
						System.out.println("Nhap canh la so !!!");
						sc.nextLine();
					}
					catch(NhapCanhDuong e){
						System.out.println("Nhap canh la so >0 !!!");
					}
				}while(f);
				System.out.println();
				f=true;
				do{
					try{
						System.out.print("Nhap do dai canh b: ");
						cdCanh[1]=sc.nextDouble();
						if(cdCanh[1]<=0)
							throw new NhapCanhDuong("Phai nhap canh la so duong!!!");
						f=false;
					}
					catch(InputMismatchException e){
						System.out.println("Nhap canh la so !!!");
						sc.nextLine();
					}
					catch(NhapCanhDuong e){
						System.out.println("Nhap canh la so >0 !!!");
					}
				}while(f);
				System.out.println();
				f=true;
				do{
					try{
						System.out.print("Nhap do dai canh c: ");
						cdCanh[2]=sc.nextDouble();
						if(cdCanh[2]<=0)
							throw new NhapCanhDuong("Phai nhap canh la so duong!!!");
						f=false;
					}
					catch(InputMismatchException e){
						System.out.println("Nhap canh la so !!!");
						sc.nextLine();
					}
					catch(NhapCanhDuong e){
						System.out.println("Nhap canh la so >0 !!!");
					}
				}while(f);
				if(cdCanh[0]+cdCanh[1]<=cdCanh[2]||
						cdCanh[0]+cdCanh[2]<=cdCanh[1]||
						cdCanh[1]+cdCanh[2]<=cdCanh[0])
					throw new NhapCanhTamGiac("Phai nhap dung 3 canh cua tam giac!!!");
			}
		catch(NhapCanhTamGiac e){
			System.out.println("Loi: "+e.getMessage());
			break Nhap3CanhTamGiac;
		}
	}

	@Override
	public double tinhChuVi() {
		// TODO Auto-generated method stub
		return cdCanh[0]+cdCanh[1]+cdCanh[2];
	}

	@Override
	public double tinhDienTich() {
		// TODO Auto-generated method stub
		double p=(cdCanh[0]+cdCanh[1]+cdCanh[2])/2;
		return Math.sqrt(p*(p-cdCanh[0])*(p-cdCanh[1])*(p-cdCanh[2]));
	}
	@Override
	public void inThongTin() {
		// TODO Auto-generated method stub
		super.inThongTin();
		System.out.println("<<LopTamGiac>>==><<LopDaGiac>>");
		System.out.println("Canh a : "+cdCanh[0]);
		System.out.println("Canh b : "+cdCanh[1]);
		System.out.println("Canh c : "+cdCanh[2]);
		System.out.println("Chu vi hinh tam giac: "+tinhChuVi());
		System.out.println("Dien tich hinh tam giac: "+tinhDienTich());
	}

}
