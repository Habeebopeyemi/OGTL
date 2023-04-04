# $data_dict = {}
# $val_arr = []

# def gender_vals(data)
#     for i in data[0].split(',') do
#         if i != 'FirstName' && i != 'LastName' && i != 'UserName'
#             $data_dict[i] = {}
#         end
#     end
#     data_values = data.slice(1, data.length+1)
#     for values in data_values do
#         $val_arr.append(values.split(','))
#     end
#     gender = []
#     for val in $val_arr do
#         gender.append(val[0])
#     end
#     # r = [$val_arr.select{|val|}.append(val)]
#     $data_dict["Gender"]["Male"] = gender.count("Male")
#     $data_dict["Gender"]["Female"] = gender.count("Female")
#     return $data_dict
# end

# def email_vals
#     emails = []
#     for val in $val_arr do
#         emails.append(val[4])
#     end
#     $data_dict["Email"]["yahoo"] = emails.count("yahoo.com")
#     $data_dict["Email"]["hotmail"] = emails.count("hotmail.com")
#     return
# end

# def age_vals
#     ages = []
#     for val in $val_arr do
#         ages.append(val[5])
#     end
#     $data_dict["Age"]["21->40"] = ages.count("21->40")
#     $data_dict["Age"]["41->65"] = ages.count("41->65")
#     $data_dict["Age"]["66->99"] = ages.count("66->99")
#     return
# end

# def city_vals
#     cities = []
#     for val in $val_arr do
#         cities.append(val[6])
#     end
#     $data_dict["City"]["Seattle"] = cities.count("Seattle")
#     $data_dict["City"]["Detroit"] = cities.count("Detroit")
#     $data_dict["City"]["Las Vegas"] = cities.count("Las Vegas")
#     $data_dict["City"]["Chicago"] = cities.count("Chicago")
#     return
# end

# def device_vals
#     devices = []
#     device_set = []
#     for val in $val_arr do
#         devices.append(val[7])
#     end
#     device_set = devices.uniq
#     for i in device_set do
#         $data_dict["Device"][i] = devices.count(i)
#     end
# end

# def coffee_vals
#     coffee = []
#     coffee_set = []
#     for val in $val_arr do
#         coffee.append(val[8])
#     end
#     coffee_set = coffee.uniq
#     for i in coffee_set do
#         $data_dict["Coffee Quantity"][i] = coffee.count(i)
#     end
# end

# def order_vals
#     order = []
#     order_set = []
#     for val in $val_arr do
#         order.append(val[9])
#     end
#     order_set = order.uniq
#     for i in order_set do
#         $data_dict["Order At"][i] = order.count(i)
#     end
# end

# def my_data_process(data)
#     gender_vals data
#     email_vals
#     age_vals
#     city_vals
#     device_vals
#     coffee_vals
#     order_vals
#     return $data_dict
# end

# def run
#     output= ["Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order At", "Male,Carl,Wilderman,carl,yahoo.com,21->40,Seattle,Safari iPhone,2,afternoon", "Male,Marvin,Lind,marvin,hotmail.com,66->99,Detroit,Chrome Android,2,afternoon", "Female,Shanelle,Marquardt,shanelle,hotmail.com,21->40,Las Vegas,Chrome,1,afternoon", "Female,Lavonne,Romaguera,lavonne,yahoo.com,66->99,Seattle,Chrome,2,morning", "Male,Derick,McLaughlin,derick,hotmail.com,41->65,Chicago,Chrome Android,1,afternoon"]
#     puts my_data_process output
# end

# run
# #arr2D = Array.new(2){Array.new(3)}
# a= Hash.new
# a[[1,2]]= 23
# a[[5,6]]= 42
# puts a
require 'json'
def my_data_process(param_1)
    inter = [] #a 2D representation for easy filtering
    filtered = [] #a @D array without firstName, lastName,Username and Coffee Quantity
    pure_data = []
    gender = []
    email = []
    age = []
    city = []
    device = []
    order = []

    param_1_clone = param_1.clone

    # splitting into array for easy filtering
    param_1_clone.each do |el|
        inter.push(el.split(","))
    end

    # filtering process
    for data in inter
        clean = []
        data.each_with_index do |el, index|
            if(index != 1 && index != 2 && index != 3 && index != 8)
                clean.push(el)
            end
        end
        filtered.push(clean)
    end

    # slicing out column names
    pure_data.concat(filtered.slice(1, filtered.length + 1))
    
    # separating data into different unit
    for data in pure_data
        data.each_with_index do |el, index|
            if(index == 0)
                gender.push(el)
            elsif(index == 1)
                email.push(el)
            elsif(index == 2)
                age.push(el)
            elsif(index == 3)
                city.push(el)
            elsif(index == 4)
                device.push(el)
            else
                order.push(el)
            end
                
        end
    end

    # getting counts of each category
    gender_male_count = gender.count("Male")
    gender_female_count = gender.count("Female")

    yahoo_domain_count = email.count("yahoo.com")
    hotmail_domain_count = email.count("hotmail.com")

    age_21_40_count = age.count("21->40")
    age_41_65_count = age.count("41->65")
    age_66_99_count = age.count("66->99")

    city_seattle_count = city.count("Seattle")
    city_detroit_count = city.count("Detroit")
    city_vegas_count = city.count("Las Vegas")
    city_chicago_count = city.count("Chicago")

    safari_device_count = device.count("Safari iPhone")
    android_device_count = device.count("Chrome Android")
    chrome_device_count = device.count("Chrome")

    morning_order_count = order.count("morning")
    afternoon_order_count = order.count("afternoon")

    result = {
        "Gender":{"Male": gender_male_count, "Female": gender_female_count},
        "Email": {"yahoo.com": yahoo_domain_count, "hotmail.com": hotmail_domain_count},
        "Age":{"21->40": age_21_40_count, "66->99": age_66_99_count, "41->65": age_41_65_count},
        "City":{"Seattle": city_seattle_count, "Detroit": city_detroit_count, "Las Vegas": city_vegas_count, "Chicago": city_chicago_count},
        "Device": {"Safari": safari_device_count, "Chrome Android": android_device_count, "Chrome": chrome_device_count},
        "Order At": {"afternoon": afternoon_order_count, "morning": morning_order_count}
    }

    return result.to_json
end

puts my_data_process(["Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order At", 
                "Male,Carl,Wilderman,carl,yahoo.com,21->40,Seattle,Safari iPhone,2,afternoon",
                 "Male,Marvin,Lind,marvin,hotmail.com,66->99,Detroit,Chrome Android,2,afternoon",
                  "Female,Shanelle,Marquardt,shanelle,hotmail.com,21->40,Las Vegas,Chrome,1,afternoon",
                   "Female,Lavonne,Romaguera,lavonne,yahoo.com,66->99,Seattle,Chrome,2,morning",
                    "Male,Derick,McLaughlin,derick,hotmail.com,41->65,Chicago,Chrome Android,1,afternoon"])