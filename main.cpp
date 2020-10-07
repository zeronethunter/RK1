#include <iostream>
#include <string>
int main() {
    struct arr_with_letters{
        int num;
        char letter;
    };
    arr_with_letters arr[26];
    for (int i = 65; i <=90; ++i){
        arr[i-65].num = 0;
        arr[i-65].letter = (char)i;
    }
    std::string s("IGF AILRP LX GLT IGF EXQ QVBF IL CF UA LSF LX AJLRIA\\' BLAI ESOFRRVIFO VSO XVAQUSVIUSM AILRUFA. US 23 PFVRA, IGF LRMVSUKVIULS TFSI XRLB JRLZUOUSM V JVP-JFR-ZUFT JYVIXLRB XLR SL- GLYOA-CVRRFO XUMGIUSM IL UBJYFBFSIUSM SFT REYFA VSO XFVIERFA IL YUXI IGF AJLRI LX BUDFO BVRIUVY VRIA XRLB LCAQERUIP US IGF ESUIFO AIVIFA. CEAUSFAA RFVYYP CFMVS IL JUQW EJ TGFS KEXXV, YFO CP YLRFSKL VSO XRVSW XFRIUIIV US VOOUIULS IL VJJLUSIFO JRFAUOFSI OVSV TGUIF JERQGVAFO IGF EXQ VSO IERSFO UI USIL V BEYIU-CUYYULS OLYYVR FSIFRJRUAF. SLT US IGF GVSOA LX TBF-UBM, IGF XEIERF LX IGF QLBJVSP--VSO AJLRI\\'A MRLTIG UA ESQFRIVUS. IGF ESLRIGLOLD RLVO IL JRLBUSFSQF, GLTFZFR UA QFRIVUS VSO UA TLRIG IVWUSM V YLLW VI IL AFF TGVI IGFP OUO TFYY VSO TGVI IGFP QLEYO GVZF OLSF CFIIFR. GFRF VRF 15 XVQIA PLE OUOS\\'I WSLT VCLEI IGF EXQ. OVSV TGUIF\\'A RFYVIULSAGUJ TUIG IGF XFRIUIIVA. YLRFSKL VSO XRVSW XFRIUIIV BVP GVZF SVBFO OVSV TGUIF IGF XURAI VSO LSYP EXQ JRFAUOFSI ESOFR IGF KEXXV CVSSFR, CEI IGF LRUMUSA LX TGUIF\\'A RFYVIULSAGUJ TUIG IGF XFRIUIIVA OVIFA CVQW IL IGF 1980A. TGUIF VSO YLRFSKL, IGF PLESMFR XFRIUIIV VIIFSOFO GUMG AQGLLY VI CUAGLJ MLRBVS GUMG, CEI IGFUR XRUFSOAGUJ OUO SLI IREYP WUQW LXX ESIUY V QGVSQF FSQLESIFR VI IGF TFOOUSM LX V BEIEVY XRUFSO PFVRA YVIFR. IGF ITL ALLS OUAQLZFRFO V BEIEVY USIFRFAI US QLBCVI AJLRIA, TGUQG YVIFR JRLBJIFO TGUIF IL QLSZUSQF IGF XFRIUIIVA IL CEP IGF EXQ VSO SFVRYP BLSLJLYUKF IGF AJLRI LX BBV. IGF \"QGUYOGLLO RFYVIULSAGUJ\" CFITFFS YLRFSKL VSO OVSV UA AYUMGIYP LZFRCYLTS, VA IGF ITL OUO SLI CFQLBF \"QYLAF\" ESIUY IGFUR QGVSQF FSQLESIFR BVSP PFVRA YVIFR. GLTFZFR, GVO TGUIF SLI VIIFSOFO CUAGLJ MLRBVS XLR IGF CRUFX IUBF GF OUO (GF MLI FDJFYYFO ITUQF), GF BVP GVZF SFZFR GVO V RFYVIULSAGUJ TUIG XFRIUIIV IL CFMUS TUIG VSO IGF TGLYF YVSOAQVJF LX BBV VA UI UA WSLTS ILOVP QLEYO CF OUXXFRFSI. OVSV TGUIF BVSVMFO QGEQW YUOOFYY VSO IUIL LRIUK CFXLRF IGF EXQ. CFXLRF IVWUSM IGF RFUMSA VA EXQ JRFAUOFSI, OVSV TGUIF GVO VYRFVOP AIVRIFO IL CFQLBF GFVZUYP USZLYZFO TUIG BBV US AJUIF LX GUA CLDUSM CVQWMRLESO. GF BVSVMFO PLESM EJAIVRIA QGEQW YUOOFYY VSO IUIL LRIUK US IGF JRF-KEXXV OVPA. US XVQI, TGUIF QVS CF AFFS US IGF QLRSFR OERUSM ALBF LX IGF ITL XUMGIFRA\\' FVRYUFR XUMGIA. IGF USIFRFAIUSM IGUSM VCLEI IGUA IUOCUI UA YUOOFYY VSO LRIUK TLEYO ML LS IL CFQLBF ITL LX IGF CUMMFAI RUZVYA US IGF QLBJVSP VSO OL ALYUO JVP-JFR-ZUFT CEAUSFAA. FZFS ILOVP, EXQ 66: YUOOFYY ZA LRIUK UU RVSWA VA IGF SUSIG GUMGFAI MRLAAUSM JVP- JFR-ZUFT US EXQ GUAILRP VSO ILJJFO LSF BUYYULS CEPA. UI UA ZFRP QLSQFUZVCYF IGVI IGF LRUMUS LX IGF OUAYUWF CFITFFS IGF ITL XUMGIFRA AIFBBFO XRLB HFVYLEAP LX TGUIF\\'A VXXFQIULS XLR IGF LIGFR, FZFS IGLEMG IGFRF UA SL YLZF YLAI CFITFFS TGUIF VSO LRIUK. VYY US MLLO IUBF, GLTFZFR...");
    for(int i = 0; i <= s.length()-1; i++){
        for(int j = 65; j <= 90; j++){
            if (s[i] == (char)j){
              arr[j-65].num += 1;
            }
        }
    }
    int sum=0;
    for(int i = 0; i<= 25; i++){
        sum += arr[i].num;
    }
    float res;
    for(int i = 0; i <= 25; i++){
        res = ((float)arr[i].num)*100/sum;
        std::cout << arr[i].letter << " = " << res << " with " << arr[i].num << " enters;" << std::endl;
    }
    std::cout << "The end sorted letters:" << std::endl;
    for(int i = 0; i <=24; i++){
        for(int j = i+1; j<= 25; j++){
            if (arr[i].num<arr[j].num){
                std::swap(arr[i], arr[j]);
            }
        }
    }
    for(int i = 0; i<=25; i++){
        std::cout << arr[i].letter << " = " << arr[i].num << std::endl;
    }
    for(int i =0; i <= s.length()-1; i++){
        switch (s[i]) {
            case 'A':
                s.replace(i,1,"S");
                break;
            case 'B':
                s.replace(i,1,"M");
                break;
            case 'C':
                s.replace(i,1,"B");
                break;
            case 'D':
                s.replace(i,1,"X");
                break;
            case 'E':
                s.replace(i,1,"U");
                break;
            case 'F':
                s.replace(i,1,"E");
                break;
            case 'G':
                s.replace(i,1,"H");
                break;
            case 'H':
                s.replace(i,1,"Q");
                break;
            case 'I':
                s.replace(i,1,"T");
                break;
            case 'J':
                s.replace(i,1,"P");
                break;
            case 'K':
                s.replace(i,1,"Z");
                break;
            case 'L':
                s.replace(i,1,"O");
                break;
            case 'M':
                s.replace(i,1,"G");
                break;
            case 'N':
                s.replace(i,1,"J");
                break;
            case 'O':
                s.replace(i,1,"D");
                break;
            case 'P':
                s.replace(i,1,"Y");
                break;
            case 'Q':
                s.replace(i,1,"C");
                break;
            case 'R':
                s.replace(i,1,"R");
                break;
            case 'S':
                s.replace(i,1,"N");
                break;
            case 'T':
                s.replace(i,1,"W");
                break;
            case 'U':
                s.replace(i,1,"I");
                break;
            case 'V':
                s.replace(i,1,"A");
                break;
            case 'W':
                s.replace(i,1,"K");
                break;
            case 'X':
                s.replace(i,1,"F");
                break;
            case 'Y':
                s.replace(i,1,"L");
                break;
            case 'Z':
                s.replace(i,1,"V");
                break;
        }
    }
    std::cout << "Decryped: " << s << std::endl;

    return 0;
}
