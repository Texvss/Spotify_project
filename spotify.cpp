#include "spotify.h"
#include <QFile>
#include <QTextStream>

Spotify::Spotify(const QString &path)
{
    QFile file(path);
    if (file.open(QFile::ReadOnly | QFile::Text)) {
        QTextStream stream(&file);
        QString line = stream.readLine(); // Read the header line
        while (!stream.atEnd()) {
            line = stream.readLine();
            QList<QString> list = line.split(";");
            // Remove leading empty elements due to extra semicolon in header
            if (!list.isEmpty() && list.first().isEmpty()) {
                list.removeFirst();
            }
            data.append(list);
        }
        file.close();
    }
}

QList<QString> Spotify::operator[](int i)
{
    return data[i];
}

QStringList Spotify::getTrackNames() const
{
    QStringList list;
    for (const auto &row : data) {
        if (row.size() > static_cast<int>(COLUMNS::track_name)) {
            list << row[static_cast<int>(COLUMNS::track_name)];
        }
    }
    return list;
}

QList<QList<QString>> Spotify::filterByGenre(const QString &genre) const
{
    QList<QList<QString>> filteredData;
    for (const auto &row : data) {
        if (row.size() > static_cast<int>(COLUMNS::artist_genres)
            && row[static_cast<int>(COLUMNS::artist_genres)].contains(genre, Qt::CaseInsensitive)) {
            filteredData.append(row);
        }
    }
    return filteredData;
}

QList<QList<QString>> Spotify::filterByCluster(int cluster) const
{
    QList<QList<QString>> filteredData;
    for (const auto &row : data) {
        if (row.size() > static_cast<int>(COLUMNS::s_clusters)) {
            int rowCluster = row[static_cast<int>(COLUMNS::s_clusters)].toInt();
            if (rowCluster == cluster) {
                filteredData.append(row);
            }
        }
    }
    return filteredData;
}


QList<QList<QString>> Spotify::popGenre() const
{
    return filterByGenre("pop");
}

QList<QList<QString>> Spotify::rapGenre() const
{
    return filterByGenre("rap");
}

QList<QList<QString>> Spotify::rockGenre() const
{
    return filterByGenre("rock");
}

QList<QList<QString>> Spotify::randbGenre() const
{
    return filterByGenre("r&b");
}
QList<QList<QString>> Spotify::hiphopGenre() const
{
    return filterByGenre("hip hop");
}
QList<QList<QString>> Spotify::dancepopGenre() const
{
    return filterByGenre("dance pop");
}
QList<QList<QString>> Spotify::poprapGenre() const
{
    return filterByGenre("pop rap");
}
QList<QList<QString>> Spotify::urbanconGenre() const
{
    return filterByGenre("urban contemporary");
}
QList<QList<QString>> Spotify::trapGenre() const
{
    return filterByGenre("trap");
}
QList<QList<QString>> Spotify::southernhiphopGenre() const
{
    return filterByGenre("southern hip hop");
}
QList<QList<QString>> Spotify::modernrockGenre() const
{
    return filterByGenre("modern rock");
}
QList<QList<QString>> Spotify::canadianpopGenre() const
{
    return filterByGenre("canadian pop");
}
QList<QList<QString>> Spotify::hippopGenre() const
{
    return filterByGenre("hip pop");
}
QList<QList<QString>> Spotify::neomellowGenre() const
{
    return filterByGenre("neo mellow");
}
QList<QList<QString>> Spotify::postgrungeGenre() const
{
    return filterByGenre("post grunge");
}
QList<QList<QString>> Spotify::edmGenre() const
{
    return filterByGenre("edm");
}
