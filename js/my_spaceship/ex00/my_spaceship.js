function my_spaceship(path){
    var x_coord, y_coord, final_direction, angle;
    x_coord = 0;
    y_coord = 0;
    final_direction = "up";
    angle = 0;
    // declaring a function to return the corressponding direction based on angle
    function find_direction(ang_deg){
        if(ang_deg === 0 || ang_deg === 360 || ang_deg === -360){
            return "up";
        }else if(ang_deg === 90 || ang_deg === -270){
            return "right";
        }else if(ang_deg === 180 || ang_deg === -180){
            return "down";
        }else{
            return "left"
        }
    }
    // writing a function to get the coordinate value
    function get_coordinate(direction){
            switch(direction){
                case "up":
                    y_coord--;
                    break;
                case "down":
                    y_coord++;
                    break;
                case "right":
                    x_coord++;
                    break;
                case "left":
                    x_coord--;
                    break;
                default:
                    return "unrecognized direction";
            }
    }
// finding and returning whole coordinate and direction
    if(path === ""){
        return "{x: "+x_coord+", y: "+y_coord+", direction: "+"'"+final_direction+"'}";
    }else{
        path.split('').forEach(el => {
            switch(el){
                case "R":
                    angle += 90;
                    break;
                case "L":
                    angle -= 90;
                    break;
                case "A":
                    get_coordinate(find_direction(angle));
                    break;
                default:
                    return "Danger!!! unrecognized direction instruction";
            }
        })
        final_direction = find_direction(angle);
        return "{x: "+x_coord+", y: "+y_coord+", direction: "+"'"+final_direction+"'}";
    }
}