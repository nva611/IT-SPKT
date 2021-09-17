package mypack;

public class TestBt1 {

	public static void main(String[] args) {
		CongNhan cn1 = new CongNhan("Cn1", 18, "nam", "Binh Duong", 3);
		CongNhan cn2 = new CongNhan("Cn2", 20, "nu", "Ha Noi", 1);
		
		
		KySu ks1 = new KySu("Ks1", 19, "nam", "Binh Dinh", "Xay dung");
		KySu ks2 = new KySu("Ks2", 35, "nu", "Binh Dinh", "CNTT");
		
		QLCB list = new QLCB();
		
		list.themCanBo(ks2);
		list.themCanBo(cn2);
		list.themCanBo(ks1);
		list.themCanBo(cn1);
		
		System.out.println(list);
		
		System.out.println(cn1.getHoVaTen() + " " +  cn1.getTuoi());
		
		System.out.println(cn1);
		
		
		list.timKiemTen("Ks1");

	}

}
