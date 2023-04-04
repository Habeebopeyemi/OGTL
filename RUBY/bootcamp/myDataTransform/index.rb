def my_data_transform(param_1)
    inter = []
    result = []
    index = 1
    param_1.split("\n").each {|data| inter.push(data.split(","))}
    # puts inter[1][5].to_i
    while(index < inter.length)
        age = inter[index][5].to_i
        hour = inter[index][9].split(" ")[1].split(":")[0].to_i
        if (age < 21)
            inter[index][5] = "1->20"
            # puts "less than 21"
        end
        if (age > 20) && (age < 41)
            inter[index][5] = "21->40"
            # puts "less than 41"
        end
        if (age > 41) && (age < 66)
            inter[index][5] = "41->65"
            # puts "less than 66"
        end
        if (age > 65) && (age < 100)
            inter[index][5] = "66->99"
            # puts "less than 100"
        end
        #converting the time to period of the day
        if (hour < 12)
            inter[index][9] = "morning"
            # puts "less than 21"
        end
        if (hour >= 12) && (hour < 18)
            inter[index][9] = "afternoon"
            # puts "less than 41"
        end
        if (hour >= 18) && (hour < 24)
            inter[index][9] = "evening"
            # puts "less than 66"
        end
        inter[index].join(",")
        index += 1
    end

    inter.each {|data| result.push(data.join(" "))}
    return result
end

p my_data_transform("Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order At\nMale,Carl,Wilderman,carl,wilderman_carl@yahoo.com,29,Seattle,Safari iPhone,2,2020-03-06 16:37:56\nMale,Marvin,Lind,marvin,marvin_lind@hotmail.com,77,Detroit,Chrome Android,2,2020-03-02 13:55:51\nFemale,Shanelle,Marquardt,shanelle,marquardt.shanelle@hotmail.com,21,Las Vegas,Chrome,1,2020-03-05 17:53:05\nFemale,Lavonne,Romaguera,lavonne,romaguera.lavonne@yahoo.com,81,Seattle,Chrome,2,2020-03-04 10:33:53\nMale,Derick,McLaughlin,derick,mclaughlin.derick@hotmail.com,47,Chicago,Chrome Android,1,2020-03-05 15:19:48\n")
