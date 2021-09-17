package mypack;

public class CanBo {
	
	private String hoVaTen;
	private int tuoi;
	private String gioiTinh;
	private String diaChi;
	
	

	/**
	 * @param hoVaTen
	 * @param tuoi
	 * @param gioiTinh
	 * @param diaChi
	 */
	public CanBo(String hoVaTen, int tuoi, String gioiTinh, String diaChi) {
		super();
		this.hoVaTen = hoVaTen;
		this.tuoi = tuoi;
		this.gioiTinh = gioiTinh;
		this.diaChi = diaChi;
	}

	public String getHoVaTen() {
		return hoVaTen;
	}

	public void setHoVaTen(String hoVaTen) {
		this.hoVaTen = hoVaTen;
	}

	public int getTuoi() {
		return tuoi;
	}

	public void setTuoi(int tuoi) {
		this.tuoi = tuoi;
	}

	public String getGioiTinh() {
		return gioiTinh;
	}

	public void setGioiTinh(String gioiTinh) {
		this.gioiTinh = gioiTinh;
	}

	public String getDiaChi() {
		return diaChi;
	}

	public void setDiaChi(String diaChi) {
		this.diaChi = diaChi;
	}
	
	
	
	
}
