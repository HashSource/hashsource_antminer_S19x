__int16 *__fastcall sub_5BA64(_DWORD *a1)
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
  int v23; // r10
  int v24; // r1
  int v25; // r2
  const char *v26; // r3
  int v27; // r3
  int v28; // r10
  int *v29; // r11
  int v30; // r1
  int v31; // r1
  int *v32; // r9
  int v33; // r1
  int v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // r3
  int v38; // r2
  _BOOL4 v39; // r1
  int *v40; // r10
  int v41; // r0
  int v42; // r1
  int v43; // r3
  int *v44; // [sp+38h] [bp-16Ch]
  unsigned __int8 v45; // [sp+5Ah] [bp-14Ah] BYREF
  unsigned __int8 v46; // [sp+5Bh] [bp-149h] BYREF
  char v47; // [sp+5Ch] [bp-148h] BYREF
  char v48; // [sp+5Dh] [bp-147h] BYREF
  char v49; // [sp+5Eh] [bp-146h] BYREF
  char v50; // [sp+5Fh] [bp-145h] BYREF
  int v51; // [sp+60h] [bp-144h] BYREF
  int v52; // [sp+64h] [bp-140h] BYREF
  int v53; // [sp+68h] [bp-13Ch] BYREF
  char v54; // [sp+6Ch] [bp-138h] BYREF
  char v55; // [sp+70h] [bp-134h] BYREF
  int v56; // [sp+74h] [bp-130h] BYREF
  char v57; // [sp+78h] [bp-12Ch] BYREF
  int v58; // [sp+7Ch] [bp-128h] BYREF
  char v59; // [sp+80h] [bp-124h] BYREF
  char v60; // [sp+88h] [bp-11Ch] BYREF
  char v61; // [sp+90h] [bp-114h] BYREF
  _BYTE dest[128]; // [sp+9Ch] [bp-108h] BYREF
  char v63; // [sp+11Ch] [bp-88h] BYREF
  char v64; // [sp+11Dh] [bp-87h]
  char v65; // [sp+11Eh] [bp-86h]

  v1 = a1[1];
  v2 = dest;
  v44 = *(int **)(v1 + 84);
  v4 = (__int16 **)(v44 + 58);
  v3 = *v44;
  v5 = (const char *)(*v44 + 32);
  result = (__int16 *)sub_3A784(a1, dest, (int)&v5[-*(_DWORD *)(*v44 + 28) + 128], v44 + 58);
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
            v10 = v9 == 42;
            if ( v9 != 42 )
              v10 = v9 == 35;
            if ( v10 )
            {
              v17 = v44[59];
              *(_DWORD *)(v3 + 20) = *v4;
              *(_DWORD *)(v3 + 24) = v17;
              result = (__int16 *)write(v44[7], v2, 1u);
              if ( (int)result < 0 )
                result = (__int16 *)sub_65D40(3, "acts: write echo fails %m");
            }
          }
          goto LABEL_7;
        }
        v12 = *(const char **)(v3 + 28);
        if ( v5 == v12 )
        {
          result = *v4;
          v18 = v44[59];
          *(_DWORD *)(v3 + 20) = *v4;
          *(_DWORD *)(v3 + 24) = v18;
          goto LABEL_7;
        }
        *v12 = 0;
        v13 = *(_DWORD **)(v1 + 84);
        *(_DWORD *)(v3 + 28) = v5;
        v14 = (_DWORD *)*v13;
        v51 = 2;
        sub_6E4B4(&v63);
        strtok(&v63, " ");
        v15 = v14[1];
        if ( v15 == 2 )
        {
          if ( strcmp(&v63, "CONNECT") )
            goto LABEL_13;
          result = (__int16 *)sub_26294(139, v1, v5);
          v14[1] = 3;
          v14[2] = 60;
          goto LABEL_7;
        }
        if ( v15 == 3 )
          break;
        if ( v15 == 1 )
        {
          if ( v63 == 79 && v64 == 75 && !v65 )
          {
            sub_266AC(139, v1, (int)"DIAL #%d %s", v14[3], (const char *)sys_phone[v14[3]]);
            if ( ioctl(v13[7], 0x5416u, &v51) < 0 )
              sub_65D40(3, "acts: ioctl(TIOCMBIS) failed: %m");
            v19 = (const char *)sys_phone[v14[3]];
            v20 = strlen(v19);
            if ( write(v13[7], v19, v20) < 0 )
              sub_65D40(3, "acts: write DIAL fails %m");
            result = (__int16 *)write(v13[7], "\r", 1u);
            v21 = v14[3] + 1;
            v14[1] = 2;
            v14[2] = 60;
            v14[3] = v21;
          }
          else
          {
            result = (__int16 *)strcmp(&v63, modem_setup);
            if ( result )
              goto LABEL_13;
          }
          goto LABEL_7;
        }
LABEL_13:
        sub_26294(139, v1, v5);
        result = sub_5B410((__int16 *)v1);
        v16 = (unsigned __int8)*++v2;
        v7 = v16;
        if ( !v16 )
          return result;
      }
      if ( v63 == 78 && v64 == 79 && !v65 )
        sub_26294(139, v1, v5);
      if ( (int)v14[4] > 19 )
      {
        result = sub_5B548((__int16 *)v1, 3);
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
                 &v54,
                 v22 + 47,
                 &v53,
                 &v52,
                 v22 + 49,
                 v22 + 50,
                 v22 + 51,
                 &v55,
                 &v56,
                 &v59,
                 &v60,
                 &v61,
                 &v45) != 13 )
            goto LABEL_52;
          v36 = sub_6FBFC(v22[47], v53, v52);
          v37 = v56;
          *((_BYTE *)v22 + 40) = 0;
          v22[48] = v36;
          if ( v37 == 1 || v37 == 2 )
            *((_BYTE *)v22 + 40) = v37;
          v38 = v45;
          result = *(__int16 **)"NIST";
          v22[191] = *(_DWORD *)"NIST";
          v27 = *(_DWORD *)(v23 + 16) + 1;
          *(_DWORD *)(v23 + 16) = v27;
          v39 = v27 <= 9;
          if ( v38 == 35 )
            v39 = 0;
          if ( v39 )
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
                   &v53,
                   &v52,
                   v22 + 49,
                   v22 + 50,
                   &v54,
                   &v59,
                   &v50,
                   &v58,
                   &v60,
                   &v45) != 12 )
              goto LABEL_52;
            v33 = v53;
            v34 = v58;
            *((_BYTE *)v22 + 40) = 0;
            if ( v34 == v33 )
            {
              if ( v50 == 43 )
              {
                *((_BYTE *)v22 + 40) = 1;
              }
              else if ( v50 == 45 )
              {
                *((_BYTE *)v22 + 40) = 2;
              }
            }
            v35 = sub_6FBFC(v22[47], v33, v52);
            v26 = (const char *)&dword_9B488;
            v22[48] = v35;
          }
          else
          {
            if ( result != (__int16 *)&off_18 )
              goto LABEL_7;
            if ( sscanf(
                   v5,
                   "%c%c%2d %3d %2d:%2d:%2d.%3ld%c%c%c",
                   &v46,
                   &v47,
                   v22 + 47,
                   v22 + 48,
                   v22 + 49,
                   v22 + 50,
                   v22 + 51,
                   v22 + 52,
                   &v49,
                   &v48,
                   &v49) != 11 )
              goto LABEL_52;
            v24 = v22[52];
            v25 = v46;
            *((_BYTE *)v22 + 40) = 0;
            v22[52] = (_DWORD)&unk_F4240 * v24;
            if ( v25 == 32 )
            {
              if ( v48 == 76 )
                *((_BYTE *)v22 + 40) = 1;
            }
            else
            {
              *((_BYTE *)v22 + 40) = 3;
            }
            v26 = "WWVB";
          }
LABEL_40:
          v22[191] = *(_DWORD *)v26;
          v27 = *(_DWORD *)(v23 + 16) + 1;
          *(_DWORD *)(v23 + 16) = v27;
        }
        v28 = v23 + 20;
        v29 = v22 + 58;
        result = *(__int16 **)v28;
        v30 = *(_DWORD *)(v28 + 4);
        *(_DWORD *)(v1 + 112) = v22[191];
        v22[58] = (int)result;
        v22[59] = v30;
        if ( v27 )
          goto LABEL_42;
        goto LABEL_7;
      }
      if ( result == (__int16 *)((char *)&dword_0 + 1) )
      {
        if ( *(_BYTE *)(v3 + 32) != 42 || *(int *)(v23 + 16) <= 0 )
          goto LABEL_7;
        v40 = (int *)(v23 + 20);
        v29 = v22 + 58;
        v41 = *v40;
        v42 = v40[1];
        *(_DWORD *)(v1 + 112) = v22[191];
        v22[58] = v41;
        v22[59] = v42;
LABEL_42:
        sub_6E4B4(v22 + 14);
        v22[46] = strlen((const char *)v22 + 56);
        if ( sub_3A4E8(v22) )
        {
          result = (__int16 *)*v29;
          v31 = v29[1];
          v32 = v22 + 56;
          *v32 = *v29;
          v32[1] = v31;
        }
        else
        {
          result = (__int16 *)sub_39C88(v1, 6);
        }
        goto LABEL_7;
      }
      if ( result == (__int16 *)&dword_14 )
      {
        if ( sscanf(v5, "%5ld %3d %2d%2d%2d %3s", &v54, v22 + 48, v22 + 49, v22 + 50, v22 + 51, &v61) != 6 )
          goto LABEL_52;
        *((_BYTE *)v22 + 40) = 0;
        v26 = "USNO";
        goto LABEL_40;
      }
LABEL_7:
      v11 = (unsigned __int8)*++v2;
      v7 = v11;
      if ( !v11 )
        return result;
    }
    if ( sscanf(v5, "%c %3d %2d:%2d:%2d %cTZ=%2d", &v46, v22 + 48, v22 + 49, v22 + 50, v22 + 51, &v49, &v57) != 7 )
    {
LABEL_52:
      result = (__int16 *)sub_39C88(v1, 2);
      goto LABEL_7;
    }
    v43 = v46;
    *((_BYTE *)v22 + 40) = 0;
    if ( v43 != 32 )
      *((_BYTE *)v22 + 40) = 3;
    v26 = "WWVB";
    goto LABEL_40;
  }
  return result;
}
