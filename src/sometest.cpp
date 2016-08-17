#include <QTest>

class SomeTest : public QObject
{
    Q_OBJECT
private slots:
    void test_something();
    void test_something2();
};

void SomeTest::test_something()
{
    QCOMPARE(10, 10);
}

void SomeTest::test_something2()
{
    QCOMPARE(10, 12);
}

QTEST_APPLESS_MAIN(SomeTest)
#include "sometest.moc"
