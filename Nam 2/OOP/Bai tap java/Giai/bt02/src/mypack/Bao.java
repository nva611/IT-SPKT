package mypack;

public class Bao extends TaiLieu{
	private Date ngayPhatHanh;
	
	public Bao()
	{
		super();
	}

	

	/**
	 * @param maTaiLieu
	 * @param tenNXB
	 * @param soBanPhatHanh
	 * @param ngayPhatHanh
	 */
	public Bao(String maTaiLieu, String tenNXB, int soBanPhatHanh, Date ngayPhatHanh) {
		super(maTaiLieu, tenNXB, soBanPhatHanh);
		this.ngayPhatHanh = ngayPhatHanh;
	}



	public Date getNgayPhatHanh() {
		return ngayPhatHanh;
	}

	public void setNgayPhatHanh(Date ngayPhatHanh) {
		this.ngayPhatHanh = ngayPhatHanh;
	}
	
	@Override
	public String toString()
	{
		return super.toString() + ", ngay phat hanh = " + this.ngayPhatHanh;
	}
	
}
