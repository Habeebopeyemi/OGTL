require 'pry-byebug'
require 'csv'

class MySelectQuery
    attr_accessor :content, :column_name, :criteria

    def initialize(content)
        @content = content
        @data = CSV.parse(content, headers:true)
        binding.pry
    end

    def where(column_name, criteria)
        @column_name = column_name
        @criteria = criteria

        result = []
        @data.filter do |row|
            if row[column_name] == criteria
                result << row.to_hash.values.join(',')
            end
        end
        result
        binding.pry
    end

end

=begin
=end
def _main()
    content = "name,year_start,year_end,position,height,weight,birth_date,college\nAlaa Abdelnaby,1991,1995,F-C,6-10,240,'June 24, 1968',Duke University\nZaid Abdul-Aziz,1969,1978,C-F,6-9,235,'April 7, 1946',Iowa State University\nKareem Abdul-Jabbar,1970,1989,C,7-2,225,'April 16, 1947','University of California, Los Angeles\nMahmoud Abdul-Rauf,1991,2001,G,6-1,162,'March 9, 1969',Louisiana State University\n"
    instance = MySelectQuery.new(content)
    p instance.where("name", "Kareem Abdul-Jabbar")
end

_main()