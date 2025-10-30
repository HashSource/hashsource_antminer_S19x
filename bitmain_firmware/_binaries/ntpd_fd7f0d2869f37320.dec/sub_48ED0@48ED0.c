char *__fastcall sub_48ED0(int a1)
{
  int v1; // r6
  int v2; // r5
  int v3; // r12
  int v4; // r9
  char *result; // r0
  int v6; // r3
  bool v7; // cc
  int v8; // r3
  _BYTE *v9; // r12
  int v10; // r1
  char *v11; // r0
  const char *v12; // r7
  int v13; // r4
  int v14; // r2
  bool v15; // zf
  int v16; // r2
  int v17; // t1
  bool v18; // zf
  char *v19; // r4
  const char *v20; // r1
  unsigned __int8 v21; // r3
  char v22; // t1
  int v23; // r8
  int v24; // r3
  int v25; // r4
  int v26; // r7
  int v27; // r2
  int v28; // r1
  int v29; // r1
  char *v30; // r3
  int v31; // t1
  int v32; // r7
  int v33; // r3
  int v34; // r1
  int v35; // r0
  bool v36; // nf
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
  char v64[13]; // [sp+54h] [bp+8h] BYREF
  int v65; // [sp+D4h] [bp+88h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 84);
  v3 = _stack_chk_guard;
  v4 = *(_DWORD *)v2;
  *(_BYTE *)(v2 + 56) = 0;
  v65 = v3;
  result = sub_3A6D4(a1, (bool *)(v2 + 56), 128, v63);
  *(_DWORD *)(v2 + 184) = result;
  if ( !result )
    return result;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = v6 <= 0;
  v8 = v6 - 1;
  *(_DWORD *)(v4 + 12) = v8;
  if ( !v7 )
  {
    v9 = *(_BYTE **)(v4 + 16);
    if ( (int)result <= v4 + 20 - (int)v9 + 1839 )
    {
      *(_DWORD *)(v4 + 16) = v9 + 1;
      *v9 = 10;
      result = (char *)memcpy(*(void **)(v4 + 16), (const void *)(v2 + 56), *(_DWORD *)(v2 + 184));
      v8 = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v4 + 16) += *(_DWORD *)(v2 + 184);
    }
    if ( !v8 )
      return (char *)sub_42D0C(v1 + 16, (const char *)(v4 + 20));
    return result;
  }
  sub_42D0C(v1 + 16, (const char *)(v2 + 56));
  v10 = v63[1];
  v50 = (_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 232) = v63[0];
  *(_DWORD *)(v2 + 236) = v10;
  *(_DWORD *)(v4 + 16) = v4 + 20;
  *(_DWORD *)v4 = 2;
  *(_BYTE *)(v4 + 20) = 0;
  sub_6E4B4(v64);
  v11 = strrchr((const char *)(v2 + 56), 62);
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = (int)&v11[-v2 - 55];
  }
  else
  {
    v12 = (const char *)(v2 + 56);
    v13 = 0;
  }
  v64[v13] = 0;
  v14 = *(unsigned __int8 *)v12;
  v15 = v14 == 32;
  if ( v14 != 32 )
    v15 = v14 == 9;
  if ( v15 )
  {
    do
    {
      v17 = *(unsigned __int8 *)++v12;
      v16 = v17;
      v18 = v17 == 32;
      if ( v17 != 32 )
        v18 = v16 == 9;
    }
    while ( v18 );
  }
  v19 = strrchr(v64, 69);
  if ( v19 > strrchr(v64, 115) && write(*(_DWORD *)(v2 + 28), "*CLS\r\r", 6u) != 6 )
    sub_39C88(v1, 3);
  if ( sscanf(v12, "%c%c", &v53, &v54) != 2 )
    return (char *)sub_39C88(v1, 2);
  if ( v53 == 45 )
  {
LABEL_60:
    result = (char *)sscanf(v12, "%d,%d", v4 + 4, v4 + 8);
    if ( result == (_BYTE *)&dword_0 + 2
      && (unsigned int)(*(_DWORD *)(v4 + 4) + 12) <= 0x19
      && (unsigned int)(*(_DWORD *)(v4 + 8) + 59) <= 0x76 )
    {
      return result;
    }
    return (char *)sub_39C88(v1, 2);
  }
  if ( v53 != 84 )
  {
    if ( v53 != 43 )
      return (char *)sub_39C88(v1, 2);
    goto LABEL_60;
  }
  if ( v54 != 50 )
    return (char *)sub_39C88(v1, 2);
  if ( sscanf(
         v12,
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
    return (char *)sub_39C88(v1, 2);
  v20 = v12 + 21;
  v21 = 0;
  do
  {
    v22 = *v12++;
    v21 += v22;
  }
  while ( v12 != v20 );
  if ( v60 != v21 )
    return (char *)sub_39C88(v1, 2);
  v23 = v61;
  v24 = v61 - 1;
  if ( (unsigned int)(v61 - 1) > 0xB )
    return (char *)sub_39C88(v1, 6);
  v25 = v62;
  v26 = v62;
  if ( v62 <= 0 )
    return (char *)sub_39C88(v1, 6);
  v27 = *(_DWORD *)(v2 + 188);
  if ( (v27 & 3) != 0 )
    goto LABEL_93;
  v52 = v61 - 1;
  v51 = v27;
  sub_8D0EC(*(_DWORD *)(v2 + 188), 100);
  v27 = v51;
  v24 = v52;
  if ( v28 )
    goto LABEL_94;
  sub_8D0EC(v51, 400);
  v27 = v51;
  v24 = v52;
  if ( v29 )
  {
LABEL_93:
    if ( v25 > *(_DWORD *)&aGps[4 * v24 + 8] )
      return (char *)sub_39C88(v1, 6);
    if ( v24 )
    {
      v42 = (char *)&unk_98D5C;
      do
      {
        v43 = *((_DWORD *)v42 + 1);
        v42 += 4;
        v26 += v43;
      }
      while ( v42 != &aGps[4 * v23] );
      v25 = v26;
      v62 = v26;
    }
    v32 = 365;
  }
  else
  {
LABEL_94:
    if ( v25 > *(_DWORD *)&aGps[4 * v24 + 56] )
      return (char *)sub_39C88(v1, 6);
    if ( v24 )
    {
      v30 = (char *)&unk_98D8C;
      do
      {
        v31 = *((_DWORD *)v30 + 1);
        v30 += 4;
        v26 += v31;
      }
      while ( v30 != &aGps[4 * v23 + 48] );
      v25 = v26;
      v62 = v26;
    }
    v32 = 366;
  }
  v33 = *(_DWORD *)(v2 + 196);
  v34 = *(_DWORD *)(v2 + 200) - *(_DWORD *)(v4 + 8);
  v35 = *(_DWORD *)(v4 + 4);
  v36 = v34 < 0;
  *(_DWORD *)(v2 + 200) = v34;
  v37 = v33 - v35;
  if ( v34 < 0 )
  {
    v34 += 60;
    v35 = v37 - 1;
  }
  *(_DWORD *)(v2 + 196) = v37;
  if ( v36 )
  {
    *(_DWORD *)(v2 + 200) = v34;
    v37 = v35;
    *(_DWORD *)(v2 + 196) = v35;
  }
  if ( v34 > 59 )
  {
    *(_DWORD *)(v2 + 196) = ++v37;
    *(_DWORD *)(v2 + 200) = v34 - 60;
  }
  if ( v37 < 0 )
  {
    --v25;
    v37 += 24;
    v62 = v25;
    *(_DWORD *)(v2 + 196) = v37;
    if ( v25 <= 0 )
    {
      v44 = v27 - 1;
      *(_DWORD *)(v2 + 188) = v27 - 1;
      if ( ((v27 - 1) & 3) != 0 || (sub_8D0EC(v27 - 1, 100), !v45) && (sub_8D0EC(v44, 400), v46) )
      {
        v37 = *(_DWORD *)(v2 + 196);
        v25 = 365;
        v62 = 365;
      }
      else
      {
        v25 = 366;
        v37 = *(_DWORD *)(v2 + 196);
        v62 = 366;
      }
    }
  }
  if ( v37 > 23 )
  {
    ++v25;
    *(_DWORD *)(v2 + 196) = v37 - 24;
    v62 = v25;
    if ( v32 < v25 )
    {
      v38 = *(_DWORD *)(v2 + 188);
      v25 = 1;
      v62 = 1;
      *(_DWORD *)(v2 + 188) = v38 + 1;
    }
  }
  v39 = v59;
  *(_DWORD *)(v2 + 192) = v25;
  if ( v39 == 48 )
  {
    v47 = v57;
    *(_BYTE *)(v2 + 40) = 0;
    if ( v47 == 45 )
    {
      v49 = v23 == 6;
      if ( v23 != 6 )
        v49 = v23 == 12;
      if ( v49 )
        *(_BYTE *)(v2 + 40) = 2;
    }
    else if ( v47 != 48 )
    {
      if ( v47 != 43 )
        return (char *)sub_39C88(v1, 6);
      v48 = v23 == 6;
      if ( v23 != 6 )
        v48 = v23 == 12;
      if ( v48 )
        *(_BYTE *)(v2 + 40) = 1;
    }
  }
  else
  {
    *(_BYTE *)(v2 + 40) = 3;
  }
  if ( !sub_3A4E8((_DWORD *)v2) )
    return (char *)sub_39C88(v1, 6);
  v40 = v50[1];
  *(_DWORD *)(v2 + 224) = *v50;
  *(_DWORD *)(v2 + 228) = v40;
  result = (char *)sub_3A534(v1);
  if ( (*(_BYTE *)(v2 + 768) & 8) != 0 )
  {
    v41 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v4 + 12) = 22;
    result = (char *)write(v41, ":SYSTEM:PRINT?\r", 0xFu);
    if ( result != &byte_9[6] )
      return (char *)sub_39C88(v1, 3);
  }
  return result;
}
