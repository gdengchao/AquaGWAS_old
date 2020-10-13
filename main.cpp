#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*
     * To know file info
     */
//    QString file = "/home/chao/Desktop/test/output/a.b.assoc.txt";
//    QFileInfo fileInfo(file);
//    QString baseName = fileInfo.baseName();
//    QString abPath = fileInfo.absolutePath();
//    QDir abDir = fileInfo.absoluteDir();
//    QString fileName = fileInfo.fileName();
//    QString suffix = fileInfo.suffix();
//    QString comSuffix = fileInfo.completeSuffix();
//    QString comBaseName = fileInfo.completeBaseName();

    /*
     *  To test open external tool
     */
//    QProcess pro;
//    pro.start("Rscript");
//    if (pro.waitForStarted(-1))
//    {
//        qDebug() << "started." <<endl;
//    }
//    else
//    {
//        qDebug() << "Not started." << endl;
//    }

    /*
     *  To test QRegExp
     */
//    QString str = "HDH_G00730plitHDH_T00730:exon1:c.A132G:p.T44T,";
//    QRegExp regExp("([^:]*):(.*),");
//    int pos = regExp.indexIn(str);
//    QStringList list = regExp.capturedTexts();
//    QString strA = regExp.cap(1);
//    QString strB = regExp.cap(2);

//    QString str("A(B)");
//    QStringList gene = str.split(QRegExp("\\(|\\)"), QString::SkipEmptyParts);


//    QRegExp regExp("transcript_id \"(.*)\"");

//    QString item = "transcript_id \"ID\"";
//    int pos = regExp.indexIn(item);

//    QString tmp;

//    if (pos >= 0)
//        tmp = regExp.cap(1);



//    FuncAnnotator funcAnnotator;
//    funcAnnotator.getTransIDFromGff("/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic.gff");
//    funcAnnotator.makeBaseFromNcbi("/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic.gtf",
//                                         "/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic_anno_ncbi.csv",
//                                         "/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic_anno_ncbi.out");
//    QMap<QString, QString> map = funcAnnotator.getProteinIDandTransIDFromGff("/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic.gff");

//    QFile out("/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic_anno_ncbi.out");
//    out.open(QIODevice::WriteOnly);

//    QTextStream stream(&out);
//    for (auto it = map.begin(); it != map.end(); ++it)
//    {
//        stream << it.key() << "\t" << it.value() << endl;
//    }

//    QSet<QString> set = funcAnnotator.getTransIDFromGff("/media/dengchao/data/data/Yesso_scallop/GCF_002113885.1_ASM211388v2_genomic.gff");

//    for (auto it : set)
//    {
//        stream << it << endl;
//    }

    MainWindow w;
    w.show();

    return a.exec();
}
