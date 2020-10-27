type ParkingSystem struct {
    big_ int
    medium_ int
    small_ int
}


func Constructor(big int, medium int, small int) ParkingSystem {
    return ParkingSystem{big, medium, small}
}


func (this *ParkingSystem) AddCar(carType int) bool {
    if carType == 1 && this.big_ > 0 {
        this.big_--
        return true
    } else if carType == 2 && this.medium_ > 0 {
        this.medium_--
        return true
    } else if carType == 3 && this.small_ > 0 {
        this.small_--
        return true
    }
    return false
}


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * obj := Constructor(big, medium, small);
 * param_1 := obj.AddCar(carType);
 */