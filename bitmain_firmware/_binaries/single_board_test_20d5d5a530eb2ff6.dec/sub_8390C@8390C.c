int __fastcall sub_8390C(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v7; // r3
  bool v8; // zf
  int result; // r0
  int v10; // r4
  bool v11; // zf
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r2
  _DWORD *v19; // r3
  int v20; // lr
  int v21; // r7
  int v22; // r6
  int v23; // r7
  int v24; // r6
  int v25; // lr
  _DWORD *v26; // r3
  int v27; // t1
  int v28; // r1
  int v29; // r6
  int v30; // r4
  int v31; // r6
  int v32; // r4
  int v33; // r1
  int v34; // r6
  int v35; // r5
  int v36; // r0
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r2
  int v41; // r7
  _DWORD *v42; // r2
  int v43; // r6
  int v44; // r5
  _DWORD *v45; // r3
  int v46; // t1
  _DWORD *v47; // r1
  int v48; // r7
  int v49; // r6
  int v50; // r5
  int v51; // r6
  int v52; // r5
  int v53; // lr
  int v54; // t1
  _DWORD *v55; // r7
  int v56; // r1
  int v57; // r5
  int v58; // r4
  int v59; // r5
  int v60; // r4
  int v61; // r1
  int v62; // [sp+Ch] [bp-8h] BYREF

  switch ( a2 )
  {
    case 3:
      if ( !a4 )
      {
        v40 = 3778;
        goto LABEL_74;
      }
      v35 = sub_832EC(a4);
      if ( v35 )
      {
        v36 = sub_D9AE4();
        if ( sub_85510(a1, (char *)&loc_40006 + 1, v36, 0, v35) )
        {
          sub_DA240(*(_DWORD *)(a1[48] + 4));
          *(_DWORD *)(a1[48] + 4) = v35;
          return 1;
        }
        else
        {
          sub_D0048(20, 133, 394, "ssl/s3_lib.c", 3788);
          sub_DA240(v35);
          return 0;
        }
      }
      else
      {
        sub_D0048(20, 133, 65, "ssl/s3_lib.c", 3783);
        return 0;
      }
    case 4:
      if ( a4 )
      {
        if ( sub_C59B8(a4) )
        {
          result = sub_C6284();
          v62 = result;
          if ( result )
            return sub_A2948(a1 + 91, a1 + 90, &v62, 1);
        }
        else
        {
          sub_D0048(20, 133, 124, "ssl/s3_lib.c", 3817);
          return 0;
        }
      }
      else
      {
        v40 = 3812;
LABEL_74:
        sub_D0048(20, 133, 67, "ssl/s3_lib.c", v40);
        return 0;
      }
      return result;
    case 6:
      sub_D0048(20, 133, 66, "ssl/s3_lib.c", 3798);
      return 0;
    case 14:
      v34 = a1[38];
      if ( v34 || (v34 = sub_10BFCC(), (a1[38] = v34) != 0) )
      {
        if ( sub_10BD3C(v34, a4) )
          return 1;
        sub_D0048(20, 133, 65, "ssl/s3_lib.c", 3973);
        return 0;
      }
      else
      {
        sub_D0048(20, 133, 65, "ssl/s3_lib.c", 3968);
        return 0;
      }
    case 54:
      a1[77] = a4;
      return 1;
    case 58:
    case 59:
      result = 80;
      if ( a4 )
      {
        if ( a3 == 80 )
        {
          if ( a2 == 59 )
          {
            v41 = *(_DWORD *)(a4 + 4);
            v42 = (_DWORD *)a4;
            v43 = *(_DWORD *)(a4 + 8);
            v44 = *(_DWORD *)(a4 + 12);
            a1[78] = *(_DWORD *)a4;
            a1[79] = v41;
            a1[80] = v43;
            a1[81] = v44;
            v46 = *(_DWORD *)(a4 + 16);
            v45 = (_DWORD *)(a4 + 16);
            v47 = (_DWORD *)a1[82];
            v48 = v45[1];
            v49 = v45[2];
            v50 = v45[3];
            *v47 = v46;
            v47[1] = v48;
            v47[2] = v49;
            v47[3] = v50;
            v51 = v45[6];
            v52 = v45[7];
            v53 = v45[4];
            v47[5] = v45[5];
            v47[6] = v51;
            v47[4] = v53;
            v47[7] = v52;
            v54 = v42[12];
            v42 += 12;
            v55 = (_DWORD *)a1[82];
            v56 = v42[3];
            v57 = v42[1];
            v58 = v42[2];
            v55[8] = v54;
            v55[9] = v57;
            v55[10] = v58;
            v55[11] = v56;
            v59 = v42[5];
            v60 = v42[6];
            v61 = v42[7];
            v55[12] = v42[4];
            v55[13] = v59;
            v55[14] = v60;
            v55[15] = v61;
          }
          else
          {
            v16 = a1[79];
            v17 = a1[81];
            v18 = a1[80];
            *(_DWORD *)a4 = a1[78];
            *(_DWORD *)(a4 + 4) = v16;
            *(_DWORD *)(a4 + 8) = v18;
            *(_DWORD *)(a4 + 12) = v17;
            v19 = (_DWORD *)a1[82];
            v20 = v19[1];
            v21 = v19[2];
            v22 = v19[3];
            *(_DWORD *)(a4 + 16) = *v19;
            *(_DWORD *)(a4 + 20) = v20;
            *(_DWORD *)(a4 + 24) = v21;
            *(_DWORD *)(a4 + 28) = v22;
            v23 = v19[6];
            v24 = v19[7];
            v25 = v19[5];
            *(_DWORD *)(a4 + 32) = v19[4];
            *(_DWORD *)(a4 + 40) = v23;
            *(_DWORD *)(a4 + 36) = v25;
            *(_DWORD *)(a4 + 44) = v24;
            v26 = (_DWORD *)a1[82];
            v27 = v26[8];
            v26 += 8;
            v28 = v26[3];
            v29 = v26[1];
            v30 = v26[2];
            *(_DWORD *)(a4 + 48) = v27;
            *(_DWORD *)(a4 + 52) = v29;
            *(_DWORD *)(a4 + 56) = v30;
            *(_DWORD *)(a4 + 60) = v28;
            v31 = v26[5];
            v32 = v26[6];
            v33 = v26[7];
            *(_DWORD *)(a4 + 64) = v26[4];
            *(_DWORD *)(a4 + 68) = v31;
            *(_DWORD *)(a4 + 72) = v32;
            *(_DWORD *)(a4 + 76) = v33;
          }
          return 1;
        }
        else
        {
          sub_D0048(20, 133, 325, "ssl/s3_lib.c", 3841);
          return 0;
        }
      }
      return result;
    case 64:
      a1[85] = a4;
      return 1;
    case 65:
      a1[86] = a3;
      return 1;
    case 78:
      v15 = a1[127];
      result = 1;
      a1[112] = a4;
      a1[127] = v15 | 0x20;
      return result;
    case 79:
      v14 = a1[116];
      a1[127] |= 0x20u;
      CRYPTO_free(v14, "ssl/s3_lib.c", 3890);
      a1[116] = 0;
      if ( !a4 )
        return 1;
      if ( strlen((const char *)a4) <= 0xFF && *(_BYTE *)a4 )
      {
        v37 = sub_E9E3C(a4, "ssl/s3_lib.c", 3898);
        v38 = 3899;
        a1[116] = v37;
        if ( v37 )
          return 1;
        goto LABEL_70;
      }
      sub_D0048(20, 133, 357, "ssl/s3_lib.c", 3895);
      return 0;
    case 80:
      a1[126] = a3;
      return 1;
    case 81:
      v12 = a1[125];
      a1[115] = sub_82178;
      if ( v12 )
        CRYPTO_free(v12, "ssl/s3_lib.c", 3907);
      v13 = sub_E9E3C(a4, "ssl/s3_lib.c", 3908);
      a1[125] = v13;
      if ( v13 )
        return 1;
      v38 = 3909;
LABEL_70:
      sub_D0048(20, 133, 68, "ssl/s3_lib.c", v38);
      return 0;
    case 82:
      v7 = a1[38];
      v8 = a3 == 0;
      if ( !a3 )
        v8 = v7 == 0;
      if ( v8 )
        goto LABEL_6;
      *(_DWORD *)a4 = v7;
      return 1;
    case 83:
      sub_10BFDC(a1[38], X509_free);
      result = 1;
      a1[38] = 0;
      return result;
    case 88:
      if ( a3 )
        return sub_84730(0, a1, a4);
      else
        return sub_84680(0, a1, a4);
    case 89:
      if ( a3 )
        return sub_847EC(0, a1, a4);
      else
        return sub_84780(0, a1, a4);
    case 91:
      return sub_A2948(a1 + 91, a1 + 90, a4, a3);
    case 92:
      return sub_A2A3C(a1 + 91, a1 + 90, a4);
    case 97:
      return sub_A45B8(a1[48], a4, a3, 0);
    case 98:
      return sub_A457C(a1[48], a4, 0);
    case 101:
      return sub_A45B8(a1[48], a4, a3, 1);
    case 102:
      return sub_A457C(a1[48], a4, 1);
    case 104:
      v10 = a1[48];
      CRYPTO_free(*(_DWORD *)(v10 + 200), "ssl/s3_lib.c", 4392);
      v11 = a3 == 0;
      if ( a3 )
        v11 = a4 == 0;
      *(_DWORD *)(v10 + 200) = 0;
      *(_DWORD *)(v10 + 204) = 0;
      if ( v11 )
        return 1;
      if ( a3 > 0xFF )
        return 0;
      v39 = sub_E9E68(a4, a3, "ssl/s3_lib.c", 4399);
      *(_DWORD *)(v10 + 200) = v39;
      if ( !v39 )
        return 0;
      *(_DWORD *)(v10 + 204) = a3;
      return 1;
    case 105:
      return sub_850E8(0, a1, a3);
    case 106:
      return sub_85354(a1[48], a4, 0, a3);
    case 107:
      return sub_85354(a1[48], a4, 1, a3);
    case 115:
LABEL_6:
      result = 1;
      *(_DWORD *)a4 = *(_DWORD *)(*(_DWORD *)a1[48] + 8);
      return result;
    case 116:
      return sub_84800(a1[48], a4);
    case 117:
      return sub_84928(a1[48], a3);
    case 118:
      result = 1;
      *(_DWORD *)(a1[48] + 12) = a3;
      return result;
    case 127:
      return a1[86];
    case 128:
      result = 1;
      *(_DWORD *)a4 = a1[84];
      return result;
    case 129:
      result = 1;
      *(_DWORD *)a4 = a1[85];
      return result;
    case 137:
      return sub_85388(a1[48], a4, 0);
    case 138:
      return sub_85388(a1[48], a4, 1);
    default:
      return 0;
  }
}
