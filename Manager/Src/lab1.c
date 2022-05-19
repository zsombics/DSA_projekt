//
// Created by zsomb on 4/20/2022.
//

#include "../Header/lab1.h"
#include "../Header/menu1.h"

void SetUpStaffData() {
    StaffArray *staffArray;
    createStaffArray(&staffArray, 30);
    Staff *staff1;
    BirthDate birthDate1 = {1977, 8, 3};
    createStaff(&staff1);
    SetStaffData(staff1, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate1);
  //  printStaff(staff1, CON);
    addNewStaff(staffArray, staff1);
    Staff *staff2;
    BirthDate birthDate2 = {1977, 8, 3};
    createStaff(&staff2);
    SetStaffData(staff2, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate2);
    addNewStaff(staffArray, staff2);
    Staff *staff3;
    BirthDate birthDate3 = {1977, 8, 3};
    createStaff(&staff3);
    SetStaffData(staff3, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate3);
    addNewStaff(staffArray, staff3);
    Staff *staff4;
    BirthDate birthDate4 = {1977, 8, 3};
    createStaff(&staff4);
    SetStaffData(staff4, " Dr. Czink Elek ", RADIOLOGUS, BALESET, birthDate4);
    addNewStaff(staffArray, staff4);
    Staff *staff5;
    BirthDate birthDate5 = {1977, 8, 3};
    createStaff(&staff5);
    SetStaffData(staff5, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate5);
    addNewStaff(staffArray, staff5);
   // printf("%i",staffposition);
  // printStaffArray(staffArray, CON);
   // printf("%i",staffposition);
    PatientArray *patientArray;
    createPatientArray(&patientArray, 25);
    Patient *patient1;
    createPatient(&patient1);
    SetPatientData(patient1, "Kantor Anna", GYEREK, FEMALE_, BALESET, INTENZIV, staffArray);
    addNewPatient(patientArray, patient1);
    Patient *patient2;
    createPatient(&patient2);
    SetPatientData(patient2, "Kis Mihaly", FELNOTT, MALE_, ALLERGIA, INTENZIV, staffArray);
    addNewPatient(patientArray, patient2);
    //printPatientArray(patientArray, CON);
    printf("              Udvozlunk a korhazban!\n"
           "Kerlek valaszd ki a muveletet, amit el szeretnel vegezni\n");
    //szoveg
    printf("  Muveletek:\n");
    printf("1.Irasd ki a korhazi dolgozok(orvosok) listajat!\n");
    printf("2.Uj beteg hozzaadasa\n");
    printf("3.Napi gyogyszeradag beadasa\n");
    printf("4.Heti gyogyszeradag feltoltese\n");
    printf("0.Nem szeretnek tobb muveletet vegezni\n");
    int valtozo;
    freopen(CON, "r", stdin);
    scanf("%d",&valtozo);
    while(valtozo!=0){
            if(valtozo==1){
                menu1(staffArray);
                printf("Szeretnel uj muveletet vegezni? Ha igen akkor melyiket? Ha nem akkor gepeld be a '0'-t:");
                scanf("%i",&valtozo);
                printf(" %i",valtozo);
            }
            if(valtozo==2){
                Patient *patient;
                createPatient(&patient);
                char nev[20];
                char knev[20];
                freopen(CON, "r", stdin);
                printf("Add meg a csalad nevet:");
                scanf("%s",nev);
                printf("\nAdd meg a vezetek nevet:");
                scanf("%s",knev);
                strcat(nev," ");
                strcat(nev,knev);
                printf("Select a type:\n"
                       "1.FELNOTT\n"
                       "2.GYEREK\n"
                       "3.IDOS\n");
                int type;
                freopen(CON, "r", stdin);
                scanf("%i",&type);
                printf("Select gender:  \n"
                       "1.FEMALE,\n"
                       "2.MALE\n");
                int type1;
                scanf("%i",&type1);
                printf("Select illnes:"
                       "    \n1.BALESET\n"
                       "    2.TUDO_PROBLEMA,\n"
                       "    3.MENTALIS_PROBLEMA,\n"
                       "    4.SZIV_PROBLEMA,\n"
                       "    5.ALLERGIA\n");
                int type2;
                scanf("%i",&type2);
                printf("Select :"
                       "\n1.SULYOS,\n"
                       "2.INTENZIV,\n"
                       "3.ENYHE\n");
                int type3;
                scanf("%i",&type3);
                SetPatientData(patient, nev, type-1, type1-1, type2-1, type3-1, staffArray);
                addNewPatient(patientArray, patient);
                printf("Szeretnel uj muveletet vegezni? Ha igen akkor melyiket? Ha nem akkor gepeld be a '0'-t:");
                freopen(CON, "r", stdin);
                scanf("%d", &valtozo);
            }
        if(valtozo==3){
            printf("%i",numberOfPatient);
                for(int i=0;i<=numberOfPatient;i++){
                    dequeue(patientArray->patients[i]->medQueue);
                }
                 printf("Szeretnel uj muveletet vegezni? Ha igen akkor melyiket? Ha nem akkor gepeld be a '0'-t:");
                  freopen(CON, "r", stdin);
                  scanf("%d", &valtozo);
            }
        if(valtozo==4){
            printf("%i",numberOfPatient);
                for(int i=0;i<=numberOfPatient;i++){
                    enqueuefull(patientArray->patients[i]->medQueue,patientArray->patients[i]->illness);
                }
            printf("Szeretnel uj muveletet vegezni? Ha igen akkor melyiket? Ha nem akkor gepeld be a '0'-t:");
            freopen(CON, "r", stdin);
            scanf("%d", &valtozo);
            }
        if(valtozo==5){
                printPatientArray(patientArray,CON);
                printf("Szeretnel uj muveletet vegezni? Ha igen akkor melyiket? Ha nem akkor gepeld be a '0'-t:");
                freopen(CON, "r", stdin);
                scanf("%d", &valtozo);
            }
        }

}
