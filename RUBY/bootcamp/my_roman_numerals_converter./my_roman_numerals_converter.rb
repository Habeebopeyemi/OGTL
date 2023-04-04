# function convertToRoman(num) {
#   if(isNaN(num) || num < 1) return;
#   const map = {
#     M: 1000,CM: 900,D: 500,CD: 400,C: 100,XC: 90,L: 50,XL: 40,X: 10,IX: 9,V: 5,IV: 4,I: 1
# };
# let result = ""
# for(let key in map){
#   let repeatCounter = Math.floor(num/map[key])
#   if(repeatCounter !== 0){
#     result += key.repeat(repeatCounter)
#   }
#   num %= map[key]
#   if(num === 0) return result

# }
#  return result;
# }

# // convertToRoman(36);
def my_roman_numerals_converter(dec_num)
    __deb_roman_to_dec_map = {
        "M"=>1000,
        "CM"=>900,
        "D"=>500,
        "CD"=>400,
        "C"=>100,
        "XC"=>90,
        "L"=>50,
        "XL"=>40,
        "X"=>10,
        "IX"=>9,
        "V"=>5,
        "IV"=>4,
        "I"=>1
    }
    return if dec_num < 1
    result = ""

   __deb_roman_to_dec_map.each do |key, value|
        while dec_num >= value
            result += key
            dec_num -= value
        end
    end

    return result
end

p my_roman_numerals_converter(1998)