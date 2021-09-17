package mypack;

public class ThiSinh {
	
	private String soBaoDanh;
	private String hoTen;
	private String diaChi;
	private int mucUuTien;
	
	
	public ThiSinh()
	{
		
	}
	/**
	 * @param soBaoDanh
	 * @param hoTen
	 * @param diaChi
	 * @param mucUuTien
	 */
	public ThiSinh(String soBaoDanh, String hoTen, String diaChi, int mucUuTien) {
		super();
		this.soBaoDanh = soBaoDanh;
		this.hoTen = hoTen;
		this.diaChi = diaChi;
		this.mucUuTien = mucUuTien;
	}
	
	
	
	public String getSoBaoDanh() {
		return soBaoDanh;
	}
	public void setSoBaoDanh(String soBaoDanh) {
		this.soBaoDanh = soBaoDanh;
	}
	public String getHoTen() {
		return hoTen;
	}
	public void setHoTen(String hoTen) {
		this.hoTen = hoTen;
	}
	public String getDiaChi() {
		return diaChi;
	}
	public void setDiaChi(String diaChi) {
		this.diaChi = diaChi;
	}
	public int getMucUuTien() {
		return mucUuTien;
	}
	public void setMucUuTien(int mucUuTien) {
		this.mucUuTien = mucUuTien;
	}
	
	@Override
	public String toString()
	{
		return "SBD: " + this.getSoBaoDanh() + ", Ho va ten: " + this.getHoTen() + ", Dia chi: " + this.getDiaChi() + ", Muc uu tien: " + this.getMucUuTien();
	}
}
