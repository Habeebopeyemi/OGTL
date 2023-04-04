require 'sqlite3'

class User
    attr_accessor :id, :firstname, :lastname, :age, :password , :email
    def initialize (id=0, firstname, lastname, age, password , email)
        @id=id
        @firstname=firstname
        @lastname=lastname
        @age=age 
        @password=password 
        @email=email
    end

    def self.connect()
        begin
            @database_data = SQLite3::Database.open 'db.sql'
            @database_data = SQLite3::Database.new 'db.sql' if !@database_data
            @database_data.results_as_hash = true
            @database_data.execute "CREATE TABLE IF NOT EXISTS users(id INTEGER PRIMARY KEY, firstname STRING, lastname STRING, age INTEGER, password STRING, email STRING)"
            return @database_data
        rescue SQLite3::Exception => err
            p "Error Ocurred: #{err}"
        end
    end 

    def self.create(user_info)
        @database_data = self.connect
        @database_data.execute "INSERT INTO users(firstname, lastname, age, password, email) VALUES(?,?,?,?,?)", user_info[:firstname], user_info[:lastname], user_info[:age], user_info[:password], user_info[:email]
        created_user=User.new(user_info[:firstname], user_info[:lastname], user_info[:age], '', user_info[:email])
        created_user.id = @database_data.last_insert_row_id
        @database_data.close
        return created_user
    end 

    def self.find(user_id)
        @database_data = self.connect
        retrieved_user = @database_data.execute "SELECT * FROM users WHERE id = ?", user_id
        user_hash=User.new(retrieved_user[0]["id"], retrieved_user[0]["firstname"], retrieved_user[0]["lastname"], retrieved_user[0]["age"], retrieved_user[0]["password"], retrieved_user[0]["email"])
        @database_data.close
        return user_hash
    end
     
    def self.all()
        @database_data = self.connect()
        all_retrieved_users = @database_data.execute "SELECT * FROM users"
        @database_data.close
        return all_retrieved_users
    end

    def self.update(user_id, attribute, value)
        @database_data = self.connect
        @database_data.execute "UPDATE users SET #{attribute} = ? WHERE id = ? ", value, user_id
        updated_user = @database_data.execute "SELECT * FROM users where id = ? ", user_id
        @database_data.close
        return updated_user
    end

    def self.destroy(user_id)
        @database_data=self.connect()
        deleted_user=@database_data.execute "SELECT * FROM users WHERE id=?", user_id
        @database_data.execute "DELETE FROM users WHERE id=?", user_id
        @database_data.close
        return User.all 
    end 

    def self.verify_user(email, password)
        @database_data = self.connect
        verified_user = @database_data.execute "SELECT * FROM users WHERE email = ? AND password = ?", email, password
        @database_data.close
        return verified_user
    end
end 