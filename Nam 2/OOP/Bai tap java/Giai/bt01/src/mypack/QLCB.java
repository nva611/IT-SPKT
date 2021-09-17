package mypack;
import java.util.ArrayList;
import java.util.List;

public class QLCB {
	public List<CanBo> listCanBo;
	
	public QLCB()
	{
		this.listCanBo = new ArrayList<>();
	}
	public void themCanBo(CanBo cb)
	{
		this.listCanBo.add(cb);
	}
	public List<CanBo> timKiemTen(String ten)
	{
		int i;
		List<CanBo> danhSachKetQua = new ArrayList<CanBo>();
		for(i=0; i<this.listCanBo.size(); i++)
		{
			if(this.listCanBo.get(i).getHoVaTen().equalsIgnoreCase(ten)==true)
				danhSachKetQua.add(listCanBo.get(i));
		}
		// for each
		for(CanBo elm : danhSachKetQua)
		{
			System.out.println(elm);
		}
		return danhSachKetQua;
	}
	@Override
	public String toString()
	{
		String kq = "List\n";
		for(CanBo i : this.listCanBo)
			kq = kq + i.toString() + "\n";
		return kq;
	}
}
