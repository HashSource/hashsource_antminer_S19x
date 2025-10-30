int __fastcall sub_16E208(int result, unsigned __int8 *src, unsigned int a3)
{
  unsigned int v3; // r7
  int v4; // r3
  int v5; // r6
  unsigned int v6; // r8
  unsigned __int8 *v7; // r10
  unsigned int v8; // r2
  int v9; // r11
  int v10; // r9
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r5
  int v19; // r8
  int v20; // t1
  unsigned int v21; // r3
  int v22; // r4
  unsigned int v23; // r1
  unsigned int v24; // lr
  char v25; // r2
  int v26; // r7
  unsigned int v27; // r3
  int v28; // r11
  int v29; // r1
  int v30; // r3
  int v31; // r2
  int v32; // r9
  int v33; // r5
  unsigned int v34; // r4
  unsigned int v35; // lr
  unsigned int v36; // r3
  size_t v37; // r8
  unsigned __int8 *v38; // r1
  void *v39; // r0
  size_t v40; // r2
  unsigned int v41; // r12
  int v42; // r2
  char v43; // t1
  int v44; // [sp+Ch] [bp-8h]

  v3 = a3;
  v4 = -a3;
  v5 = result;
  v6 = *(_DWORD *)(result + 128);
  v7 = src;
  v8 = *(_DWORD *)(result + 132) + a3;
  v9 = v4 & 7;
  *(_DWORD *)(result + 132) = v8;
  v10 = v6 & 7;
  if ( v3 > v8 )
  {
    v11 = *(_DWORD *)(result + 136) + 1;
    *(_DWORD *)(result + 136) = v11;
    if ( !v11 )
    {
      v12 = *(_DWORD *)(result + 140) + 1;
      *(_DWORD *)(result + 140) = v12;
      if ( !v12 )
      {
        v13 = *(_DWORD *)(result + 144) + 1;
        *(_DWORD *)(result + 144) = v13;
        if ( !v13 )
        {
          v14 = *(_DWORD *)(result + 148) + 1;
          *(_DWORD *)(result + 148) = v14;
          if ( !v14 )
          {
            v15 = *(_DWORD *)(result + 152) + 1;
            *(_DWORD *)(result + 152) = v15;
            if ( !v15 )
            {
              v16 = *(_DWORD *)(result + 156) + 1;
              *(_DWORD *)(result + 156) = v16;
              if ( !v16 )
                ++*(_DWORD *)(result + 160);
            }
          }
        }
      }
    }
  }
  if ( (v6 | v4) << 29 )
  {
    if ( !v3 )
      return result;
    v17 = v6 >> 3;
    if ( v10 != v9 )
    {
      if ( (v6 & 7) != 0 )
      {
        v18 = v6;
        v44 = result + 64;
        while ( 1 )
        {
          v24 = v5 + v17;
          if ( v3 <= 8 )
            break;
          v19 = v7[1];
          v18 += 8;
          v20 = *v7++;
          v3 -= 8;
          v21 = v17 + 1;
          v22 = (unsigned __int8)((v19 >> (8 - v9)) | (v20 << v9));
          *(_BYTE *)(v24 + 64) |= v22 >> v10;
          if ( v18 >= 0x200 )
          {
            sub_17E158(v5, v44, 1);
            v18 &= 0x1FFu;
            v21 = 0;
          }
          v23 = v5 + v21;
          v17 = v18 >> 3;
          *(_BYTE *)(v23 + 64) = v22 << (8 - v10);
          *(_DWORD *)(v5 + 128) = v18;
        }
        result = v5 + v17;
        v25 = *(_BYTE *)(v5 + v17 + 64);
        v26 = v3 + v18;
        v27 = v17 + 1;
        v28 = *v7 << v9;
        v29 = (unsigned __int8)v28;
        *(_BYTE *)(result + 64) = v25 | ((int)(unsigned __int8)v28 >> v10);
        if ( v26 != 512 )
          goto LABEL_19;
      }
      else
      {
        while ( v3 > 8 )
        {
          v42 = v7[1];
          v6 += 8;
          v43 = *v7++;
          v3 -= 8;
          *(_BYTE *)(v5 + v17 + 64) = (v43 << v9) | (v42 >> (8 - v9));
          if ( v6 >= 0x200 )
          {
            v6 &= 0x1FFu;
            result = sub_17E158(v5, v5 + 64, 1);
          }
          *(_DWORD *)(v5 + 128) = v6;
          v17 = v6 >> 3;
        }
        v26 = v3 + v6;
        v28 = *v7 << v9;
        *(_BYTE *)(v17 + v5 + 64) = v28;
        if ( v26 != 512 )
          goto LABEL_20;
      }
      v26 = v10;
      result = sub_17E158(v5, v5 + 64, 1);
      if ( !v10 )
        goto LABEL_20;
      v27 = 0;
      v29 = (unsigned __int8)v28;
      v26 = 0;
LABEL_19:
      *(_BYTE *)(v27 + v5 + 64) = v29 << (8 - v10);
LABEL_20:
      *(_DWORD *)(v5 + 128) = v26;
      return result;
    }
    v30 = v17 + result;
    v7 = src + 1;
    result = *src;
    v31 = 255 >> v10;
    v32 = 8 - v10;
    v6 += v32;
    v3 -= v32;
    *(_BYTE *)(v30 + 64) |= (unsigned __int8)v31 & (unsigned __int8)result;
    if ( v6 == 512 )
    {
      v6 = 0;
      result = sub_17E158(v5, v5 + 64, 1);
    }
    *(_DWORD *)(v5 + 128) = v6;
  }
  if ( v3 )
  {
    v33 = v5 + 64;
    v34 = v6;
    do
    {
      while ( 1 )
      {
        v35 = v34 >> 3;
        v36 = 512 - v34;
        v37 = (512 - v34) >> 3;
        v38 = v7;
        v39 = (void *)(v33 + (v34 >> 3));
        v40 = v3 >> 3;
        if ( v34 )
          break;
        v41 = v3 >> 9;
        if ( !(v3 >> 9) )
          break;
        v3 &= 0x1FFu;
        v7 += 64 * v41;
        result = sub_17E158(v5, v38, v41);
        if ( !v3 )
          return result;
      }
      v34 += v3;
      if ( v36 > v3 )
      {
        v3 = 0;
        result = (int)memcpy((void *)(v33 + v35), v7, v40);
      }
      else
      {
        v7 += v37;
        v34 = 0;
        v3 -= v36;
        memcpy(v39, v38, v37);
        result = sub_17E158(v5, v5 + 64, 1);
      }
      *(_DWORD *)(v5 + 128) = v34;
    }
    while ( v3 );
  }
  return result;
}
