package mypack;

public class RoomA extends Room{

	/**
	 * @param category
	 * @param price
	 */
	public RoomA() {
		super("A", 500);
	}

	@Override
	public String toString() {
		return "Room " + super.toString();
	}
	
}
