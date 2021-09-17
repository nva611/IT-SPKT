package mypack;

public class Sach extends TaiLieu{
	private String tenTacGia;
	private int soTrang;
	
	
	public Sach() {
		super();
	}

	/**
	 * @param maTaiLieu
	 * @param tenNXB
	 * @param soBanPhatHanh
	 * @param tenTacGia
	 * @param soTrang
	 */
	public Sach(String maTaiLieu, String tenNXB, int soBanPhatHanh, String tenTacGia, int soTrang) {
		super(maTaiLieu, tenNXB, soBanPhatHanh);
		this.tenTacGia = tenTacGia;
		this.soTrang = soTrang;
	}

	public String getTenTacGia() {
		return tenTacGia;
	}

	public void setTenTacGia(String tenTacGia) {
		this.tenTacGia = tenTacGia;
	}

	public int getSoTrang() {
		return soTrang;
	}

	public void setSoTrang(int soTrang) {
		this.soTrang = soTrang;
	}
	
	@Override
	public String toString()
	{
		return super.toString() + ", ten tac gia = " + this.tenTacGia + ", so trang = " + this.soTrang;
	}
}
