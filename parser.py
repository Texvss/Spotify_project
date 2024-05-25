import requests
from bs4 import BeautifulSoup
import argparse

def genius_parser(artist_name, song_name):
    artist_name = artist_name.capitalize()
    song_name = song_name.replace(" ", "-")
    url = (f'https://genius.com/{artist_name}-{song_name}-lyrics')
    response = requests.get(url)
    soup = BeautifulSoup(response.text, "lxml")
    song_text = soup.find("div", class_="Lyrics__Container-sc-1ynbvzw-1 kUgSbL").get_text(strip=True, separator='\n')
    # song_text = song_text.split("<br")
    # song_text  = list(map(lambda x: x.text, song_text.split("<br")))

    return song_text

parser = argparse.ArgumentParser(
                    prog='genius_parser',
                    description='Programme parse lyrics from genius.com',
                    epilog='')

parser.add_argument('artist_name', help='Artist name')
parser.add_argument("song_name", help="Song name")


args = parser.parse_args()
# print(args)
# parser.add_argument('parser.py')           # positional argument
# parser.add_argument('-c', '--count')      # option that takes a value
# parser.add_argument('-v', '--verbose',
#                     action='store_true')  # on/off flag

# with open(f"{args.artist_name}-{args.song_name}", 'w', encoding='utf-8') as f:
#     f.write(genius_parser(args.artist_name, args.song_name))

lyrics = genius_parser(args.artist_name, args.song_name)
print(lyrics)
# print (genius_parser("Eminem", "Stan"))


"Lyrics__Container-sc-1ynbvzw-1 kUgSbL"