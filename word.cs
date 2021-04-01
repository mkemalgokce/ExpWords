using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
public class word : MonoBehaviour
{
// siyah bomba duzelt
//turkce harfler ekle , options save ini duzelt
    // Start is called before the first frame update


    public string[] sorular = {"ÇİÇEK","DUŞ","AMBULANS","ZAMAN","MEKTUP","BORSA","TAKI","OLTA","DENİZ ","YILAN","GELİN","EDİTÖR","PEYNİR","SANDAL","FREKANS","TEYP","TELEFON","KAŞAR","DÜRBÜN","BANKA","UZUNLUK","PUSULA","RESİM","ELEKTRİK","DEPREM","ÇİFTÇİ","FİDAN","KEDİ","SATRANÇ","IŞIK","TAVŞAN","DAMAR","MADEN","MÜCEVHER","PİST","YANSIMA ","ÇAKMAK","AVUKAT","KAPAN","ÖĞRENCİ","UYKU","ÇEKİÇ","ANNE","SİNCAP ","MIKTNATIS","ÇİKOLATA","İLETİŞİM","YORGAN","TOKA","SUŞİ","KRAVAT","UYDU","GEZEGEN","KITA","MEVSİM","ÇÖL","KIŞ","ŞEKER","EJDERHA","YARDIM","İTALYA","KARAT","MISIR","MOBİLYA","PETEK","TIRTIL","PEDAL","HAPİS","RENK ","SEYAHAT","VİZE","TABELA","AĞAÇ","ELEKTRİK","ORTAÇAĞ","BURUN ","KIRMIZI","GAZETE","MEKTUP","EVLİLİK","ASETON","SİNEMA","YAĞMUR","FLÜT","REZERVASYON","KAŞAR","KETÇAP","ÇERÇEVE","PENCERE","ARKEOLOJİ","PAPYON ","PALET","PİJAMA","CADI","YAZI","ESKİMO","GARDİYAN","DOLAP","KAKTÜS","KIŞ","ÜÇGEN","EMZİK ","BASAMAK","MUTFAK","CEZVE ","İZCİ","PROTON","YENİLEMEK","TUTSAK","OTEL","UZAY","FİNCAN","KAPI ","FERMUAR","KOMİK","COĞRAFYA","ZARF","KURNAZ","FOSİL YAKIT","FABRİKA","HELYUM","SONBAHAR","DONDURMA","AYAKKABI","SOĞUK","GONDOL","SEFA","FAR","PATATES","MAGAZİN","ŞEMSİYE","GÖK GÜRÜLTÜSÜ","ORKESTRA","GARSON","DOĞUM GÜNÜ","BOZUK PARA","AÇI","KANAT","MUMYA","ÇALAR SAAT","DİYABET","PORSELEN","SERGİ","CHARLIE CHAPLİN","BİLİM ADAMI","DUBLAJ","FOTOSENTEZ","ATMOSFER","NÜKLEER","YER ÇEKİMİ ","ŞANS ","KİRPİK","HİPODROM","MİTOLOJİ","ASTRONOMİ","3,14","TOPRAK","ZAYIFLIK","DOSYA MASRAFI ","FAİZ","ASA","TUZ","EĞLENCE","VOLKAN","KALDIRAÇ","DEBRİYAJ","KATALOG","KABUS","PEKİN","ELEMENT","GÖMLEK","ORGAN","İVME","MAKYAJ","ÜLKE","TEMİZLİK","KOLON","VİCTOR HUGO","NOSTALJİ","SPOR","POLİÇE","ŞAMDAN","POSTER","MEVKİ","VEKTÖR","DUMAN","RAPUNZEL","HANGAR","PERİSKOP","TAŞIT","KUŞ","YUVARLAK","ÇALGI","YIRTICI","EDİSON","ALTIN","AYI","KOVA","BAHARAT","DANS","KAHVALTI","İLAÇ","BOYNUZ","MUZ","ELEKTRİK","KAĞIT","KLAVYE ","ZİRVE","HAVUÇ ","DAVUL","DEĞİRMEN","DEDEKTİF","KRAL","PUSULA","TARIM","REÇETE","YILAN","BALIK","PATLAMIŞ MISIR","UYKU","BAL","AĞAÇ","VİŞNE","SU","KÜRDAN","GEZEGEN","BANKA","ARABA","KOKU","YAZAR","PARA","ELBİSE","KARA KUTU","NOSTALJİ","BAVUL","SİGARA","KAPTAN","AY","ATEŞ","SÜT","TAKI","ÖLÇÜ","SUSAM","TİYATRO","LAV","DONDURMA","KÖPÜK","KÖFTE","FIRÇA","KAN","GAZETE","YAĞMUR","YEŞİL","SES","FANUS","ÜÇGEN","EĞİTİM","SPOR","SAÇ ","AĞAÇ","SANAYİ","HÜCRE","YILDIZ","MUTASYON","TABLO","KEDİ","UCUZ","YAMAÇ","BİSİKLET","SEYAHAT","MANŞET","ARİSTO","KÖFTE","ÖZGEÇMİŞ","ŞEF","FITNESS","CETVEL","PİSAGOR","İSTANBUL","FIRÇA","YATIRIM","IŞILTILI","TELESKOP","SÜT","DENKLEM","DENEY","GÖZ","BREZİLYA","ÇİFTLİK","MOLEKÜL","MOZART","SEYAHAT","RAKAM","YAZ","EV EŞYASI","BEYAZ EŞYA","PETEK","SERGİ","MERDİVEN","VİŞNE","MEYVE","SEBZE","ÜRETİM","TURUNÇGİL","KEHANET","MANKEN","MİĞFER","KORSAN","MÜZE","YUMURTA","KREDİ KARTI","KAMPANYA","GARSON","TORK","LİMAN","HAYVAN","GİYSİ","ÜLKE","ÇİÇEK","AKSESUAR","AY","SPOR","ÜLKE","RENK","SPOR","TATLI","FUTBOL","MEYVE","EV EŞYASI","YAĞMUR","SOĞUK","İÇECEK","BEBEK","AĞAÇ","ALMANYA","OYUN","HASTALIK","HAYVAN","TAŞIT","FUTBOL","FİYAT ARTIŞI","KERESTE","TENİS","SAHİL","SPOR SALONU","HASTANE","UÇAK","KUPA"};



    public string[] cevaplar = {"SAKSI","SABUN","SİREN","SAAT","ZARF","HİSSE","SAAT","BALIK","GEMİ","PİTON","DAMAT","DERGİ","SÜT","KÜREK","RADYO","KASET","ALO","TOST","MERCEK","KREDİ","METRE","YÖN","RESSAM","ENERJİ","FAY","TARIM","AĞAÇ","PATİ","FİL","LAMBA","HAVUÇ","KAN","ALTIN","KOLYE","UÇAK","AYNA","ATEŞ","DAVA","TUZAK","EĞİTİM","YATAK","ÇİVİ","ÇOCUK","FINDIK","KUTUP","TATLI","TELEFON","YASTIK","SAÇ","BALIK","GÖMLEK","AY","NEPTÜN","ASYA","YAZ","DEVE","KAR","TATLI","ALEV","BAĞIŞ","VENEDİK","PIRLANTA","MUMYA","KOLTUK","ARI","KOZA","BİSİKLET","MAHKUM","SARI","BAVUL","YURTDIŞI","REKLAM","ÇINAR","TESLA","ŞÖVALYE","NEFES","KAN","MANŞET","PUL","NİKAH","OJE","FİLM","BULUT","NOTA","RESTORAN","TOST","DOMATES","FOTOĞRAF","PANJUR","KAZI","SMOKİN","DALGIÇ","GECELİK","İKSİR","KALEM","İGLO","HAPİSHANE","RAF","ÇÖL","KARTOPU","AÇI","BEBEK","MERDİVEN","TAVA","FAL","KAMP","ATOM","RESTORE","ESİR","TATİL","EVREN","ÇAY","EV","MONT","ŞAKA","HARİTA","PUL","TİLKİ","PETROL","SANAYİ","BALON","YAPRAK","VANİLYA","BAĞCIK","MONT","VENEDİK","ZEVK","MAKYAJ","CİPS","PAPARAZİ","YAĞMUR","FIRTINA","KEMAN","SERVİS","MUM","KUMBARA","GEOMETRİ","UÇAK","MISIR","ALARM","ŞEKER","TABAK","RESİM","SİNEMA","DENEY","FİLM","BİTKİ","GAZ","RADYASYON","NEWTON","ÇEKİLİŞ","GÖZ","JOKEY","EFSANE","UZAY","Pİ","TOHUM","ZAAF","KREDİ","BANKA","CADI","BEYAZ","PARTİ","LAV","KUVVET","VİTES","ÜRÜN","KORKU","ÇİN","ALTIN","ASKI","BÖBREK","FİZİK","RUJ","KENYA","HİJYEN","BİNA","SEFİLLER","PLAK","TARAFTAR","SİGORTA","MUM","DUVAR","MAKAM","YÖN","ATEŞ","MASAL","DEPO","DENİZALTI","ARABA","KARTAL","TEKERLEK","KEMAN","KAPLAN","AMPUL","MÜCEVHER","PANDA","BURÇ","AKTAR","TANGO","OMLET","DOKTOR","KEÇİ","MAYMUN","PRİZ","KALEM","TUŞ","DAĞ","TAVŞAN","TOKMAK","BUĞDAY","DELİL","TAHT","KUZEY","HASAT","ECZANE","KOBRA","YUNUS","SİNEMA","YATAK","PETEK","YAPRAK","REÇEL","BARDAK","DİŞ","MARS","FAİZ","VİTES","PARFÜM","ROMAN","CÜZDAN","KUMAŞ","UÇAK","PLAK","TATİL","DUMAN","GEMİ","UYDU","KIVILCIM","İNEK","KÜPE","CETVEL","SİMİT","SAHNE","VOLKAN","KÜLAH","SABUN","KIYMA","BOYA","DAMAR","MANŞET","ŞEMSİYE","DOĞA","ŞARKI","BALIK","AÇI","OKUL","GOLF","TARAK","DOĞA","MAKİNE","HAPİS","GÜNEŞ","EVRİM","MANZARA","PATİ","İNDİRİM","PARAŞÜT","PEDAL","PASAPORT","VOLEYBOL","FİLOZOF","PATATES","İŞ","MUTFAK","VÜCUT","ÖLÇÜ","MATEMATİK ","BOĞAZ","PALET","PARA","ELMAS","GEZEGEN","İNEK","MATEMATİK","BİLİM","ORGAN","SAMBA","TARIM ","KİMYA","BESTE","OTEL","YEDİ","SICAK","KOLTUK","FIRIN","KALORİFER ","SANAT","BASAMAK","REÇEL","KİRAZ","MARUL","FABRİKA","MANDALİNA ","KAHİN","PODYUM","ZIRH","GEMİ","TARİH","TAVUK","ALIŞVERİŞ","İNDİRİM","SERVİS","MOMENT"," GEMİ","KEÇİ"," ŞORT","KANADA","PAPATYA","SAAT","ŞUBAT","TENİS","SOMALİ","YEŞİL","KAYAK","SUFLE","HAKEM","ŞEFTALİ","AVİZE","ŞEMSİYE","MONT","GAZOZ","BİBERON","MEŞE","BERLİN","SATRANÇ","GRİP","RAKUN","KAMYON","SANTRA","ZAM","AHŞAP","RAKET","DENİZ ","HALTER","SERUM","KOKPİT","ÖDÜL"};



    public string[] ekran = {"KSAPKTSI","SUAKBRUTEN","ASOVİRYEÖN","MSUAPAİT","PUZLAMTRİF","ZOHPİSTSÜE","KOSLAPYAMT","MBIAPLRTIAK","NBGEMAOİ","KPOBİRTIOAN","VDOAMİLAYT","İDPEBGRNGİ","KESATAÜBT","NVKAÜRUAUEK","KSERAYDSYİO","MKATSİPEBT","MAPELAO","PTOEYSİT","VMELROPCELK","FAKRAZİENDİ","OAMHETHAERE","KOUZYEÖRN","MNAREALSİSAM","OAPENERJAIBİ","MAYFİAYEP","TIARPOIMEK","HAPAĞEİAÇ","PAUETİMAK","VEZIAEFİZCL","ALAOEMBEAPLK","OAHAPURVEUÇİL","NBAKTUBAYNEON","ELMALELATIANEK","KAPEUOKLYASE","PFOUAÇPOAKİ","OPAYNALA","AİŞEATEAŞ","HADKIAVMA","MATZUAPAZAK","MAEĞİOKTİRMS","BAYATALSAK","NAÇAEİIVİ","MÇASOİŞCUASK","PASFIASNDEIAİK","NCKUATEUPİ","MATALTERLIEV","LMVETEMLEASFOTN","YATMFBSIKTPAIKB","MACKAEOÇEM","BASŞDOEKALIMK","MGÖAMAOELIEKV","NXKSAOEYAYK","MAKRNAOVPETÜNS","NAVRASKELAYPA","KVAMIAYOPAZ","NDKALEDBVAE","NVKALONRAIVİRİE","İŞCATANBLATYILÜIİE","LACAEPEVLAVEV","BYAĞIEŞEMK","PVANAENOEDOPAKİK","MAPIRLANTALSELAK","MAPARİRAUMİOT","OPALKOLTAUEKELM","BOLARPIMBAEM","KELOZEBAEOMV","MBİIOSİKLAETOPA","MCKAHUAKOAUM","KIRMASARLAMIZPLE","TASBAOLAVULEO","YURASVTOPASDIMŞCI","MVARECAKLOASMAE","MAÇIAPABİPNAÜRMA","TALCMAESOPALAAE","ŞVÖALCPVOKLPAEYE","KASNDOEVFDKAESD","REDKASNVCİETU","EBMVEUASNŞUPÜECT","ÖCPMAUTZAELAİĞA","AİSNLEOİVKAMEOAHT","KİSCEOAMJVELAP","OSDFVPLADĞİAWLECMPD"," CİWEBASUVSLUOMEKT","VMAENOFDATVSDA","RDEİSTİMEAOROALEAN","TKAELOSİATEMİT","DOMİLEATSDFESSLAD","FOİALETOĞZXLRAZİFLLEO","MEYPAZDONJUULER","KAVMEAİLAOUAMZI","İPSCADMVDOFDKİİNPEY","MACDALESADGIÇSL","AVGEECASBELİSDFKAS","İAVCKVSAİROAPC","İKADVZLECZEMVME","MAOYİXEGLİAOZPE","CAHCDAPVİSİPHAECNEEAVM","ASDVRAAŞSMCEİASCOF","CAPOCÇAASÖLAE","EMKİLARCEDTOİPPMUSE","İMECAVEÇVAEIPE","AZBECEBMEKDİC","ACMERMALDİİEPVCMEN","OAPTCACEVLASEP","PCAEFVCADİVALİE","ZİKAEPLAMİPÜ","KMİALCTZOKMİ","RXMEÖSEATOİRÜĞE","MEAOSKİERSD","MATOZPATEAİLMT","OAMELMNVÖPREN","ÇALKAPOCYALE","EOLEVASKLDM","LEMİONLTEP","MŞAOPKEÜAZ","MHAIERPİMIATZA","IEPTKAULMLAZ","TZİAİLASOKİCA","APVETRAKSOLĞÜ","VİSESDIANEPOAYİŞİ","İLBASDLZOAONEP","EYALSAPEİĞÜRAK","POAVASDNİLYAERT","İZEBALSKĞEPCPIK","MOASRNTOIASEP","İPVEANASDEDİKVA","MKZEAVİPCK","İZMAKRYAABNJK","CAİPBVNLSSDO","VREAPMAPALSLİRAZİ","EOYPLAZĞMAİURM","ASOFGIRMASTINAKO","ZEKEMMİPANİOP","SEPLERÇÖZLVİLZMİS","ZVEMEOPUMKASĞC","KSOPUZNMLOBARAAOP","ZCGECAŞOZIMOAKETRİ","KIOŞUÇEUPAKİE","AMZBEOPISIREİSZOP","AİEOSPLCLZPARNJM","AŞİPEKMEROZNO","ETABZCELAKOAP","MEREİZOSİMLZO","SİYTNNİAOEMNEA","ADEZTUNOAEYPNB","AEFİZİNLMEA","BENAİTZOPKİZİ","GEİAVAZCİASK","EPRADEAİOYASVNALYON","İTNEZAWTLMON","OPZVÇEKAİİLZKAOİŞ","GOPAÖZBEIAP","WJAOKZİAOVEYO","APEEVBEFSANSIAPE","DUCZAİVPAY","AEVPİVSCUAIA","ATACİOBVOEHUM","TEZAEİAPADAVF","EİKRCBEOAEDİ","BAPAONİZEALKA","CANEAVEOPDİZI","TİZBEONAMEYALEZ","PAOAPRZMAEPTİ","ÖEÇLAİZPBTIV","KİPUCEVAVPÜET","AİVBENMAİTEİPS","ANEÜRAIVOÜİVN","MEKOİPARKCENUNE","ANÇPİLEONAÇEYA","ANELMENTINAİ","LEAİZESKCIM","AVBÖTBNREKİZU","FMEİAMEZİKİPO","APERAİOUJİN","KCENTÜYMRYEAKE","NEHİSJYAEUNB","TÜÜBİMKNAİZ","SAEAFMİLDLEURR","TPKLAEKAENİP","TÜAİZPRAFMATMAUAR","SİGMAORİZITMANA","MSAVUAMKMTE","DSUMEVAHRÜAN","OMAANEFKAEİPM","FYPUÖTELNLA","RATMPTKESKŞON","EMSKLAEZİSADL","DELİPAAUTİOMVB","DENALENAİİZALTPPVI","MAORİATBUAR","SOKIAPRUTEAPL","MDÜTIEPKPERALCEIK","ISOKAEPMEALN","EKIACPELEAN","TOESAUMEPAUL","PUMÜECEJVİHAMER","KUPİANETDA","BOTİUBRMÇ","POAKUTBAR","HAROTNANGUO","POMTULENİT","BEDUCZOKATCOR","PAKIELÇEİ","UMİAUYPMUN","KPDROİZ","LKAYOLİEOM","CEPTIKUZŞ","TNEDPANĞ","MUTABOVŞAIN ","ZITUROKBMEAK","BALUNĞECDOAY","PUDOENLİYL","BETİAÇUHİT","KEYPUZSUEY","HEASUAYİT","DOEKCİZATNE","KEOBZRİA","MİYBUANPUCS","FSOİANOEZMA","YOTIŞANTİAK","AYPNEKTREK","DÖYANPERMAİK","MREYÇEVL","OPBAVALRDSAEKV","ASDTKMİŞSOAPC","MAÖIKACANRSVS","FAVASİRAZSDFİP","LAOPVVCEVİTELASP","PİEAROFÜLAZVMO","LZROEOMAAVCN","ECVKÜZDAVNİLZ","AKNEUSİMANŞVU","NUÇVEAVKVOAP","KİPLTAMŞEAKNE","OTÖEANTİLEAİLİ","SDALEIUZMANRAG","VGİMECUIMAPKİL","NEUYADMEPUTS","AKIELVILACİITIMENZU","İLEMVUNEİAPKÜ","ÇEKÜPAEMOPEV","AİCEAİVPTVEAMEİL","SMEAPİMANEİTOP","ESKAMAOHNENE","VNAMİOLAŞVPKAENİZ","KTİÜLEAVNAHOZ","MENSAEİBUAMEN","AKINYEİZPMABE","İÇBPODEMYAİRA","DEİAVMNEAPOR","AMBİDANŞETSİNE","OŞEADMRSİYNEP","NDEMOANEĞASİL","ZŞİAMKAZURKIB","LABCYUANELIKVE","ABAPUÇFNEIK","ZOTKEABUSİPLA","GZEYONALFİNE","LTÇEAROAKMENO","İCDNEOLİĞAKO","VİONEMAKİTNER","ÜHABZMAPİMSVİP","NEGAPÜNMEŞZİE","TPELEMCVRİMO","ÜMAİNEZAPERBANE","AİPMCATÜMİOEL","LİNEDİMEPRİMUACÜ","LEPAENİRAŞMAÜTİO","AİPELNEDASOLÜ","AİPABESAAİPLORTN","GVOZNLTEYBMOLA","FİZİMABELODZOFEAP","SPAİATAMETVEOES","İALEVŞCAALE","AİMANEUTFASİKA"," AVDÜCAMEKUTİO","AÖLÇZEAOÜSİN","AİMANATELMSATİCKO","EİBOAPĞAONİZ","SÖCPANLEEİAPOT","TİPEAZRÖAUK","NÖEDELMEİAS","TGÜEZANÇEOZGEN","SİBENANEKAMY","HMVEBATESİOMATLÇÜİK","ABSİDLİÜZPEMER","DİOREGAÜNNEAP","AİSABEMELÜĞBA","ATEARSİPIAONMİ","AKİNMOYLAZER","VMABESİAPMTEKAP","MAORİTÖECLİST","ZYMDEODİKU","AİSICLEOAKÜŞNE","CEKAİPOLTSİUKA","ÇFAEIREINDNPAÜ","AİKMALNEORİFERSP","ÖAESAPNATKİV","EZBAESALCMOAPAKİ","ARNZEÇTİELUP","TEKNLİRÜOAZŞ","DLOMARUTLSE","LEFAEİBNRİKAUP","POMEANPDALİRNAL","BKÜANALHİNAZT","EPONDYYAUMKAM","EZINRCMHKL","AGEYALKMİĞ","ETNAAKOPRİHEC","ETANBVUKEKC","KALİZDIŞVERİŞMOP","SNİLNAPDİNRZİCMA","TSERBNVİSAKOP","APMOLEMCENTİŞ","NGAELAPMİCT","MAKNYEÇLİPVTUN","LGŞTOREMTLİEK","MKAENSADMAŞ","DEPOAPRATYKİA","YESKAOLATBETİZ","AŞUNEBKZATİP","LATBEFOLNİSUT","ASFORAMALİNME","AKRYKEIŞMİLIZI","BKASNYATKEBOKL","VASABUAFKLNE","FHAOKSTEMAYP","ZAŞCRTEFTALİBTU","İBAULAVİZETUK","AŞELMSİENUTYEGAR","TMCONYUNTLAN","KAGAHZOZENUTLE","EMBİTUBNEİRONZANK","AÇMLERMIEŞNEA","ZBENAPRLİNUTV","ASADUTRALEIONÇİ","LEUGNCORİPANAPI","ARYAKUSNBEYU","AKDAMUTYOVECN","OSAFNTRAAYHEAM","AEZDAŞAMAPADM","DUABHŞAAIVKEPTU","UÜRABASPKETACP","TDUMKECNİÇZAİ","DUHİANLAMCOTYİERAV","İSAERYİÇUABEMAKL","KEDOKAUPNİTB","VEÖDAYÜAMOLT"};


    public string[] ing_sorular = {"FLOWER","SHOWER","AMBULANCE","TIME","LETTER","BOURSE","JEWELRY","SEA","SNAKE","BRIDE","EDITOR","CHEESE","CANOE","FREQUENCY","CHEDDAR","BINOCULARS","BANK","LENGTH","COMPASS","PICTURE","ELECTRIC","SAPLING","CAT","CHESS","LIGHT","RABBIT ","VEIN","MINE","JEWELRY","RUNWAY","REFLECTION","LIGHTER","LAWYER","SNARE","STUDENT","SLEEP","HAMMER","MOM","SQUIRREL","MAGNET","CHOCOLATE","COMMUNICATION","QUILT","CLASP","SUSHI","SHIRT","SATALLITE","CONTINENT","SEASON","DESERT","WINTER","CANDY","DRAGON","SOLIDARITY","ITALY","CARAT","EGYPT","FURNITURE","HONEYCOMB","CATERPILLAR","PEDAL","PRISON","COLOR","SUITCASE","VISA","TREE","ELECTRIC","MEDIEVAL","NOSE","RED","NEWSPAPER","LETTER","MARRIAGE","CINEMA","RAIN","FLUTE","RESERVATION","KETCHUP","PHOTO","ARCHAEOLOGY","BOW TIE","FLIPPER","PYJAMAS","WITCH","WRITING","ESKIMO","CACTUS","WINTER","TRIANGLE","PACIFIER","STAIR","KITCHEN","SCOUT","PROTON","HOTEL","SPACE","CUP","DOOR","ZIPPER","FUNNY","GEOGRAPHY","ENVELOPE","FOX","FOSSIL FUEL","FACTORY","HELIUM","AUTUMN","ICE CREAM","SHOE","COLD ","GONDOLA","EYESHADOW","PATATO","RAIN","THUNDER","ORCHESTRA","WAITER","BIRTHDAY","COIN","ANGLE","WING","MUMMY","DIABETES","PORCELAIN","PICTURE","CHARLIE CHAPLIN","SCIENTIST","DUBBING","PHOTOSYNTHESIS","ATMOSPHERE","NUCLEAR","GRAVITY","SWEEPSTAKE","HIPPODROME","MYTHOLOGY","ASTRONOMY","3,14","SOIL","INTERESET","WAND","ENTERTAINMENT","VOLCANO","CLUTCH","CATALOG","NIGHTMARE","PEKKIN","ELEMENT","SHIRT","ORGAN","COUNTRY","CLEANING","COLUMN","NOSTALGIA","INSURANCE","POSTER","VECTOR","SMOKE","RAPUNZEL","PERISCOPE","VEHICLE","BIRD","ROUND","INSTRUMENT","PREDATORY","EDISON","GOLD","BEAR","ZODIAC SIGN","DANCE","BREAKFAST","MEDICINE","HORN","BANANA","ELECTRIC","PAPER","HILL","CARROT","MILL","DETECTIVE","KING","COMPASS","FARMER","PRESCRIPTION","SNAKE","FISH","POPCORN","SLEEP","TREE","STRAWBERRY","WATER","PLANET","BANK","CAR","SMELL","WRITER","MONEY","DRESS","CIGARET","CAPTAIN","MOON","FIRE","MILK","JEWELRY","MEASURE","THEATER","ICE CREAM","SOUP","GROUND BEEF","BLOOD","GREEN","EDUCATION","SPORT","HAIR","TREE","INDUSTRY","STAR","MUTATION","CHEAP","BIKE","TRAVEL","ARISTOTLE","JOB","CHEF","FITNESS","PYTHAGORAS","PAINTBRUSH","INVESTMENT","TELESCOPE","MATHS","EXPERIMENT","EYE","BRAZIL","MOLECULE","MOZART","TRAVEL","NUMBER","SUMMER"};
    public string[] ing_cevaplar = { "VASE","SHAMPOO","SIREN","WATCH","ENVELOPE","STOCK","WATCH","SHIP","COBRA","GROOM","JOURNAL","MILK","PADDLE","RADIO","HAMBURGER","LENS","LOAN","METER","DIRECTION","PAINTER","ENERGY","TREE","PAW","BISHOP","LAMP","CARROT","BLOOD","GOLD","NECKLACE","PLANE","MIRROR","FIRE","CASE","TRAP","EDUCATION","BED","NAIL","CHILD","ACORN","POLE","DESSERT","PHONE","PILLOW","HAIR","FISH","TIE","MOON","ASIA","SUMMER","CAMEL","SNOW","DESSERT","FIRE","DONATION","VENICE","DIAMOND","MUMMY","CHAIR","BEE","COCOON","BICYCLE","GUARD","YELLOW","TRAVEL","ABROAD","PINE","TESLA","KNIGHT","BREATH","BLOOD","HEADLINE","STAMP","WEDDING","MOVIE","CLOUD","TUNE","RESTAURANT","TOMATO","FRAME","DIG","TUXEDO","DIVER","NIGHTGOWN","POTION","PENCIL","IGLOO","DESERT","SNOWBALL","ANGLE","BABY","LADDER","PAN","CAMP","ATOM","HOLIDAY","UNIVERSE","TEA","HOUSE","COAT","JOKE","MAP","STAMP","SLY","COAL","INDUSTRY","BALLOON","LEAF","VANILLA","LACES","COAT","VENICE","MAKEUP","CHIPS","UMBRELLA","STORM","VIOLIN","SERVE","CANDLE","PENNYBANK","GEOMETRY","PLANE","PYRAMID","SUGAR","PLATE","EXHIBITION","CINEMA","EXPERIMENT","MOVIE","PLANT","GAS","RADIATION","NEWTON","CHANCE","JOCKEY","LEGEND","SPACE","PI","SEED","BANK","WITCH","PARTY","LAVA","GEAR","PRODUCT","FEAR","CHINA","GOLD","HANGER","KIDNEY","KENYA","HYGIENE","STRUCTURE","GRAMOPHONE","POLICY","WALL","DIRECTION","FIRE","TALE","SUBMARINE","CAR","EAGLE","WHEEL","VIOLIN","TIGER","LIGHT","TREASURE","PANDA","ARIES","TANGO","OMELET","DOCTOR","GOAT","MONKEY","OUTLET","PEN","MOUNTAIN","RABBIT","WHEAT","EVIDENCE","THRONE","NORTH","HARVEST","PHARMACY","COBRA","DOLPHIN","CINEMA","BED","LEAF","JAM","GLASS","MARS","INTEREST","GEAR","PERFUME","NOVEL","WALLET","FABRIC","SMOKE","SHIP","SATALLITE","SPARK","COW","EARRING","RULER","STAGE","CONE","SOAP","MEATBALL","VEIN","NATURE","SCHOOL","GOLF","COMB","FOREST","FACTORY","SUN","EVOLUTION","DISCOUNT","PEDAL","PASSPORT","PHILOSOPHER","CV","KITCHEN","BODY","MATHS","PALETTE","MONEY","PLANET","EQUATION","SCIENCE","ORGAN","SAMBA","CHEMISTRY","COMPOSITION","HOTEL","SEVEN","HOTEL"};
    public string[] ing_ekran = {"EIDVAXMSEKOP","SDEHAMAEMPOZIQO","ASIQDREMITUNEL","EWQAZTICALEMH","ZENQAIVTELUOMPJEI","CASTEOZQCEKIPE","AWZAETBLOCHQUN","CESQHTPEINPUM","MACHOTYBPRATU","AGARBEOTOMLUCPE","JDOAIOUMANERNAL","ADEMCKILZEKUP","TPAUDNDCLEZAP","CERTAYDUIKLPO","HILAMCBEUZRYGUER","NALCETNUSYKL","CELORUDAUNKLUC","ZMCADEUTKELRUYA","DIARTRCEBNEUCTILOZN","CUPATIUNLITKEMOR","EDNVECRUGLYZPAT","ATRQDEBENYUL","NEUYPCKACWELAZ","AZTBCISHNOMPULOZ","TLUAYMUPMONEL","NECYAURKIROAT","TEBYLNOMOCZDI","ZEGYOTMALICDECK","NMEUCVKTLAZCNEIP","CAKPRLYUAINPLESR","ZAMVIARYKROLNEZRT","SUYBEFIDRCEYKP","CMITAUSAELCNK","VITRCAKEAYULPOV","CEYDVUVCENAZTIKLONU","NKUTBCAETDUPL","JEZUNAKDIULYL","KACHVIJSULED","EAYCUDOVPRLN","APXCOJEYLTQEU","YAKODAEJSUXSENRIT","TPTEHKCOYNEXIT","PIBLILNEUOYCXOW","XUHAPNEIYRKOL","TFEYINTSYAKHUP","ZERATYJOPLIE","NEMXODOEYQN","ENUARDSERIOYAPQ","WASUIMEQMTNER","ECPVATMUEYIL","CSITNEOYWPJA","UDEYASYUSELROLET","EVUFAICRIEYIK","JUDOKUNAATIOZEN","AVKEBUNXZICYEP","UDIZAXJEMYOKNLD","PMAYZUMRIMUY","CKIUHZADIRAZC","KOXNBAOJEZEIT","CBYOLCTOTOERNF","LEBZIAJCYXCULNEK","GPTKUEARISODN","BRIYEQLALKOJZEDW","ATLERXAYAVLELCUZ","AXBYRIOZAELDP","APUKIJNZEUYT","ZTAXYEUSPLABAQ","UKEBNIZGAHPCT","BATVREKNALTUHIP","CBEALONJORCXD","BIHAENTADYLIQNJEXA","STAZUMYXRPOOL","WXIZEDYDJINUGKLP","ECMGOLVIZKREP","JACLXOGEZUKPD","TVBEJUYNPEJXK","ARBUESPTAXURZAENCKT","CUTOKMELAZTOJP","UFLRJXKANMZETY","KUIDNAIZUGCELY","ATEUNCXEZYDOBK","CDAIYVLEZUKR","ANITEXGHTGOYZWIN","XEPCOATYIIONIZ","KAPVEZONXCYUIL","YITGELYOZOKPXE","APDEYSUERKXCT","RSZNOUDXWBECALYL","BAXIZNEGLYUET","DEBNYAZBUKYXL","MLAZDUDEQLERS","XTEPQAZEKNAL","BTCEAYMZXOPN","KRIALCTZOKMI","ERHXOUPELKIDAZY","BEUTNKLIVEXRJSYE","KOLTABYKEZXA","XHJOTUSKECSAP","BNCIOZLDXAUHT","EJRODKEUZEXKP","JEXIMZAYEUPTIZ","ESLZOTXARMACPEY","VISOCLEUTKAYQN","PECAXOZLAYINUL","IANXDZUSKJETRLPOYE","BIKAYLUELOZOTNLM","LBAEXHZAKAFLTU","EVCANOZILALUAT","TULXAYCJEZKOXIS","RACUWOIANTEY","NUVXEZONATICETY","UMTAKLEQUYPCEL","NUCAXHEKITPOSZE","XOUEMJOBRXELULZA","BUSAJTEOGRLMOX","PEVKIJOEQLEIZBON","NSEUCIXRVTEKLO","CXAJZNGOEDYLKE","XPJEKNBONYBALXINK","KIGEJOMYEZTXEVRBOY","BPIDLRANYBECXU","PUYORAEKMIZD","LOSCEUGZAEYRAK","PJUXLAYBAKZTE","BEYXHINZBIPUTKIOJN","OQCIXYNUEKMZA","QEYXUPEARLIMEPZNT","CAYMUTOKVIZEP","CEPOQLAENZXOT","KOXIGYAESUZ","BREXAJPUDIYKATIOZN","ZONAEPWPTOLUN","EXCAKHAENUCZE","EXJOECQUKEZAYID","CLIEBGYQEZNUDX","AXESUPHAKCYET","BAYPTIEVAKU","FXOASELYREUMD","LEBXAUNOKXEG","TWOIPTCEZHOK","LEPXAUREZTOYUN","RELOAUVZAQUT","VUGYELATIRMIZ","IPELROYEDUCOT","NEFIEYLOUATIR","BCOKHLEINTAR","CEGXOTLUDAJK","YEHQAZJONGTEUR","IKXAIULDNEZOYT","MOKREAVLENYZA","EHAYUGIBEZNEJ","OSEZTNURUCXTUREAL","GRTAYMJEOPZHOZNXE","TAPVOXELUICZY","UEWEAXOLZAL","UDOIRECYATIKOXN","KOFAIERZXETA","KITOZAULCXEBT","LUSEUBXMAKYRINTE","ZECNXAULROP","YEXKUZAGLCEAB","PUWXOHELAEZL","KVEIUCOLIZPNTU","YLXOTAIYGEZBR","VULIAGEHUTXPNE","TORCEBANXSUZREYL","KUPIAENXDUAC","PXAKRUBILEZSN","VTECABSUNKGOL","ZOUMIXKEYALEUT","KEDYONUCTZOZRI","PALEGJOXNAETIY","JIKMBULONKETZAY","KOZUJCATYLEPOT","APIOZENJYUC","EPMEJOZCUNTAGKIN","YERAXZBUBIOTIJ","ALEWUYHEXAOZT","LEYVIUOJDEXNCZPE","LATEHIXRUOJNZEP","PUNCOJERTAKZIH","OHEJUARLVECSIT","CPAHUALRMNACEYOT","PCYOJNBLTRHXA","CADEBOJULPYHXION","ACEIUYNTEPZMAL","UIBETYAKDXOC","KULBEUJAZIFOP","AUJITACKOZEM","YEJUGELUATSESUP","VKEUMLAORCUS","CIUNTYEKRELSUTOP","VUGYELATIRMIZ","ZAPLERIFULCMTEY","ANUOKEJVECLUP","BAWUALOLEIYTJ","UYFAJNEBURLICEX","AXISELUMOYKEJ","NISEHUYAIZUPL","ESAYEJUTALOLIXTE","USENOPACREKIT","TECOYZUWKAP","KEJARIRINOSUGL","KIRAJULCEYOR","ASUYTACOGQEK","JUCSEOZUNKEP","KISUOJATUPEN","MJEZATOBALKUL","ZUVTEZIJONK","ZKUNAZTCURDEP","PSUYCEHUTOKJOLH","KGUYOZPALJEF","ACYZOTUMKBJE","ZUFCOQREJSKAT","KOFYAPECTZONRIYJ","ZUSEUKCONLEJ","KEVZOCELUZTIPOQUN","KUJDEXISCOYUPNAT","NOPTEJDAXKOLUZ","KUPACSESPJORZOTEN","KEPHIYLOJSOZUPHETR","KUJCOZECZILEN","EKIYAVTCEHEZAIN","KEBANODIYEL","UXMIATOHESYLEP","UPTACKYULETOTEZ","KUMCAOLNEYIPL","NEXPILAKNEUAT","ZEQYUJATIONXEP","SECULIEYNCEZAK","KOLURJIGACNTEH","PEYASAJMEBUAK","KUCAHEYUMISTJRIYEZ","ACKOMPEOJSOITICOUN","EHOJUTEKALUP","ASIYEUVEKNOJ","AHUOLTNEPLEK"};
    
    public int soru_Sayisi()
	{
        return sorular.Length;
	}

}
