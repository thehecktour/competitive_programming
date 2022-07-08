import requests

url = "https://api-nba-v1.p.rapidapi.com/seasons"

headers = {
	"X-RapidAPI-Key": "SIGN-UP-FOR-KEY",
	"X-RapidAPI-Host": "api-nba-v1.p.rapidapi.com"
}

response = requests.request("GET", url, headers=headers)

print(response.text)