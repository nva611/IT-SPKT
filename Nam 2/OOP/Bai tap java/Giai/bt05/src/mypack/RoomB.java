package mypack;

public class RoomB extends Room{

	/**
	 * @param category
	 * @param price
	 */
	public RoomB() {
		super("B", 300);
	}

	@Override
	public String toString() {
		return "Room " + super.toString();
	}
	
}
	