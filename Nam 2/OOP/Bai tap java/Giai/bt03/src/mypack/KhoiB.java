package mypack;

public class KhoiB extends ThiSinh{
	private double diemToan;
	private double diemHoa;
	private double diemSinh;
	
	
	
	
	public KhoiB() {
		super();
	}
	/**
	 * @param soBaoDanh
	 * @param hoTen
	 * @param diaChi
	 * @param mucUuTien
	 * @param diemToan
	 * @param diemHoa
	 * @param diemSinh
	 */
	public KhoiB(String soBaoDanh, String hoTen, String diaChi, int mucUuTien, double diemToan, double diemHoa, double diemSinh) {
		super(soBaoDanh, hoTen, diaChi, mucUuTien);
		this.diemToan = diemToan;
		this.diemHoa = diemHoa;
		this.diemSinh = diemSinh;
	}




	public double getDiemToan() {
		return diemToan;
	}
	public void setDiemToan(double diemToan) {
		this.diemToan = diemToan;
	}
	public double getDiemHoa() {
		return diemHoa;
	}
	public void setDiemHoa(double diemHoa) {
		this.diemHoa = diemHoa;
	}
	public double getDiemSinh() {
		return diemSinh;
	}
	public void setDiemSinh(double diemSinh) {
		this.diemSinh = diemSinh;
	}
	
	@Override 
	public String toString()
	{
		return "TS KHOI B " + super.toString() + ", Toan: " + this.getDiemToan() + ", Hoa: " + this.getDiemHoa() + ", Sinh: " + this.getDiemSinh(); 
	}
	
}
