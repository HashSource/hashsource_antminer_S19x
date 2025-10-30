__int16 *__fastcall sub_5ACF0(_DWORD *a1)
{
  int v1; // r8
  _BYTE *v2; // r4
  int v3; // r5
  __int16 **v4; // r7
  const char *v5; // r6
  __int16 *result; // r0
  int v7; // r9
  _BYTE *v8; // r3
  int v9; // r3
  bool v10; // zf
  int v11; // t1
  const char *v12; // r3
  _DWORD *v13; // r11
  _DWORD *v14; // r10
  int v15; // r3
  int v16; // t1
  int v17; // r1
  int v18; // r1
  const char *v19; // r9
  size_t v20; // r0
  int v21; // r3
  int *v22; // r9
  int v23; // r11
  int v24; // r1
  int v25; // r2
  const char *v26; // r3
  int v27; // r3
  int v28; // r11
  int v29; // r1
  int *v30; // r10
  int v31; // r1
  int *v32; // r9
  int v33; // r1
  int v34; // r3
  int *v35; // r11
  int v36; // r0
  int v37; // r1
  int v38; // r0
  int v39; // r3
  _BOOL4 v40; // r2
  bool v41; // nf
  int v42; // r3
  int *v43; // [sp+38h] [bp-15Ch]
  char v44; // [sp+4Ah] [bp-14Ah] BYREF
  unsigned __int8 v45; // [sp+4Bh] [bp-149h] BYREF
  char v46; // [sp+4Ch] [bp-148h] BYREF
  char v47; // [sp+4Dh] [bp-147h] BYREF
  char v48; // [sp+4Eh] [bp-146h] BYREF
  char v49; // [sp+4Fh] [bp-145h] BYREF
  int v50; // [sp+50h] [bp-144h] BYREF
  int v51; // [sp+54h] [bp-140h] BYREF
  int v52; // [sp+58h] [bp-13Ch] BYREF
  char v53; // [sp+5Ch] [bp-138h] BYREF
  char v54; // [sp+60h] [bp-134h] BYREF
  int v55; // [sp+64h] [bp-130h] BYREF
  char v56; // [sp+68h] [bp-12Ch] BYREF
  int v57; // [sp+6Ch] [bp-128h] BYREF
  char v58; // [sp+70h] [bp-124h] BYREF
  char v59; // [sp+78h] [bp-11Ch] BYREF
  char v60; // [sp+80h] [bp-114h] BYREF
  _BYTE dest[128]; // [sp+8Ch] [bp-108h] BYREF
  char v62; // [sp+10Ch] [bp-88h] BYREF
  char v63; // [sp+10Dh] [bp-87h]
  char v64; // [sp+10Eh] [bp-86h]

  v1 = a1[1];
  v2 = dest;
  v43 = *(int **)(v1 + 84);
  v4 = (__int16 **)(v43 + 58);
  v3 = *v43;
  v5 = (const char *)(*v43 + 32);
  result = (__int16 *)sub_39F94(a1, dest, 128 - (*(_DWORD *)(*v43 + 28) - (_DWORD)v5), v43 + 58);
  v7 = dest[0];
  if ( dest[0] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 != 10 )
        {
          result = (__int16 *)_ctype_b_loc();
          if ( (*(_WORD *)(*(_DWORD *)result + 2 * v7) & 2) == 0 )
          {
            v8 = *(_BYTE **)(v3 + 28);
            *(_DWORD *)(v3 + 28) = v8 + 1;
            *v8 = *v2;
            v9 = (unsigned __int8)*v2;
            v10 = v9 == 35;
            if ( v9 != 35 )
              v10 = v9 == 42;
            if ( v10 )
            {
              v17 = v43[59];
              *(_DWORD *)(v3 + 20) = *v4;
              *(_DWORD *)(v3 + 24) = v17;
              result = (__int16 *)write(v43[7], v2, 1u);
              if ( (int)result < 0 )
                result = (__int16 *)sub_64E00(3, "acts: write echo fails %m");
            }
          }
          goto LABEL_7;
        }
        v12 = *(const char **)(v3 + 28);
        if ( v5 == v12 )
        {
          result = *v4;
          v18 = v43[59];
          *(_DWORD *)(v3 + 20) = *v4;
          *(_DWORD *)(v3 + 24) = v18;
          goto LABEL_7;
        }
        *v12 = 0;
        v13 = *(_DWORD **)(v1 + 84);
        *(_DWORD *)(v3 + 28) = v5;
        v14 = (_DWORD *)*v13;
        v50 = 2;
        sub_6D4DC(&v62);
        strtok(&v62, " ");
        v15 = v14[1];
        if ( v15 == 2 )
        {
          if ( strcmp(&v62, "CONNECT") )
            goto LABEL_13;
          result = sub_25EE0((__int16 *)((char *)&dword_88 + 3), v1, v5);
          *(_QWORD *)(v14 + 1) = 0x3C00000003LL;
          goto LABEL_7;
        }
        if ( v15 == 3 )
          break;
        if ( v15 == 1 )
        {
          if ( v62 == 79 && v63 == 75 && !v64 )
          {
            sub_262E8(
              (__int16 *)((char *)&dword_88 + 3),
              v1,
              (int)"DIAL #%d %s",
              v14[3],
              (const char *)sys_phone[v14[3]]);
            if ( ioctl(v13[7], 0x5416u, &v50) < 0 )
              sub_64E00(3, "acts: ioctl(TIOCMBIS) failed: %m");
            v19 = (const char *)sys_phone[v14[3]];
            v20 = strlen(v19);
            if ( write(v13[7], v19, v20) < 0 )
              sub_64E00(3, "acts: write DIAL fails %m");
            result = (__int16 *)write(v13[7], "\r", 1u);
            v21 = v14[3];
            v14[1] = 2;
            v14[2] = 60;
            v14[3] = v21 + 1;
          }
          else
          {
            result = (__int16 *)strcmp(&v62, modem_setup);
            if ( result )
              goto LABEL_13;
          }
          goto LABEL_7;
        }
LABEL_13:
        sub_25EE0((__int16 *)((char *)&dword_88 + 3), v1, v5);
        result = sub_5A694((__int16 *)v1);
        v16 = (unsigned __int8)*++v2;
        v7 = v16;
        if ( !v16 )
          return result;
      }
      if ( v62 == 78 && v63 == 79 && !v64 )
        sub_25EE0((__int16 *)((char *)&dword_88 + 3), v1, v5);
      if ( (int)v14[4] > 19 )
      {
        result = sub_5A7D8((__int16 *)v1, 3);
        goto LABEL_7;
      }
      v22 = *(int **)(v1 + 84);
      v22[52] = 0;
      result = (__int16 *)strlen(v5);
      v23 = *v22;
      if ( result == (_WORD *)&dword_14 + 1 )
        break;
      if ( (unsigned int)result > 0x16 )
      {
        if ( result == &word_32 )
        {
          if ( sscanf(
                 v5,
                 "%5ld %2d-%2d-%2d %2d:%2d:%2d %2d %1d %3lf %5lf %9s %c",
                 &v53,
                 v22 + 47,
                 &v52,
                 &v51,
                 v22 + 49,
                 v22 + 50,
                 v22 + 51,
                 &v54,
                 &v55,
                 &v58,
                 &v59,
                 &v60,
                 &v44) != 13 )
            goto LABEL_52;
          v38 = sub_6EC68(v22[47], v52, v51);
          v39 = v55;
          v22[48] = v38;
          *((_BYTE *)v22 + 40) = 0;
          if ( v39 == 1 || v39 == 2 )
            *((_BYTE *)v22 + 40) = v39;
          result = *(__int16 **)"NIST";
          v40 = v44 != 35;
          v22[191] = *(_DWORD *)"NIST";
          v27 = *(_DWORD *)(v23 + 16) + 1;
          v41 = *(_DWORD *)(v23 + 16) - 8 < 0;
          *(_DWORD *)(v23 + 16) = v27;
          if ( !(v41 ^ __OFSUB__(v27, 9) | (v27 == 9)) )
            v40 = 0;
          if ( v40 )
            goto LABEL_7;
        }
        else
        {
          if ( result == (_WORD *)&dword_4C + 1 )
          {
            if ( sscanf(
                   v5,
                   "%*4d-%*2d-%*2d %*2d:%*2d:%2d %*5c%*12c%4d%2d%2d%2d%2d%5ld%2lf%c%2d%3lf%*15c%c",
                   v22 + 51,
                   v22 + 47,
                   &v52,
                   &v51,
                   v22 + 49,
                   v22 + 50,
                   &v53,
                   &v58,
                   &v49,
                   &v57,
                   &v59,
                   &v44) != 12 )
              goto LABEL_52;
            v33 = v52;
            v34 = v57;
            *((_BYTE *)v22 + 40) = 0;
            if ( v34 == v33 )
            {
              if ( v49 == 43 )
              {
                *((_BYTE *)v22 + 40) = 1;
              }
              else if ( v49 == 45 )
              {
                *((_BYTE *)v22 + 40) = 2;
              }
            }
            v22[48] = sub_6EC68(v22[47], v33, v51);
            v26 = (const char *)&dword_99EB8;
          }
          else
          {
            if ( result != (__int16 *)&off_18 )
              goto LABEL_7;
            if ( sscanf(
                   v5,
                   "%c%c%2d %3d %2d:%2d:%2d.%3ld%c%c%c",
                   &v45,
                   &v46,
                   v22 + 47,
                   v22 + 48,
                   v22 + 49,
                   v22 + 50,
                   v22 + 51,
                   v22 + 52,
                   &v48,
                   &v47,
                   &v48) != 11 )
              goto LABEL_52;
            v24 = v22[52];
            v25 = v45;
            *((_BYTE *)v22 + 40) = 0;
            v22[52] = (_DWORD)&unk_F4240 * v24;
            if ( v25 == 32 )
            {
              if ( v47 == 76 )
                *((_BYTE *)v22 + 40) = 1;
            }
            else
            {
              *((_BYTE *)v22 + 40) = 3;
            }
            v26 = "WWVB";
          }
LABEL_42:
          v22[191] = *(_DWORD *)v26;
          v27 = *(_DWORD *)(v23 + 16) + 1;
          *(_DWORD *)(v23 + 16) = v27;
        }
        v28 = v23 + 20;
        result = *(__int16 **)v28;
        v29 = *(_DWORD *)(v28 + 4);
        v30 = v22 + 58;
        *(_DWORD *)(v1 + 112) = v22[191];
        v22[58] = (int)result;
        v22[59] = v29;
        if ( v27 )
          goto LABEL_44;
        goto LABEL_7;
      }
      if ( result == (__int16 *)((char *)&dword_0 + 1) )
      {
        if ( *(_BYTE *)(v3 + 32) != 42 || *(int *)(v23 + 16) <= 0 )
          goto LABEL_7;
        v35 = (int *)(v23 + 20);
        v36 = *v35;
        v37 = v35[1];
        v30 = v22 + 58;
        *(_DWORD *)(v1 + 112) = v22[191];
        v22[58] = v36;
        v22[59] = v37;
LABEL_44:
        sub_6D4DC(v22 + 14);
        v22[46] = strlen((const char *)v22 + 56);
        if ( sub_39CF8(v22) )
        {
          result = (__int16 *)*v30;
          v31 = v30[1];
          v32 = v22 + 56;
          *v32 = *v30;
          v32[1] = v31;
        }
        else
        {
          result = sub_394A0((__int16 *)v1, 6);
        }
        goto LABEL_7;
      }
      if ( result == (__int16 *)&dword_14 )
      {
        if ( sscanf(v5, "%5ld %3d %2d%2d%2d %3s", &v53, v22 + 48, v22 + 49, v22 + 50, v22 + 51, &v60) != 6 )
          goto LABEL_52;
        *((_BYTE *)v22 + 40) = 0;
        v26 = "USNO";
        goto LABEL_42;
      }
LABEL_7:
      v11 = (unsigned __int8)*++v2;
      v7 = v11;
      if ( !v11 )
        return result;
    }
    if ( sscanf(v5, "%c %3d %2d:%2d:%2d %cTZ=%2d", &v45, v22 + 48, v22 + 49, v22 + 50, v22 + 51, &v48, &v56) != 7 )
    {
LABEL_52:
      result = sub_394A0((__int16 *)v1, 2);
      goto LABEL_7;
    }
    v42 = v45;
    *((_BYTE *)v22 + 40) = 0;
    if ( v42 != 32 )
      *((_BYTE *)v22 + 40) = 3;
    v26 = "WWVB";
    goto LABEL_42;
  }
  return result;
}
