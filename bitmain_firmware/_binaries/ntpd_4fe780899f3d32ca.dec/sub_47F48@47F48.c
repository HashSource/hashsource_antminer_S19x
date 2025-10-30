__int16 *__fastcall sub_47F48(int a1)
{
  int v1; // r6
  int v2; // r5
  int v3; // r12
  int v4; // r9
  __int16 *result; // r0
  int v6; // r3
  int v7; // r11
  bool v8; // cc
  int v9; // r3
  _BYTE *v10; // r12
  int v11; // r1
  char *v12; // r0
  const char *v13; // r8
  const char *v14; // r4
  int v15; // r2
  bool v16; // zf
  int v17; // r2
  int v18; // t1
  bool v19; // zf
  char *v20; // r4
  const char *v21; // r1
  unsigned __int8 v22; // r3
  char v23; // t1
  int v24; // r11
  int v25; // r3
  int v26; // r4
  int v27; // r8
  int v28; // r2
  int v29; // r1
  int v30; // r1
  char *v31; // r3
  int v32; // t1
  int v33; // r8
  int v34; // r0
  int v35; // r3
  int v36; // r1
  int v37; // r3
  int v38; // r3
  int v39; // r3
  int v40; // r1
  int v41; // r0
  char *v42; // r3
  int v43; // t1
  int v44; // r4
  int v45; // r1
  int v46; // r1
  int v47; // r3
  bool v48; // zf
  bool v49; // zf
  _DWORD *v50; // [sp+2Ch] [bp-20h]
  int v51; // [sp+30h] [bp-1Ch]
  int v52; // [sp+34h] [bp-18h]
  char v53; // [sp+3Bh] [bp-11h] BYREF
  char v54; // [sp+3Ch] [bp-10h] BYREF
  char v55; // [sp+3Dh] [bp-Fh] BYREF
  char v56; // [sp+3Eh] [bp-Eh] BYREF
  unsigned __int8 v57; // [sp+3Fh] [bp-Dh] BYREF
  char v58; // [sp+40h] [bp-Ch] BYREF
  unsigned __int8 v59; // [sp+41h] [bp-Bh] BYREF
  __int16 v60; // [sp+42h] [bp-Ah] BYREF
  int v61; // [sp+44h] [bp-8h] BYREF
  int v62; // [sp+48h] [bp-4h] BYREF
  _DWORD v63[2]; // [sp+4Ch] [bp+0h] BYREF
  char v64[128]; // [sp+54h] [bp+8h] BYREF
  int v65; // [sp+D4h] [bp+88h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = _stack_chk_guard;
  v4 = *(_DWORD *)v2;
  *(_BYTE *)(v2 + 56) = 0;
  v65 = v3;
  result = (__int16 *)sub_39EE4(a1, (bool *)(v2 + 56), 128, v63);
  *(_DWORD *)(v2 + 184) = result;
  if ( !result )
    return result;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = v4 + 20;
  v8 = v6 <= 0;
  v9 = v6 - 1;
  *(_DWORD *)(v4 + 12) = v9;
  if ( !v8 )
  {
    v10 = *(_BYTE **)(v4 + 16);
    result = (__int16 *)((char *)result + 1);
    if ( (int)result < 1841 - (int)&v10[-v7] )
    {
      *(_DWORD *)(v4 + 16) = v10 + 1;
      *v10 = 10;
      result = (__int16 *)memcpy(*(void **)(v4 + 16), (const void *)(v2 + 56), *(_DWORD *)(v2 + 184));
      v9 = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v4 + 16) += *(_DWORD *)(v2 + 184);
    }
    if ( !v9 )
      return (__int16 *)sub_41F44(v1 + 16, (const char *)(v4 + 20));
    return result;
  }
  sub_41F44(v1 + 16, (const char *)(v2 + 56));
  v11 = v63[1];
  v50 = (_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 232) = v63[0];
  *(_DWORD *)(v2 + 236) = v11;
  *(_BYTE *)(v4 + 20) = 0;
  *(_DWORD *)v4 = 2;
  *(_DWORD *)(v4 + 16) = v7;
  sub_6D4DC(v64);
  v12 = strrchr((const char *)(v2 + 56), 62);
  if ( v12 )
    v13 = v12 + 1;
  else
    v13 = (const char *)(v2 + 56);
  if ( v12 )
    v14 = &v13[-v2 - 56];
  else
    v14 = 0;
  v64[(_DWORD)v14] = 0;
  v15 = *(unsigned __int8 *)v13;
  v16 = v15 == 9;
  if ( v15 != 9 )
    v16 = v15 == 32;
  if ( v16 )
  {
    do
    {
      v18 = *(unsigned __int8 *)++v13;
      v17 = v18;
      v19 = v18 == 9;
      if ( v18 != 9 )
        v19 = v17 == 32;
    }
    while ( v19 );
  }
  v20 = strrchr(v64, 69);
  if ( v20 > strrchr(v64, 115) && write(*(_DWORD *)(v2 + 28), "*CLS\r\r", 6u) != 6 )
    sub_394A0((__int16 *)v1, 3);
  if ( sscanf(v13, "%c%c", &v53, &v54) != 2 )
    return sub_394A0((__int16 *)v1, 2);
  if ( v53 == 45 )
  {
LABEL_27:
    result = (__int16 *)sscanf(v13, "%d,%d", v4 + 4, v4 + 8);
    if ( result == (_WORD *)&dword_0 + 1
      && (unsigned int)(*(_DWORD *)(v4 + 4) + 12) <= 0x19
      && (unsigned int)(*(_DWORD *)(v4 + 8) + 59) <= 0x76 )
    {
      return result;
    }
    return sub_394A0((__int16 *)v1, 2);
  }
  if ( v53 != 84 )
  {
    if ( v53 != 43 )
      return sub_394A0((__int16 *)v1, 2);
    goto LABEL_27;
  }
  if ( v54 != 50 )
    return sub_394A0((__int16 *)v1, 2);
  if ( sscanf(
         v13,
         "%*c%*c%4d%2d%2d%2d%2d%2d%c%c%c%c%c%2hx",
         v2 + 188,
         &v61,
         &v62,
         v2 + 196,
         v2 + 200,
         v2 + 204,
         &v55,
         &v56,
         &v57,
         &v58,
         &v59,
         &v60) != 12 )
    return sub_394A0((__int16 *)v1, 2);
  v21 = v13 + 21;
  v22 = 0;
  do
  {
    v23 = *v13++;
    v22 += v23;
  }
  while ( v13 != v21 );
  if ( v60 != v22 )
    return sub_394A0((__int16 *)v1, 2);
  v24 = v61;
  v25 = v61 - 1;
  if ( (unsigned int)(v61 - 1) > 0xB )
    return sub_394A0((__int16 *)v1, 6);
  v26 = v62;
  v27 = v62;
  if ( v62 <= 0 )
    return sub_394A0((__int16 *)v1, 6);
  v28 = *(_DWORD *)(v2 + 188);
  if ( (v28 & 3) != 0 )
    goto LABEL_94;
  v52 = v61 - 1;
  v51 = v28;
  sub_8BB9C(*(_DWORD *)(v2 + 188), 100);
  v28 = v51;
  v25 = v52;
  if ( v29 )
    goto LABEL_95;
  sub_8BB9C(v51, 400);
  v28 = v51;
  v25 = v52;
  if ( v30 )
  {
LABEL_94:
    if ( v26 > *(_DWORD *)&aGps_2[4 * v25 + 8] )
      return sub_394A0((__int16 *)v1, 6);
    if ( v25 )
    {
      v42 = (char *)&unk_9779C;
      do
      {
        v43 = *(_DWORD *)v42;
        v42 += 4;
        v27 += v43;
      }
      while ( (char *)&unk_97798 + 4 * v24 != v42 );
      v26 = v27;
      v62 = v27;
    }
    v33 = 365;
  }
  else
  {
LABEL_95:
    if ( v26 > *(_DWORD *)&aGps_2[4 * v25 + 56] )
      return sub_394A0((__int16 *)v1, 6);
    if ( v25 )
    {
      v31 = (char *)&unk_977CC;
      do
      {
        v32 = *(_DWORD *)v31;
        v31 += 4;
        v27 += v32;
      }
      while ( (char *)&unk_977C8 + 4 * v24 != v31 );
      v26 = v27;
      v62 = v27;
    }
    v33 = 366;
  }
  v34 = *(_DWORD *)(v4 + 4);
  v35 = *(_DWORD *)(v2 + 196);
  v36 = *(_DWORD *)(v2 + 200) - *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v2 + 200) = v36;
  v37 = v35 - v34;
  *(_DWORD *)(v2 + 196) = v37;
  if ( v36 < 0 )
  {
    v36 += 60;
    --v37;
    *(_DWORD *)(v2 + 200) = v36;
    *(_DWORD *)(v2 + 196) = v37;
  }
  if ( v36 > 59 )
  {
    ++v37;
    *(_DWORD *)(v2 + 200) = v36 - 60;
    *(_DWORD *)(v2 + 196) = v37;
  }
  if ( v37 < 0 )
  {
    --v26;
    v37 += 24;
    v62 = v26;
    *(_DWORD *)(v2 + 196) = v37;
    if ( v26 <= 0 )
    {
      v44 = v28 - 1;
      *(_DWORD *)(v2 + 188) = v28 - 1;
      if ( ((v28 - 1) & 3) != 0 || (sub_8BB9C(v28 - 1, 100), !v45) && (sub_8BB9C(v44, 400), v46) )
      {
        v37 = *(_DWORD *)(v2 + 196);
        v26 = 365;
        v62 = 365;
      }
      else
      {
        v26 = 366;
        v37 = *(_DWORD *)(v2 + 196);
        v62 = 366;
      }
    }
  }
  if ( v37 > 23 )
  {
    v62 = ++v26;
    *(_DWORD *)(v2 + 196) = v37 - 24;
    if ( v26 > v33 )
    {
      v38 = *(_DWORD *)(v2 + 188);
      v26 = 1;
      v62 = 1;
      *(_DWORD *)(v2 + 188) = v38 + 1;
    }
  }
  v39 = v59;
  *(_DWORD *)(v2 + 192) = v26;
  if ( v39 == 48 )
  {
    v47 = v57;
    *(_BYTE *)(v2 + 40) = 0;
    if ( v47 == 45 )
    {
      v49 = v24 == 12;
      if ( v24 != 12 )
        v49 = v24 == 6;
      if ( v49 )
        *(_BYTE *)(v2 + 40) = 2;
    }
    else if ( v47 != 48 )
    {
      if ( v47 != 43 )
        return sub_394A0((__int16 *)v1, 6);
      v48 = v24 == 12;
      if ( v24 != 12 )
        v48 = v24 == 6;
      if ( v48 )
        *(_BYTE *)(v2 + 40) = 1;
    }
  }
  else
  {
    *(_BYTE *)(v2 + 40) = 3;
  }
  if ( !sub_39CF8((_DWORD *)v2) )
    return sub_394A0((__int16 *)v1, 6);
  v40 = v50[1];
  *(_DWORD *)(v2 + 224) = *v50;
  *(_DWORD *)(v2 + 228) = v40;
  result = (__int16 *)sub_39D44(v1);
  if ( (*(_BYTE *)(v2 + 768) & 8) != 0 )
  {
    v41 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v4 + 12) = 22;
    result = (__int16 *)write(v41, ":SYSTEM:PRINT?\r", 0xFu);
    if ( result != (__int16 *)&byte_9[6] )
      return sub_394A0((__int16 *)v1, 3);
  }
  return result;
}
