require "sinatra"
require "json"
require "./models.rb"

set :bind, "0.0.0.0"
set :port, 8080
enable :sessions

get "/" do
    @all_users = User.all()
    erb :index
end

get "/users" do
    status 200
    User.all.map{|data| data.slice("firstname","lastname","age","email")}.to_json
    # erb :post_page
end

post "/users" do
    if params[:firstname] != nil
        created_user = User.create(params)
        new_user = User.find(created_user.id)
        formatted_new_user = {id: new_user.id, firstname: new_user.firstname, lastname: new_user.lastname, age: new_user.age, email: new_user.email}.to_json
        # p formatted_new_user
    else
        verified_user = User.verify_user(params[:password],params[:email])
        unless verified_user[0].empty?
            status 200
            session[:user_id] = verified_user[0]["id"]
        else
            status 401
        end
        verified_user[0].to_json
    end
  
end

post "/sign_in" do
    verified_user = User.verify_user(params[:email], params[:password])
    if !verified_user.empty?
        status 200
        session[:user_id] = verified_user[0]["id"]
    else
        status 401
    end
    verified_user[0].to_json
end

put "/users" do
    User.update(session[:user_id], "password",params[:password])
    retrieved_user = User.find(session[:user_id])
    status 200
    user_info = {id: retrieved_user.id, firstname: retrieved_user.firstname, lastname: retrieved_user.lastname, age: retrieved_user.age, email: retrieved_user.email}.to_json
end

delete "/sign_out" do
    session[:user_id] = nil if session[:user_id]
    status 204
end

delete "/users" do 
    unless session[:user_id].empty?
        User.destroy(session[:user_id])
    end
    status 204
end