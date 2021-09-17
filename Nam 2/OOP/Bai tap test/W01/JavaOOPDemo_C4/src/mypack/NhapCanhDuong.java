package mypack;

public class NhapCanhDuong extends Exception {
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public NhapCanhDuong(String thongbao) {
		// TODO Auto-generated constructor stub
		super(thongbao);
		System.out.println("Do dai canh la so duong!!!");
	}
}
