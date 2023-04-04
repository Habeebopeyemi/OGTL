require 'sinatra'

get '/admin.example.com', :host_name => /^admin\./ do
  "Admin Area, Access denied!"
end

get '/www.example.com' do
    "Welcome to the public area!"
end
# get '/' do
#     'Hello world!'
# end

get '/home_page' do
    'welcome to home page'
end

set(:probability){|value| condition {rand <= value}}
get '/win_a_car', :probability => 0.5 do 
    "You won!"
end

get '/win_a_car' do
    'Sorry, you lost.'
end

# get '/feed', :provides => 'html' do
#   haml :index
# end
# get '/feed', :provides => ['rss', 'atom', 'xml'] do
#   builder :feed
# end