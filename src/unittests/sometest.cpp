#include <QTest>

#include "area.h"

class SomeTest : public QObject
{
    Q_OBJECT
private slots:
    void test_area();
    void test_area_data();
};

void SomeTest::test_area_data()
{
    QTest::addColumn<int>("a");
    QTest::addColumn<int>("b");
    QTest::addColumn<int>("result");

    QTest::newRow("a=0 --> 0") << 0 << 10 << 0;
    QTest::newRow("b=0 --> 0") << 10 << 0 << 0;
    QTest::newRow("a=0, b=0 --> 0") << 0 << 0 << 0;
    QTest::newRow("a<0 --> 0") << -10 << 0 << 0;
    QTest::newRow("regular one") << 10 << 20 << 200;
}

void SomeTest::test_area()
{
    QFETCH(int, a);
    QFETCH(int, b);
    QFETCH(int, result);

    QCOMPARE(area(a, b), result);
}

QTEST_APPLESS_MAIN(SomeTest)
#include "sometest.moc"
