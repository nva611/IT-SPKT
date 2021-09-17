package mypack;

public class Room {
	private String category;
	private int price;
	
	
	
	/**
	 * @param category
	 * @param price
	 */
	public Room(String category, int price) {
		super();
		this.category = category;
		this.price = price;
	}



	public String getCategory() {
		return category;
	}
	public void setCategory(String category) {
		this.category = category;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}



	@Override
	public String toString() {
		return "loai: " + category + ", gia: " + price;
	}
	
	
}
