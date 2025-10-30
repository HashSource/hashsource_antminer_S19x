int __fastcall sub_5C6DC(int result)
{
  int v1; // r9
  int v2; // r6
  _BYTE **v3; // r4
  int v4; // r5
  int v5; // r2
  int v6; // r1
  int v7; // r3
  int v8; // r12
  int v9; // t1
  bool v10; // zf
  char *v11; // r6
  int v12; // r3
  int v13; // r3
  bool v14; // zf
  unsigned int v15; // r11
  _BYTE *v16; // r12
  unsigned int v17; // lr
  unsigned int v18; // r10
  unsigned int v19; // r0
  char v20; // r3
  unsigned int v21; // r6
  char v22; // r3
  int v23; // r2
  const char *v24; // r3
  int v25; // r1
  int v26; // r3
  char *v27; // r2
  char v28; // r3
  int v29; // r3
  int v30; // r7
  unsigned int v31; // r6
  char v32; // r10
  unsigned int v33; // r7
  bool v34; // cc
  int v35; // r3
  bool v36; // zf
  int v37; // r3
  int v38; // r10
  int v39; // r3
  int v40; // r2
  _BYTE *v41; // r7
  int v42; // r11
  int v43; // r0
  _BYTE *v44; // r10
  int v45; // r1
  int v46; // r1
  int v47; // r3
  char v48; // r3
  char v49; // r3
  int v50; // r3
  _BYTE *v51; // r0
  _BYTE *v52; // r1
  int v53; // r12
  int v54; // r1
  int v55; // r3
  int v56; // r3
  unsigned int v57; // r6
  struct tm *v58; // r0
  struct tm *v59; // r6
  __int64 v60; // r2
  int v61; // r0
  __int64 v62; // r0
  __int64 v63; // r2
  int v64; // [sp+Ch] [bp-40h] BYREF
  time_t v65[2]; // [sp+10h] [bp-3Ch] BYREF
  struct tm tp; // [sp+18h] [bp-34h] BYREF

  v1 = *(_DWORD *)(result + 4);
  v2 = result;
  v3 = *(_BYTE ***)(v1 + 84);
  v4 = (int)*v3;
  if ( *((_DWORD *)*v3 + 6)
    && !*(_BYTE *)(v4 + 31)
    && !*(_BYTE *)(v4 + 30)
    && !*(_BYTE *)(v4 + 29)
    && !*(_BYTE *)(v4 + 28) )
  {
    result = sub_5C498(*v3, "g\r");
  }
  v5 = (int)v3[46];
  v6 = *(_DWORD *)(v2 + 84);
  v7 = *(unsigned __int8 *)(v2 + 88);
  if ( *((_BYTE *)v3 + 56) == 111 )
  {
    v14 = v5 == 1;
    if ( v5 == 1 )
      v14 = v7 == 13;
    if ( v14 )
    {
      if ( v6 > 0 )
        goto LABEL_12;
      return result;
    }
    result = v5 + v6 - 1;
    if ( result > 0 )
    {
      if ( result > 16 )
        goto LABEL_75;
      v15 = *(_DWORD *)(v2 + 76);
      v16 = *(_BYTE **)(v2 + 72);
      v17 = *(_DWORD *)v4;
      v18 = *(_DWORD *)(v4 + 4);
      v19 = *(_DWORD *)&aV1320030221[4 * result + 16];
      if ( v15 < v19 )
        --v16;
      result = v15 - v19;
      if ( !(v17 | v18) || v17 + 0x80000000 > (unsigned int)&v16[0x80000000] )
        goto LABEL_36;
      v36 = result == v18;
      if ( result <= v18 )
        v36 = v16 == (_BYTE *)v17;
      if ( v36 )
      {
LABEL_36:
        *(_DWORD *)(v4 + 4) = result;
        *(_DWORD *)v4 = v16;
      }
    }
  }
  if ( v5 > 15 )
  {
LABEL_9:
    v3[46] = 0;
    return result;
  }
  if ( v6 > 0 )
  {
LABEL_12:
    result = v2 + 88;
    v8 = -87 - v2;
    while ( 1 )
    {
      v10 = v7 == 13;
      if ( v7 != 13 )
        v10 = v7 == 104;
      if ( v10 )
      {
        v5 = (int)v3[46];
      }
      else
      {
        v11 = (char *)v3 + v5;
        v3[46] = (_BYTE *)++v5;
        v11[56] = v7;
      }
      v10 = v7 == 111;
      v12 = v8 + result;
      if ( v10 && v5 == 1 )
      {
        *(_DWORD *)(v4 + 4) = 0;
        *(_DWORD *)v4 = 0;
        if ( v6 <= v12 )
        {
          v13 = *((unsigned __int8 *)v3 + 56);
          if ( v13 == 103 )
            return result;
LABEL_39:
          if ( v13 != 111 )
            goto LABEL_75;
          if ( v5 <= 15 )
            return result;
          if ( !*(_QWORD *)v4 )
          {
            v3[46] = (_BYTE *)(*(_DWORD *)v4 | *(_DWORD *)(v4 + 4));
            return (int)sub_394A0((__int16 *)v1, 2);
          }
          v26 = *(_DWORD *)(v4 + 12);
          v27 = (char *)v3 + v5;
          v27[57] = 0;
          v28 = v26 == -1 ? 54 : v26 + 48;
          v27[56] = v28;
          v29 = *((unsigned __int8 *)v3 + 56);
          v3[52] = 0;
          if ( v29 != 111 )
            goto LABEL_75;
          if ( !sub_5C09C((unsigned __int8 *)v3 + 57, v3 + 49) )
            goto LABEL_75;
          if ( !sub_5C09C((unsigned __int8 *)v3 + 59, v3 + 50) )
            goto LABEL_75;
          if ( !sub_5C09C((unsigned __int8 *)v3 + 61, v3 + 51) )
            goto LABEL_75;
          v30 = *((unsigned __int8 *)v3 + 63);
          if ( ((*_ctype_b_loc())[v30] & 0x800) == 0 )
            goto LABEL_75;
          if ( !sub_5C09C((unsigned __int8 *)v3 + 64, v3 + 48) )
            goto LABEL_75;
          if ( !sub_5C09C((unsigned __int8 *)v3 + 66, &v64) )
            goto LABEL_75;
          if ( !sub_5C09C((unsigned __int8 *)v3 + 68, v3 + 47) )
            goto LABEL_75;
          v31 = *((unsigned __int8 *)v3 + 70);
          v32 = *((_BYTE *)v3 + 71);
          if ( (unsigned int)v3[49] > 0x17 || (unsigned int)v3[50] > 0x3B )
            goto LABEL_75;
          v33 = v30 - 49;
          v34 = v33 > 6;
          if ( v33 <= 6 )
            v34 = (unsigned int)v3[51] > 0x3C;
          if ( v34
            || (unsigned int)(v3[48] - 1) > 0x1E
            || (unsigned int)(v64 - 1) > 0xB
            || (v35 = (int)v3[47], (unsigned int)v35 > 0x63)
            || !*(_DWORD *)(v1 + 76) && ((v31 >> 1) & 1) != (((v31 ^ 4) >> 2) & 1) )
          {
LABEL_75:
            v3[46] = 0;
            return (int)sub_394A0((__int16 *)v1, 2);
          }
          if ( (*((_BYTE *)v3 + 71) & 8) != 0 )
          {
            sub_64E00(5, "ARCRON: battery low");
            v35 = (int)v3[47];
          }
          if ( v35 <= 97 )
          {
            v35 += 100;
            v3[47] = (_BYTE *)v35;
          }
          v37 = v35 + 1900;
          v3[47] = (_BYTE *)v37;
          if ( v37 >= 2096 )
            sub_64E00(5, "ARCRON: fix me!  EITHER YOUR DATE IS BADLY WRONG or else I will break soon!");
          v38 = v32 & 7;
          *((_BYTE *)v3 + 40) = 0;
          v39 = *(_DWORD *)(v4 + 8);
          if ( v38 == 3 )
          {
            if ( v39 != 3 )
              sub_64E00(5, "ARCRON: signal acquired");
          }
          else if ( v38 != v39 )
          {
            sub_64E00(5, "ARCRON: signal lost");
            *((_BYTE *)v3 + 40) = 3;
            *(_DWORD *)(v4 + 8) = v38;
            v3[46] = 0;
            return (int)sub_394A0((__int16 *)v1, 3);
          }
          v40 = *(_DWORD *)(v1 + 76);
          v41 = v3[47];
          *(_DWORD *)(v4 + 8) = v38;
          v42 = v64;
          v43 = (int)v3[48];
          if ( !v40 )
          {
            v44 = (_BYTE *)(v43 + *(_DWORD *)&aV1320030221[4 * v64 + 80]);
            v3[48] = v44;
            if ( ((unsigned __int8)v41 & 3) == 0 )
            {
              sub_8BB9C(v41, 100);
              if ( v45 || (sub_8BB9C(v41, 400), !v46) )
              {
                if ( v42 > 2 )
                  v3[48] = v44 + 1;
              }
            }
            if ( (v31 & 2) != 0 )
            {
              v47 = (int)(v3[49] - 1);
              v3[49] = (_BYTE *)v47;
              if ( v47 < 0 )
              {
                v56 = (int)v3[48];
                v3[49] = (_BYTE *)(&dword_14 + 3);
                v3[48] = (_BYTE *)--v56;
                if ( v56 < 0 )
                  goto LABEL_118;
              }
            }
            v48 = *((_BYTE *)v3 + 768);
LABEL_109:
            if ( *(_DWORD *)(v4 + 12) == -1 )
            {
              *(_BYTE *)(v1 + 95) = -4;
              goto LABEL_115;
            }
LABEL_111:
            if ( (v48 & 4) != 0 )
              v49 = -5;
            else
              v49 = -4;
            *(_BYTE *)(v1 + 95) = v49;
LABEL_115:
            v50 = *((unsigned __int8 *)v3 + 768);
            v51 = *(_BYTE **)v4;
            v52 = *(_BYTE **)(v4 + 4);
            if ( *(_DWORD *)(v4 + 36) != v50 )
              *(_DWORD *)(v4 + 36) = v50;
            v3[58] = v51;
            v3[59] = v52;
            if ( sub_39CF8(v3) )
            {
              sub_41F44(v1 + 16, (const char *)v3 + 56);
              return sub_39D44(v1);
            }
LABEL_118:
            v3[46] = 0;
            return (int)sub_394A0((__int16 *)v1, 6);
          }
          if ( ((_BYTE)v3[192] & 1) != 0 )
          {
            memset(&tp.tm_wday, 0, 20);
            v53 = (int)v3[49];
            v54 = (int)v3[50];
            v55 = (int)v3[51];
            tp.tm_year = (int)(v41 - 1900);
            tp.tm_mon = v64 - 1;
            tp.tm_mday = v43;
            tp.tm_hour = v53;
            tp.tm_min = v54;
            tp.tm_sec = v55;
            switch ( v40 )
            {
              case 2:
                goto LABEL_137;
              case 3:
                v57 = v31 & 3;
                if ( v57 )
                {
                  if ( v57 > 2 )
                    tp.tm_isdst = 1;
                  else
                    tp.tm_isdst = -1;
                }
                break;
              case 1:
LABEL_137:
                tp.tm_isdst = v31 & 2;
                break;
              default:
                return sub_64E00(5, "ARCRON: Invalid mode %d", v40);
            }
            v65[0] = mktime(&tp);
            v58 = gmtime(v65);
            v59 = v58;
            if ( !v58 )
            {
              v3[46] = 0;
              return (int)sub_394A0((__int16 *)v1, 3);
            }
            v60 = *(_QWORD *)&v58->tm_mday;
            v61 = v58->tm_year + 1900;
            v3[47] = (_BYTE *)v61;
            v64 = HIDWORD(v60) + 1;
            LODWORD(v62) = sub_6EC68(v61, HIDWORD(v60) + 1, v60);
            HIDWORD(v62) = v59->tm_hour;
            LODWORD(v63) = v59->tm_min;
            HIDWORD(v63) = v59->tm_sec;
            *((_QWORD *)v3 + 24) = v62;
            *((_QWORD *)v3 + 25) = v63;
          }
          else
          {
            v3[48] = (_BYTE *)sub_6EC68(v41, v64, v3[48]);
          }
          v48 = *((_BYTE *)v3 + 768);
          if ( !*(_DWORD *)(v1 + 76) || v38 != 3 || ((_BYTE)v3[192] & 2) == 0 )
            goto LABEL_109;
          goto LABEL_111;
        }
      }
      else
      {
        if ( v6 <= v12 )
          break;
        if ( v5 > 15 )
          goto LABEL_38;
      }
      v9 = *(unsigned __int8 *)++result;
      v7 = v9;
    }
  }
  if ( !v5 )
    return result;
LABEL_38:
  v13 = *((unsigned __int8 *)v3 + 56);
  if ( v13 != 103 )
    goto LABEL_39;
  if ( v5 > 2 )
  {
    v20 = *((_BYTE *)v3 + 58);
    if ( (v20 & 0x70) == 0x30 )
    {
      v21 = v20 & 0xF;
      if ( v21 <= 5 )
      {
        v22 = *((_BYTE *)v3 + 57);
        if ( (v22 & 0x70) == 0x30 )
        {
          if ( (v22 & 0x7F) == 0x33 )
          {
            if ( *(_DWORD *)(v4 + 16) < (unsigned int)current_time )
            {
              sub_5F724(v65);
              sub_63138(v65[0]);
              *(_DWORD *)(v4 + 16) = current_time + 65 - LOBYTE(tp.tm_hour);
              dword_106F10 = 0;
              dword_106F14 = 0;
            }
            dword_106F10 += v21;
            result = sub_8B908(dword_106F10, ++dword_106F14);
            dword_106F18 = result;
          }
          else if ( *(_DWORD *)(v4 + 24) )
          {
            v23 = dword_106F18;
            v10 = dword_106F18 == -1;
            *(_DWORD *)(v4 + 12) = dword_106F18;
            if ( v10 )
              v24 = "UNKNOWN, will use clock anyway";
            else
              v24 = v23 > 2 ? "OK, will use clock" : "TOO POOR, will not use clock";
            result = sub_64E00(5, "ARCRON: sync finished, signal quality %d: %s", v23, v24);
            v25 = *(_DWORD *)(v4 + 12);
            *(_DWORD *)(v4 + 24) = 0;
            dword_106F18 = 0;
            dword_106F10 = 0;
            dword_106F14 = 0;
            if ( v25 <= 2 )
              *(_DWORD *)(v4 + 20) = current_time + 1620;
          }
          goto LABEL_9;
        }
      }
    }
  }
  return result;
}
