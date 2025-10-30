int __fastcall sub_812D0(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r7
  char *v8; // r9
  unsigned int v9; // r4
  unsigned int v10; // r10
  int v11; // r3
  int v12; // r3
  bool v13; // zf
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r3
  int result; // r0
  unsigned int v18; // r3
  int v19; // lr
  int v20; // r0
  char v21; // r2
  int v22; // r2
  int v23; // r3
  int v24; // r3
  char v25; // r3
  char v26; // r3
  char v27; // r3
  char v28; // r3
  char v29; // r3
  int v30; // r1
  int v31; // r1
  int v32; // r3
  int v33; // r3
  char v34; // lr
  char v35; // r1
  _BYTE *v36; // r12
  char v37; // lr
  unsigned int v38; // r10
  char v39; // lr
  char v40; // r2
  char v41; // r3
  char v42; // r0
  char v43; // lr
  int v44; // [sp+8h] [bp-64h]
  int v45; // [sp+Ch] [bp-60h]
  unsigned int v46; // [sp+10h] [bp-5Ch]
  unsigned int v47; // [sp+10h] [bp-5Ch]
  int v48; // [sp+14h] [bp-58h]
  unsigned int v49; // [sp+18h] [bp-54h]
  unsigned int v50; // [sp+1Ch] [bp-50h]
  unsigned int v51; // [sp+20h] [bp-4Ch]
  char v52; // [sp+24h] [bp-48h]
  int v53; // [sp+2Ch] [bp-40h] BYREF
  int v54; // [sp+30h] [bp-3Ch] BYREF
  int v55; // [sp+34h] [bp-38h] BYREF
  char v56[8]; // [sp+38h] [bp-34h] BYREF
  _BYTE dest[16]; // [sp+40h] [bp-2Ch] BYREF
  _BYTE v58[28]; // [sp+50h] [bp-1Ch] BYREF

  if ( a3 != 1 )
  {
    sub_95494(a1, 80, 609, 68, "ssl/record/ssl3_record_tls13.c", 41);
    return -1;
  }
  if ( a4 )
  {
    v7 = a1[251];
    v8 = (char *)(a1 + 252);
    v9 = (unsigned int)(a1 + 970);
  }
  else
  {
    v7 = a1[243];
    v8 = (char *)(a1 + 244);
    v9 = (unsigned int)(a1 + 968);
  }
  if ( !v7 || *(_DWORD *)(a2 + 4) == 21 )
  {
    memmove(*(void **)(a2 + 20), *(const void **)(a2 + 24), *(_DWORD *)(a2 + 8));
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 20);
    return 1;
  }
  v10 = sub_D8944(v7);
  if ( (unsigned int)(a1[26] - 3) <= 1 )
  {
    v32 = a1[285];
    if ( !v32 || !*(_DWORD *)(v32 + 480) )
    {
      v32 = a1[286];
      if ( !v32 || !*(_DWORD *)(v32 + 480) )
      {
        v33 = 77;
        goto LABEL_64;
      }
    }
    v12 = *(_DWORD *)(*(_DWORD *)(v32 + 440) + 24);
  }
  else
  {
    v11 = *(_DWORD *)(a1[31] + 528);
    if ( !v11 )
    {
      v33 = 89;
      goto LABEL_64;
    }
    v12 = *(_DWORD *)(v11 + 24);
  }
  v48 = v12 & 0x3C000;
  if ( (v12 & 0x3C000) == 0 )
  {
    if ( (v12 & 0x83000) == 0 )
    {
      v33 = 112;
      goto LABEL_64;
    }
    v45 = 16;
    if ( a4 )
    {
      v44 = 16;
      goto LABEL_24;
    }
    v15 = 17;
    v44 = 16;
    goto LABEL_17;
  }
  v13 = (v12 & 0x30000) == 0;
  if ( (v12 & 0x30000) != 0 )
    v14 = 8;
  else
    v14 = 16;
  v45 = v14;
  if ( v13 )
    v15 = 17;
  else
    v15 = 9;
  v44 = v14;
  if ( a4 )
  {
    if ( sub_D83D4(v7, 17, v14, 0) > 0 )
      goto LABEL_24;
    v33 = 103;
LABEL_64:
    sub_95494(a1, 80, 609, 68, "ssl/record/ssl3_record_tls13.c", v33);
    return -1;
  }
LABEL_17:
  v16 = *(_DWORD *)(a2 + 8);
  if ( v15 > v16 )
    return 0;
  *(_DWORD *)(a2 + 8) = v16 - v44;
LABEL_24:
  if ( v10 <= 7 )
  {
    v33 = 130;
    goto LABEL_64;
  }
  v46 = v10 - 8;
  memcpy(dest, v8, v10 - 8);
  v18 = v46;
  if ( ((unsigned int)&dest[v46] | (unsigned int)&v8[v46] | v9) << 30 )
  {
    v49 = v10 - 5;
    v34 = v8[v46];
    v35 = v8[v10 - 7] ^ *(_BYTE *)(v9 + 1);
    v47 = v10 - 4;
    v50 = v10 - 3;
    v58[v18 - 16] = v34 ^ *(_BYTE *)v9;
    v36 = &v58[v10 + 18];
    v51 = v10 - 2;
    v37 = v8[v10 - 6];
    v58[v10 - 23] = v35;
    v38 = v10 - 1;
    v52 = v8[v49];
    *(v36 - 40) = v37 ^ *(_BYTE *)(v9 + 2);
    v39 = v8[v47];
    v40 = *(_BYTE *)(v9 + 4);
    dest[v49] = *(_BYTE *)(v9 + 3) ^ v52;
    LOBYTE(v49) = v39 ^ v40;
    v41 = v8[v38];
    v42 = *(_BYTE *)(v9 + 5) ^ v8[v50];
    v43 = v8[v51] ^ *(_BYTE *)(v9 + 6);
    dest[v47] = v49;
    v21 = *(_BYTE *)(v9 + 7);
    dest[v50] = v42;
    dest[v51] = v43;
    v58[v38 - 16] = v41 ^ v21;
  }
  else
  {
    v19 = *(_DWORD *)&v8[v46 + 4];
    v20 = *(_DWORD *)(v9 + 4);
    v21 = *(_BYTE *)(v9 + 7);
    *(_DWORD *)&dest[v46] = *(_DWORD *)&v8[v46] ^ *(_DWORD *)v9;
    *(_DWORD *)&dest[v10 - 4] = v19 ^ v20;
  }
  v22 = (unsigned __int8)(v21 + 1);
  *(_BYTE *)(v9 + 7) = v22;
  if ( !v22 )
  {
    v23 = (unsigned __int8)(*(_BYTE *)(v9 + 6) + 1);
    *(_BYTE *)(v9 + 6) = v23;
    if ( !v23 )
    {
      v24 = (unsigned __int8)(*(_BYTE *)(v9 + 5) + 1);
      *(_BYTE *)(v9 + 5) = v24;
      if ( !(_BYTE)v24 )
      {
        v25 = *(_BYTE *)(v9 + 4) + 1;
        *(_BYTE *)(v9 + 4) = v25;
        if ( !v25 )
        {
          v26 = *(_BYTE *)(v9 + 3) + 1;
          *(_BYTE *)(v9 + 3) = v26;
          if ( !v26 )
          {
            v27 = *(_BYTE *)(v9 + 2) + 1;
            *(_BYTE *)(v9 + 2) = v27;
            if ( !v27 )
            {
              v28 = *(_BYTE *)(v9 + 1) + 1;
              *(_BYTE *)(v9 + 1) = v28;
              if ( !v28 )
              {
                v29 = *(_BYTE *)v9 + 1;
                *(_BYTE *)v9 = v29;
                if ( !v29 )
                  return -1;
              }
            }
          }
        }
      }
    }
  }
  if ( sub_D8440(v7, 0, 0, 0, dest, a4) <= 0
    || !a4 && sub_D83D4(v7, 17, v45, *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 20)) <= 0 )
  {
    return -1;
  }
  if ( !sub_A82D4(v58, v56, 5, 0)
    || !sub_A8450(v58, v30, *(_DWORD *)(a2 + 4), *(int *)(a2 + 4) >> 31, 1)
    || !sub_A8450(v58, v31, *(_DWORD *)a2, *(int *)a2 >> 31, 2)
    || !sub_A8450(v58, v44, *(_DWORD *)(a2 + 8) + v44, 0, 2)
    || !sub_A820C(v58, &v53)
    || v53 != 5
    || !sub_A8054(v58) )
  {
    sub_A8640(v58);
    return -1;
  }
  if ( v48 && sub_D8188(v7, 0, &v54) <= 0
    || sub_D8188(v7, 0, &v54) <= 0
    || sub_D8188(v7, *(_DWORD *)(a2 + 20), &v54) <= 0
    || sub_D83A0(v7, *(_DWORD *)(a2 + 20) + v54, &v55) <= 0
    || v55 + v54 != *(_DWORD *)(a2 + 8) )
  {
    return -1;
  }
  result = 1;
  if ( a4 )
  {
    if ( sub_D83D4(v7, 16, v45, *(_DWORD *)(a2 + 20) + v55 + v54) > 0 )
    {
      *(_DWORD *)(a2 + 8) += v44;
      return 1;
    }
    v33 = 189;
    goto LABEL_64;
  }
  return result;
}
