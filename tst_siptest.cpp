#include <QString>
#include <QtTest>

class SipTest : public QObject
{
    Q_OBJECT

public:
    SipTest();

private Q_SLOTS:
    void testCase1();
};

SipTest::SipTest()
{
}

void SipTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(SipTest)

#include "tst_siptest.moc"
