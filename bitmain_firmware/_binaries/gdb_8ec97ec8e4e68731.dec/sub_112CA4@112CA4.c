bool __fastcall sub_112CA4(int a1, unsigned __int8 *a2, unsigned int a3, int *a4)
{
  int v4; // r12
  unsigned __int8 *v5; // r4
  int v9; // r6
  unsigned __int8 *v11; // r4
  unsigned __int8 *v12; // lr
  char v13; // r1
  char v14; // t1
  unsigned int v15; // r8
  unsigned __int8 v16; // r6
  int v17; // r9
  char *v18; // r12
  int v19; // r8
  int v20; // r2
  unsigned int v21; // r3
  int v22; // lr
  char v23; // r2
  char v24; // r10
  unsigned __int8 v25; // t1
  unsigned int v26; // r0
  bool v27; // zf
  int v28; // [sp+0h] [bp-30h]
  int v29; // [sp+4h] [bp-2Ch]

  if ( a3 <= (unsigned int)a2 )
    return 0;
  v4 = *a2;
  if ( (unsigned __int8)(v4 - 112) > 0x1Fu )
  {
    if ( v4 != 146 )
      return 0;
    v11 = a2 + 1;
    if ( a3 <= (unsigned int)(a2 + 1) )
      return 0;
    v12 = a2 + 2;
    v28 = a2[1] & 0x7F;
    v29 = 0;
    if ( (a2[1] & 0x80) != 0 )
    {
      v13 = 0;
      do
      {
        v13 += 7;
        if ( a3 <= (unsigned int)v12 )
          return 0;
        v14 = *v12++;
        v15 = v14 & 0x7F;
        v28 |= v15 << v13;
        v29 |= (v15 << (v13 - 32)) | (v15 >> (32 - v13));
      }
      while ( v14 < 0 );
    }
    if ( v12 == v11 )
      return 0;
    v5 = v12;
    if ( !v12 )
      return 0;
  }
  else
  {
    v5 = a2 + 1;
    v28 = v4 - 112;
  }
  v9 = sub_115FB8(a1, v28);
  if ( v9 != ((int (__fastcall *)(int))loc_1672F0)(a1) || (unsigned int)v5 >= a3 )
    return 0;
  v16 = *v5;
  v17 = 0;
  v18 = (char *)(v5 + 1);
  v19 = *v5 & 0x7F;
  if ( (*v5 & 0x80) != 0 )
  {
    v21 = 7;
    while ( 1 )
    {
      v23 = v21 - 32;
      v24 = 32 - v21;
      if ( (char *)a3 == v18 )
        return 0;
      v25 = *v18++;
      v16 = v25;
      v26 = v25 & 0x7F;
      v22 = v19 | (v26 << v21);
      v21 += 7;
      v19 = v22;
      v20 = (v26 << v23) | (v26 >> v24) | v17;
      v17 = v20;
      if ( (v25 & 0x80) == 0 )
      {
        if ( v21 <= 0x3F )
          goto LABEL_30;
        if ( v18 == (char *)v5 )
          return 0;
        goto LABEL_24;
      }
    }
  }
  v20 = 0;
  LOBYTE(v21) = 7;
  v22 = v16 & 0x7F;
LABEL_30:
  if ( (v16 & 0x40) != 0 )
  {
    v19 = -(1 << v21) | v22;
    v17 = ((unsigned __int64)-__SPAIR64__((1 << (v21 - 32)) | (1u >> (32 - v21)), 1 << v21) >> 32) | v20;
  }
  if ( v18 == (char *)v5 || !v18 )
    return 0;
LABEL_24:
  *a4 = v19;
  if ( (char *)a3 != v18 )
    return 0;
  v27 = v17 == 0;
  if ( !v17 )
    return 1;
  return v27;
}
