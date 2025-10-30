int __fastcall sub_12F084(int (__fastcall *a1)(_BYTE *, int, int), int a2, int a3, int a4, int a5)
{
  int v6; // r3
  int v7; // r7
  int v8; // r3
  int v9; // r7
  int v10; // r0
  int v11; // r10
  int v12; // r8
  int v13; // r0
  int v14; // r4
  int v15; // r5
  unsigned int v16; // r3
  int v17; // lr
  int v18; // r1
  unsigned int v19; // r0
  int v21; // r2
  int v22; // r5
  int v23; // r3
  _BYTE *v24; // r2
  _BYTE *v25; // r1
  int v26; // [sp+10h] [bp-154h]
  int v28; // [sp+18h] [bp-14Ch]
  int v29; // [sp+24h] [bp-140h]
  _BYTE v32[296]; // [sp+3Ch] [bp-128h] BYREF

  if ( a5 < 0 )
  {
    v9 = 16;
    a5 = 0;
    goto LABEL_9;
  }
  if ( a5 <= 64 )
  {
    if ( a5 > 6 )
      v6 = a5 - 6;
    else
      v6 = 0;
    v7 = v6 + 6;
    v8 = v6 + 3;
    if ( v8 >= 0 )
      v7 = v8;
    v9 = 16 - (v7 >> 2);
LABEL_9:
    v10 = sub_189308(a4, v9);
    v29 = v10;
    if ( a4 > v9 * v10 )
      v29 = v10 + 1;
    if ( v29 > 0 )
      goto LABEL_12;
    return 0;
  }
  v9 = 1;
  v29 = a4;
  a5 = 64;
  if ( a4 <= 0 )
    return 0;
LABEL_12:
  v11 = a4;
  v12 = 0;
  v28 = 0;
  v26 = 0;
  do
  {
    v13 = sub_B5560(v32, 0x121u, "%*s%04x - ", a5, &byte_1A4198, v12);
    v14 = v13;
    if ( v9 )
    {
      v15 = 0;
      v16 = 289 - v13;
      do
      {
        v18 = v14;
        v19 = v16;
        if ( v16 > 3 )
        {
          if ( a4 > v12 + v15 )
          {
            if ( v15 == 7 )
              v17 = 45;
            else
              v17 = 32;
            sub_B5560(&v32[v14], 4u, "%02x%c", *(unsigned __int8 *)(a3 + v15), v17);
          }
          else
          {
            *(_DWORD *)&v32[v14] = &unk_202020;
          }
          v14 += 3;
          v16 = 289 - v14;
          v18 = v14;
          v19 = 289 - v14;
        }
        ++v15;
      }
      while ( v15 != v9 );
      if ( v16 > 2 )
      {
        v24 = &v32[v14];
        *(_WORD *)&v32[v14] = *(_WORD *)"  ";
        v14 += 2;
        v24[2] = asc_1CB224[2];
        v16 = 289 - v14;
        v18 = v14;
        v19 = 289 - v14;
      }
      if ( a4 > v12 )
      {
        v21 = 0;
        do
        {
          v22 = v14 + 1;
          v19 = v16;
          v18 = v14;
          if ( v16 > 1 )
          {
            v23 = *(unsigned __int8 *)(a3 + v21);
            v18 = v14 + 1;
            v19 = 288 - v14;
            if ( (unsigned int)(v23 - 32) > 0x5E )
              LOBYTE(v23) = 46;
            v32[v14++] = v23;
            v32[v22] = 0;
          }
          ++v21;
          v16 = 289 - v14;
        }
        while ( v21 < v9 && v21 != v11 );
      }
    }
    else
    {
      v18 = v13;
      v19 = 289 - v13;
      if ( v19 > 2 )
      {
        v25 = &v32[v14];
        *(_WORD *)&v32[v14] = *(_WORD *)"  ";
        v14 += 2;
        v25[2] = asc_1CB224[2];
        v19 = 289 - v14;
        v18 = v14;
      }
    }
    if ( v19 > 1 )
    {
      v18 = v14 + 1;
      v32[v14] = 10;
      v32[v14 + 1] = 0;
    }
    v12 += v9;
    a3 += v9;
    v11 -= v9;
    ++v28;
    v26 += a1(v32, v18, a2);
  }
  while ( v29 != v28 );
  return v26;
}
