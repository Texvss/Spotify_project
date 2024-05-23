#include "spotify.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
Spotify::Spotify(const QString& path) {
    QFile file(path);
    file.open(QFile::ReadOnly|QFile::Text);
    if (file.isOpen()){
        qDebug() << "Opened";
    }
    QTextStream stream(&file);
    QString line = stream.readLine();
    qDebug() << line;
    while (!stream.atEnd()) {
        line = stream.readLine();
        QList<QString> list = line.split(";");
        data.append(list);
    }
    file.close();
}
QList<QString> Spotify::operator [] (int i) {
    return data[i];
}
QStringList Spotify::getTrackNames() const {
    QStringList list;
    for (int i = 0; i < data.size(); i++) {
        list << data[i][static_cast<int>(COLUMNS::track_name)];
    }
    return list;
}

QList<QList<QString>> Spotify::filterByGenre(const QString& genre) const {
    QList<QList<QString>> filteredData;
    for (const auto& row : data) {
        if (row.size() > static_cast<int>(COLUMNS::artist_genres) &&
            row[static_cast<int>(COLUMNS::artist_genres)].contains(genre, Qt::CaseInsensitive)) {
            filteredData.append(row);
        }
    }
    return filteredData;
}

QList<QList<QString>> Spotify::popGenre() const{
    return filterByGenre("pop");
}

QList<QList<QString>> Spotify::rapGenre() const{
    return filterByGenre("rap");
}

QList<QList<QString>> Spotify::rockGenre() const{
    return filterByGenre("rock");
}

QList<QList<QString>> Spotify::randbGenre() const{
    return filterByGenre("r&b");
}
QList<QList<QString>> Spotify::hiphopGenre() const{
    return filterByGenre("hip hop");
}
