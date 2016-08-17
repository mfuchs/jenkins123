#include <QTest>

class SomeTest : public QObject
{
private slots:
    void test_something();
};

void SomeTest::test_something()
{
    QCOMPARE(10, 10);
}

QTEST_MAIN(SomeTest)
