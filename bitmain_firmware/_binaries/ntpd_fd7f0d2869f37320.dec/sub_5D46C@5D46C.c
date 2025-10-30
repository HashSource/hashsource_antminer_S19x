int __fastcall sub_5D46C(int result)
{
  int v1; // r12
  int v2; // lr
  int v3; // r8
  int v4; // r9
  int v5; // r4
  int *v6; // r5
  int *v7; // r3
  int v8; // t1
  int v9; // r2
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // t1
  bool v15; // zf
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r2
  char v20; // r3
  int v21; // r3
  const unsigned __int16 **v22; // r0
  int v23; // r10
  unsigned int v24; // r6
  char v25; // r9
  unsigned int v26; // r3
  unsigned int v27; // r10
  bool v28; // cc
  int v29; // r3
  char v30; // r3
  char v31; // r1
  unsigned int v32; // r8
  int v33; // r2
  const char *v34; // r3
  int v35; // r1
  bool v36; // zf
  int v37; // r3
  unsigned int v38; // r12
  unsigned int v39; // r1
  unsigned int v40; // r3
  bool v41; // zf
  int v42; // r3
  int v43; // r9
  int v44; // r3
  int v45; // r10
  int v46; // r10
  int v47; // r11
  int v48; // r9
  int v49; // r1
  int v50; // r1
  int v51; // r3
  char v52; // r3
  char v53; // r3
  int v54; // r3
  int v55; // r0
  int v56; // r1
  int v57; // r3
  int v58; // r6
  struct tm *v59; // r0
  struct tm *v60; // r6
  int v61; // r3
  int tm_mday; // r2
  int v63; // r0
  int v64; // r0
  int tm_min; // r2
  int tm_sec; // r3
  int v67; // r10
  int v68; // r0
  int v69; // [sp+4h] [bp-40h] BYREF
  time_t v70[2]; // [sp+8h] [bp-3Ch] BYREF
  struct tm s; // [sp+10h] [bp-34h] BYREF

  v3 = *(_DWORD *)(result + 4);
  v4 = result;
  v5 = *(_DWORD *)(v3 + 84);
  v6 = *(int **)v5;
  if ( *(_DWORD *)(*(_DWORD *)v5 + 24) )
  {
    v7 = v6 + 8;
    while ( 1 )
    {
      v8 = *((unsigned __int8 *)v7 - 1);
      v7 = (int *)((char *)v7 - 1);
      if ( v8 )
        break;
      if ( v7 == v6 + 7 )
      {
        result = sub_5D260(*(_DWORD *)v5, "g\r");
        break;
      }
    }
  }
  v9 = *(_DWORD *)(v5 + 184);
  v10 = *(unsigned __int8 *)(v4 + 88);
  v11 = *(_DWORD *)(v4 + 84);
  if ( *(_BYTE *)(v5 + 56) == 111 )
  {
    v36 = v10 == 13;
    if ( v10 == 13 )
      v36 = v9 == 1;
    if ( v36 )
    {
      v9 = 1;
      goto LABEL_11;
    }
    v37 = v9 + v11 - 1;
    if ( v37 > 0 )
    {
      result = *(_DWORD *)(v4 + 72);
      v38 = *(_DWORD *)(v4 + 76);
      if ( v37 > 16 )
        goto LABEL_54;
      v2 = *v6;
      v39 = v6[1];
      v40 = v38 - *(_DWORD *)&aV1320030221[4 * v37 + 16];
      if ( v40 > v38 )
        --result;
      v1 = v39 | v2;
      if ( !(v39 | v2) )
        goto LABEL_76;
      v1 = v2 + 0x80000000;
      if ( v2 + 0x80000000 > result + 0x80000000 )
        goto LABEL_76;
      v41 = v40 == v39;
      if ( v40 <= v39 )
        v41 = result == v2;
      if ( v41 )
      {
LABEL_76:
        *v6 = result;
        v6[1] = v40;
        v9 = *(_DWORD *)(v5 + 184);
      }
    }
  }
  if ( v9 > 15 )
  {
LABEL_8:
    *(_DWORD *)(v5 + 184) = 0;
    return result;
  }
  v11 = *(_DWORD *)(v4 + 84);
LABEL_11:
  if ( v11 > 0 )
  {
    v12 = 0;
    result = v4 + 87;
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)++result;
      v13 = v14;
      v15 = v14 == 104;
      if ( v14 != 104 )
        v15 = v13 == 13;
      if ( v15 )
      {
        v9 = *(_DWORD *)(v5 + 184);
      }
      else
      {
        v1 = v9 + 1;
        v2 = v5 + v9;
        *(_DWORD *)(v5 + 184) = v9 + 1;
      }
      if ( !v15 )
      {
        v9 = v1;
        *(_BYTE *)(v2 + 56) = v13;
      }
      if ( v13 == 111 )
      {
        if ( v9 == 1 )
          *v6 = 0;
        v16 = *(_DWORD *)(v4 + 84);
        ++v12;
        if ( v9 == 1 )
        {
          v9 = *(_DWORD *)(v5 + 184);
          v6[1] = 0;
        }
        if ( v16 <= v12 )
          break;
      }
      else if ( *(_DWORD *)(v4 + 84) <= ++v12 )
      {
        break;
      }
      if ( v9 > 15 )
        goto LABEL_29;
    }
  }
  if ( v9 )
  {
LABEL_29:
    v17 = *(unsigned __int8 *)(v5 + 56);
    if ( v17 == 103 )
    {
      if ( v9 > 2 )
      {
        v30 = *(_BYTE *)(v5 + 58);
        v31 = *(_BYTE *)(v5 + 57);
        if ( (v30 & 0x70) == 0x30 )
        {
          v32 = v30 & 0xF;
          if ( v32 <= 5 && (v31 & 0x70) == 0x30 )
          {
            if ( (v31 & 0x7F) == 0x33 )
            {
              if ( v6[4] < (unsigned int)current_time )
              {
                sub_6055C(v70);
                sub_6407C(v70[0]);
                dword_107F30 = 0;
                v6[4] = current_time + 65 - LOBYTE(s.tm_hour);
                dword_107F34 = 0;
              }
              dword_107F30 += v32;
              result = sub_8CE58(dword_107F30, ++dword_107F34);
              dword_107F38 = result;
            }
            else if ( v6[6] )
            {
              v33 = dword_107F38;
              v15 = dword_107F38 == -1;
              v6[3] = dword_107F38;
              if ( v15 )
                v34 = "UNKNOWN, will use clock anyway";
              else
                v34 = v33 <= 2 ? "TOO POOR, will not use clock" : "OK, will use clock";
              result = sub_65D40(5, "ARCRON: sync finished, signal quality %d: %s", v33, v34);
              v35 = v6[3];
              v6[6] = 0;
              dword_107F38 = 0;
              dword_107F30 = 0;
              dword_107F34 = 0;
              if ( v35 <= 2 )
                v6[5] = current_time + 1620;
            }
            goto LABEL_8;
          }
        }
      }
    }
    else
    {
      if ( v17 != 111 )
        goto LABEL_54;
      if ( v9 > 15 )
      {
        if ( !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v5 + 184) = v6[1] | *v6;
          return sub_39C88(v3, 2);
        }
        v18 = v6[3];
        v19 = v5 + v9;
        *(_BYTE *)(v19 + 57) = 0;
        if ( v18 == -1 )
          v20 = 54;
        else
          v20 = v18 + 48;
        *(_BYTE *)(v19 + 56) = v20;
        v21 = *(unsigned __int8 *)(v5 + 56);
        *(_DWORD *)(v5 + 208) = 0;
        if ( v21 != 111 )
          goto LABEL_54;
        if ( !sub_5CE40((unsigned __int8 *)(v5 + 57), (_DWORD *)(v5 + 196)) )
          goto LABEL_54;
        if ( !sub_5CE40((unsigned __int8 *)(v5 + 59), (_DWORD *)(v5 + 200)) )
          goto LABEL_54;
        if ( !sub_5CE40((unsigned __int8 *)(v5 + 61), (_DWORD *)(v5 + 204)) )
          goto LABEL_54;
        v22 = _ctype_b_loc();
        v23 = *(unsigned __int8 *)(v5 + 63);
        if ( ((*v22)[v23] & 0x800) == 0 )
          goto LABEL_54;
        if ( !sub_5CE40((unsigned __int8 *)(v5 + 64), (_DWORD *)(v5 + 192)) )
          goto LABEL_54;
        if ( !sub_5CE40((unsigned __int8 *)(v5 + 66), &v69) )
          goto LABEL_54;
        if ( !sub_5CE40((unsigned __int8 *)(v5 + 68), (_DWORD *)(v5 + 188)) )
          goto LABEL_54;
        v24 = *(unsigned __int8 *)(v5 + 70);
        v25 = *(_BYTE *)(v5 + 71);
        if ( *(_DWORD *)(v5 + 196) > 0x17u || *(_DWORD *)(v5 + 200) > 0x3Bu )
          goto LABEL_54;
        v26 = *(_DWORD *)(v5 + 204);
        v27 = v23 - 49;
        v28 = v26 > 0x3C;
        if ( v26 <= 0x3C )
          v28 = v27 > 6;
        if ( v28
          || (unsigned int)(*(_DWORD *)(v5 + 192) - 1) > 0x1E
          || (unsigned int)(v69 - 1) > 0xB
          || (v29 = *(_DWORD *)(v5 + 188), (unsigned int)v29 > 0x63)
          || !*(_DWORD *)(v3 + 76) && ((v24 >> 1) & 1) != (((v24 ^ 4) >> 2) & 1) )
        {
LABEL_54:
          *(_DWORD *)(v5 + 184) = 0;
          return sub_39C88(v3, 2);
        }
        if ( (*(_BYTE *)(v5 + 71) & 8) != 0 )
        {
          sub_65D40(5, "ARCRON: battery low");
          v29 = *(_DWORD *)(v5 + 188);
        }
        if ( v29 <= 97 )
        {
          v29 += 100;
          *(_DWORD *)(v5 + 188) = v29;
        }
        v42 = v29 + 1900;
        *(_DWORD *)(v5 + 188) = v42;
        if ( v42 >= 2096 )
          sub_65D40(5, "ARCRON: fix me!  EITHER YOUR DATE IS BADLY WRONG or else I will break soon!");
        v43 = v25 & 7;
        *(_BYTE *)(v5 + 40) = 0;
        v44 = v6[2];
        if ( v43 == 3 )
        {
          if ( v44 != 3 )
            sub_65D40(5, "ARCRON: signal acquired");
        }
        else if ( v44 != v43 )
        {
          sub_65D40(5, "ARCRON: signal lost");
          *(_BYTE *)(v5 + 40) = 3;
          v6[2] = v43;
          *(_DWORD *)(v5 + 184) = 0;
          return sub_39C88(v3, 3);
        }
        v45 = *(_DWORD *)(v3 + 76);
        v6[2] = v43;
        if ( !v45 )
        {
          v46 = v69;
          v47 = *(_DWORD *)(v5 + 188);
          v48 = *(_DWORD *)(v5 + 192) + *(_DWORD *)&aV1320030221[4 * v69 + 80];
          *(_DWORD *)(v5 + 192) = v48;
          if ( (v47 & 3) == 0 )
          {
            sub_8D0EC(v47, 100);
            if ( v49 || (sub_8D0EC(v47, 400), !v50) )
            {
              if ( v46 > 2 )
                *(_DWORD *)(v5 + 192) = v48 + 1;
            }
          }
          if ( (v24 & 2) != 0 )
          {
            v51 = *(_DWORD *)(v5 + 196) - 1;
            *(_DWORD *)(v5 + 196) = v51;
            if ( v51 < 0 )
            {
              v57 = *(_DWORD *)(v5 + 192);
              *(_DWORD *)(v5 + 196) = 23;
              *(_DWORD *)(v5 + 192) = --v57;
              if ( v57 < 0 )
                goto LABEL_118;
            }
          }
LABEL_108:
          if ( v6[3] == -1 )
          {
            *(_BYTE *)(v3 + 95) = -4;
            goto LABEL_115;
          }
          v52 = *(_BYTE *)(v5 + 768);
LABEL_111:
          if ( (v52 & 4) != 0 )
            v53 = -5;
          else
            v53 = -4;
          *(_BYTE *)(v3 + 95) = v53;
LABEL_115:
          v54 = *(unsigned __int8 *)(v5 + 768);
          v55 = *v6;
          v56 = v6[1];
          if ( v6[9] != v54 )
            v6[9] = v54;
          *(_DWORD *)(v5 + 232) = v55;
          *(_DWORD *)(v5 + 236) = v56;
          if ( sub_3A4E8((_DWORD *)v5) )
          {
            sub_42D0C(v3 + 16, (const char *)(v5 + 56));
            return sub_3A534(v3);
          }
LABEL_118:
          *(_DWORD *)(v5 + 184) = 0;
          return sub_39C88(v3, 6);
        }
        if ( (*(_BYTE *)(v5 + 768) & 1) == 0 )
        {
          v68 = sub_6FBFC(*(_DWORD *)(v5 + 188), v69, *(_DWORD *)(v5 + 192));
          v67 = *(_DWORD *)(v3 + 76);
          *(_DWORD *)(v5 + 192) = v68;
          goto LABEL_132;
        }
        memset(&s, 0, sizeof(s));
        s.tm_year = *(_DWORD *)(v5 + 188) - 1900;
        s.tm_mon = v69 - 1;
        s.tm_mday = *(_DWORD *)(v5 + 192);
        s.tm_hour = *(_DWORD *)(v5 + 196);
        s.tm_min = *(_DWORD *)(v5 + 200);
        s.tm_sec = *(_DWORD *)(v5 + 204);
        if ( v45 != 2 )
        {
          if ( v45 == 3 )
          {
            v58 = v24 & 3;
            switch ( v58 )
            {
              case 2:
                goto LABEL_140;
              case 3:
                s.tm_isdst = 1;
                break;
              case 1:
LABEL_140:
                s.tm_isdst = -1;
                break;
            }
LABEL_130:
            v70[0] = mktime(&s);
            v59 = gmtime(v70);
            v60 = v59;
            if ( !v59 )
            {
              *(_DWORD *)(v5 + 184) = 0;
              return sub_39C88(v3, 3);
            }
            v61 = v59->tm_mon + 1;
            tm_mday = v59->tm_mday;
            v63 = v59->tm_year + 1888;
            v69 = v61;
            v63 += 12;
            *(_DWORD *)(v5 + 188) = v63;
            v64 = sub_6FBFC(v63, v61, tm_mday);
            tm_min = v60->tm_min;
            tm_sec = v60->tm_sec;
            v67 = *(_DWORD *)(v3 + 76);
            *(_DWORD *)(v5 + 196) = v60->tm_hour;
            *(_DWORD *)(v5 + 200) = tm_min;
            *(_DWORD *)(v5 + 204) = tm_sec;
            *(_DWORD *)(v5 + 192) = v64;
LABEL_132:
            if ( v67 )
            {
              if ( v43 == 3 )
              {
                v52 = *(_BYTE *)(v5 + 768);
                if ( (v52 & 2) != 0 )
                  goto LABEL_111;
              }
            }
            goto LABEL_108;
          }
          if ( v45 != 1 )
            return sub_65D40(5, "ARCRON: Invalid mode %d", v45);
        }
        s.tm_isdst = v24 & 2;
        goto LABEL_130;
      }
    }
  }
  return result;
}
