package mypack;
// Lớp ảo không có tạo Object từ nó (new instance object)
// Lớp ảo có các lớp con (subclass) được dẫn xuất từ nó
// từ khóa extends
public abstract class LopDaGiac {
	// biến thanh viên
	@SuppressWarnings("unused")
	private int socanh;
	protected double [] cdCanh;
	// constructor
	public LopDaGiac(int socanh) {
		// xac dinh da giac
		this.socanh=socanh;
		// tao mảng cdCanh
		cdCanh=new double[socanh];
	}
	// phương thức
	// pt ảo có tên và nội dung
	public void inThongTin() {
		System.out.println("<<LopDaGiac>>");
	}
	// pt thuần ảo chỉ có tên
	public abstract double tinhChuVi();
	public abstract double tinhDienTich();

}
