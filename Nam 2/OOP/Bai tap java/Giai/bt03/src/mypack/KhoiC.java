package mypack;

public class KhoiC extends ThiSinh{
	private double diemVan;
	private double diemSu;
	private double diemDia;
	
	
	public KhoiC()
	{
		super();
	}
	/**
	 * @param soBaoDanh
	 * @param hoTen
	 * @param diaChi
	 * @param mucUuTien
	 * @param diemVan
	 * @param diemSu
	 * @param diemDia
	 */
	public KhoiC(String soBaoDanh, String hoTen, String diaChi, int mucUuTien, double diemVan, double diemSu, double diemDia) {
		super(soBaoDanh, hoTen, diaChi, mucUuTien);
		this.diemVan = diemVan;
		this.diemSu = diemSu;
		this.diemDia = diemDia;
	}
	
	
	
	public double getDiemVan() {
		return diemVan;
	}
	public void setDiemVan(double diemVan) {
		this.diemVan = diemVan;
	}
	public double getDiemSu() {
		return diemSu;
	}
	public void setDiemSu(double diemSu) {
		this.diemSu = diemSu;
	}
	public double getDiemDia() {
		return diemDia;
	}
	public void setDiemDia(double diemDia) {
		this.diemDia = diemDia;
	}
	
	
	@Override 
	public String toString()
	{
		return "TS KHOI C " + super.toString() + ", Van: " + this.getDiemVan() + ", Su: " + this.getDiemSu() + ", Dia: " + this.getDiemDia(); 
	}
}
