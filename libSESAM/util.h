/*

    Copyright (c) 2015 Oliver Lau <ola@ct.de>, Heise Medien GmbH & Co. KG

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef __UTIL_H_
#define __UTIL_H_


#include <cstring>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <QVector>
#include <qmath.h>


template <class T>
void SafeRenew(T& a, T obj)
{
  if (a != Q_NULLPTR)
    delete a;
  a = obj;
}


template <class T>
void SafeDelete(T& a)
{
  SafeRenew<T>(a, Q_NULLPTR);
}

template <class T>
void SecureErase(T *p, size_t size)
{
  memset(p, 0, size);
}


template <class T>
void SecureErase(T &obj)
{
  for (typename T::iterator i = obj.begin(); i != obj.end(); ++i)
    *i = 0;
  obj.clear();
}


template<typename T>
T clamp(const T &x, const T &lo, const T &hi)
{
  return qMax(lo, qMin(hi, x));
}


extern QString shuffled(const QString&);
extern QByteArray shuffled(const QByteArray&);
extern QString fingerprintify(const QByteArray &ba);
extern bool containsAll(const QString &haystack, const QString &needles);
extern bool containsAny(const QString &haystack, const QString &needles);

#if defined(Q_CC_GNU)
extern void SecureErase(QString str);
#endif

#endif // __UTIL_H_
