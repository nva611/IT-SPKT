package mypack;

public class KhoiA extends ThiSinh{
	private double diemToan;
	private double diemLy;
	private double diemHoa;
	
	
	public KhoiA() {
		super();
	}
	/**
	 * @param soBaoDanh
	 * @param hoTen
	 * @param diaChi
	 * @param mucUuTien
	 * @param diemToan
	 * @param diemLy
	 * @param diemHoa
	 */
	public KhoiA(String soBaoDanh, String hoTen, String diaChi, int mucUuTien, double diemToan, double diemLy, double diemHoa) {
		super(soBaoDanh, hoTen, diaChi, mucUuTien);
		this.diemToan = diemToan;
		this.diemLy = diemLy;
		this.diemHoa = diemHoa;
	}



	public double getDiemToan() {
		return diemToan;
	}
	public void setDiemToan(double diemToan) {
		this.diemToan = diemToan;
	}
	public double getDiemLy() {
		return diemLy;
	}
	public void setDiemLy(double diemLy) {
		this.diemLy = diemLy;
	}
	public double getDiemHoa() {
		return diemHoa;
	}
	public void setDiemHoa(double diemHoa) {
		this.diemHoa = diemHoa;
	}
	
	
	@Override 
	public String toString()
	{
		return "TS KHOI A " + super.toString() + ", Toan: " + this.getDiemToan() + ", Ly: " + this.getDiemLy() + ", Hoa: " + this.getDiemHoa(); 
	}
}
