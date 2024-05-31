#ifndef SPOTIFY_H
#define SPOTIFY_H
#include <QList>
#include <QString>
#include <QStringList>

enum class COLUMNS {
    tplaylist_url,
    year,
    track_id,
    track_name,
    track_popularity,
    album,
    artist_id,
    artist_name,
    artist_genres,
    artist_popularity,
    danceability,
    energy,
    key,
    loudness,
    mode,
    speechiness,
    acousticness,
    instrumentalness,
    liveness,
    valence,
    tempo,
    duration_ms,
    time_signature,
    pop,
    rap,
    rock
};
class Spotify
{
public:
    Spotify(const QString & = ":/data/playlist_2010to20222Ars.csv");
    QList<QString> operator[](int i);
    QStringList getTrackNames() const;
    QList<QList<QString>> filterByGenre(const QString &genre) const;
    QList<QList<QString>> popGenre() const;
    QList<QList<QString>> rapGenre() const;
    QList<QList<QString>> rockGenre() const;
    QList<QList<QString>> randbGenre() const;
    QList<QList<QString>> hiphopGenre() const;
    QList<QList<QString>> dancepopGenre() const;
    QList<QList<QString>> poprapGenre() const;
    QList<QList<QString>> urbanconGenre() const;
    QList<QList<QString>> hippopGenre() const;
    QList<QList<QString>> canadianpopGenre() const;
    QList<QList<QString>> neomellowGenre() const;
    QList<QList<QString>> edmGenre() const;
    QList<QList<QString>> postgrungeGenre() const;
    QList<QList<QString>> modernrockGenre() const;
    QList<QList<QString>> trapGenre() const;
    QList<QList<QString>> southernhiphopGenre() const;

    QList<QList<QString>> data;

private:
    // QList<QList<QString>> data;
};

#endif // SPOTIFY_H
