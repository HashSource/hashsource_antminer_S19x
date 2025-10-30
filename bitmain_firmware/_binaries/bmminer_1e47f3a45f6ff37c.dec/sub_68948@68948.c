int sub_68948()
{
  double v0; // d0
  __int64 v2; // r0
  unsigned int v3; // r4
  int v5; // [sp+8h] [bp-8Ch] BYREF
  int v6; // [sp+Ch] [bp-88h]
  int v7; // [sp+10h] [bp-84h] BYREF
  int v8; // [sp+14h] [bp-80h]
  __int16 v9; // [sp+18h] [bp-7Ch]
  unsigned int v10; // [sp+1Ch] [bp-78h] BYREF
  __int64 dest; // [sp+20h] [bp-74h] BYREF
  _BYTE src[8]; // [sp+2Ch] [bp-68h] BYREF
  _BYTE v13[6]; // [sp+34h] [bp-60h] BYREF
  _BYTE v14[18]; // [sp+3Ah] [bp-5Ah] BYREF
  double *v15; // [sp+4Ch] [bp-48h]
  _BYTE *v16; // [sp+50h] [bp-44h]
  unsigned int v17; // [sp+54h] [bp-40h]
  unsigned int v18; // [sp+58h] [bp-3Ch]
  unsigned int v19; // [sp+5Ch] [bp-38h]
  unsigned __int16 v20; // [sp+62h] [bp-32h]
  unsigned int v21; // [sp+64h] [bp-30h]
  __int64 v22; // [sp+68h] [bp-2Ch]
  char v23; // [sp+71h] [bp-23h]
  __int16 v24; // [sp+72h] [bp-22h]
  __int16 v25; // [sp+74h] [bp-20h]
  unsigned __int8 v26; // [sp+77h] [bp-1Dh]
  unsigned int k; // [sp+78h] [bp-1Ch]
  unsigned int j; // [sp+7Ch] [bp-18h]
  int v29; // [sp+80h] [bp-14h]
  unsigned int i; // [sp+84h] [bp-10h]

  v26 = sub_68890(dword_536350);
  if ( v26 == 255 )
    return -1;
  if ( sub_6197C() )
  {
    if ( sub_68464(v26, (int)src, 0x20u) )
      return -1;
  }
  else if ( sub_68050(v26, (int)src, 0x20u) )
  {
    return -1;
  }
  v25 = (v14[16] << 8) + v14[17];
  v24 = sub_60D9C(src, 30);
  if ( v25 == v24 )
  {
    v23 = src[0];
    if ( (src[0] & 0xFE) == 2 )
      v23 = 2;
    memcpy(&dest, src, sizeof(dest));
    memcpy(&v10, v13, sizeof(v10));
    LODWORD(v2) = sub_60D58(dest, HIDWORD(dest));
    dest = v2;
    v10 = sub_60D30(v10);
    v22 = dest & 0x1FFFFFFFFFFFFFFLL;
    v21 = v10;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    sub_686FC((int)&v5, 0xCu, dest & 0x1FFFFFFFFFFFFFFLL, 36);
    sub_686FC((int)&v7 + 3, 7u, v21, 36);
    dword_536358[0] = v5;
    dword_536358[1] = v6;
    dword_536358[2] = v7;
    dword_536358[3] = v8;
    word_536368 = v9;
    v20 = (v14[14] << 8) + v14[15];
    v19 = v20 / 0x174u;
    v18 = v20 / 0x1Fu % 0xC + 1;
    v17 = v20 % 0x1Fu + 1;
    dword_5364B0 = 10000 * v19 + 100 * v18 + v17;
    v16 = v14;
    for ( i = 0; i <= 0xD && (char)v16[i] != -128; ++i )
      ;
    v15 = (double *)dword_536358;
    dword_53636C = i + 1;
    v29 = (__int16)((v13[4] << 8) + v13[5]);
    if ( sub_6197C() )
    {
      if ( (unsigned __int8)sub_60F38((int)(v15 + 3), *((_DWORD *)v15 + 5)) != 1 )
        return -1;
      v15[23] = v15[3] + (double)v29 / 1000.0;
      for ( j = 0; j < i; ++j )
      {
        v29 += (char)v16[j];
        v15[j + 24] = v15[j + 4] + (double)v29 / 1000.0;
      }
    }
    else
    {
      if ( (unsigned __int8)sub_60E64((int)(v15 + 3), *((_DWORD *)v15 + 5)) != 1 )
        return -1;
      sub_67AA0();
      v15[23] = v0 + (double)v29 / 1000.0;
      for ( k = 0; k < i; ++k )
      {
        v29 += (char)v16[k];
        v3 = k + 1;
        sub_67AA0();
        v15[v3 + 23] = v0 + (double)v29 / 1000.0;
      }
    }
    return 0;
  }
  return -1;
}
