int sub_69438()
{
  double v0; // d0
  __int64 v2; // r0
  int v4; // [sp+8h] [bp-8Ch] BYREF
  int v5; // [sp+Ch] [bp-88h]
  int v6; // [sp+10h] [bp-84h] BYREF
  int v7; // [sp+14h] [bp-80h]
  __int16 v8; // [sp+18h] [bp-7Ch]
  unsigned int v9; // [sp+1Ch] [bp-78h]
  __int64 dest; // [sp+20h] [bp-74h] BYREF
  _BYTE src[8]; // [sp+2Ch] [bp-68h] BYREF
  unsigned int v12; // [sp+34h] [bp-60h]
  unsigned __int8 v13; // [sp+38h] [bp-5Ch]
  unsigned __int8 v14; // [sp+39h] [bp-5Bh]
  _BYTE v15[18]; // [sp+3Ah] [bp-5Ah] BYREF
  double *v16; // [sp+4Ch] [bp-48h]
  _BYTE *v17; // [sp+50h] [bp-44h]
  unsigned int v18; // [sp+54h] [bp-40h]
  unsigned int v19; // [sp+58h] [bp-3Ch]
  unsigned int v20; // [sp+5Ch] [bp-38h]
  unsigned __int16 v21; // [sp+62h] [bp-32h]
  unsigned int v22; // [sp+64h] [bp-30h]
  __int64 v23; // [sp+68h] [bp-2Ch]
  char v24; // [sp+71h] [bp-23h]
  __int16 v25; // [sp+72h] [bp-22h]
  __int16 v26; // [sp+74h] [bp-20h]
  unsigned __int8 v27; // [sp+77h] [bp-1Dh]
  unsigned int k; // [sp+78h] [bp-1Ch]
  unsigned int j; // [sp+7Ch] [bp-18h]
  int v30; // [sp+80h] [bp-14h]
  unsigned int i; // [sp+84h] [bp-10h]

  v27 = sub_69380(dword_531540);
  if ( v27 == 255 )
    return -1;
  if ( sub_62FF4() )
  {
    if ( sub_68F5C(v27, (int)src, 0x20u) )
      return -1;
  }
  else if ( sub_68C68(v27, (int)src, 0x20u) )
  {
    return -1;
  }
  v26 = (v15[16] << 8) + v15[17];
  v25 = sub_625A4(src, 30);
  if ( v26 == v25 )
  {
    v24 = src[0];
    if ( (src[0] & 0xFE) == 2 )
      v24 = 2;
    memcpy(&dest, src, sizeof(dest));
    v9 = v12;
    LODWORD(v2) = sub_62560(dest, HIDWORD(dest));
    dest = v2;
    v9 = sub_62538(v9);
    v23 = dest & 0x1FFFFFFFFFFFFFFLL;
    v22 = v9;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    sub_691EC((int)&v4, 0xCu, dest & 0x1FFFFFFFFFFFFFFLL, 36);
    sub_691EC((int)&v6 + 3, 7u, v22, 36);
    dword_531548[0] = v4;
    dword_531548[1] = v5;
    dword_531548[2] = v6;
    dword_531548[3] = v7;
    word_531558 = v8;
    v21 = (v15[14] << 8) + v15[15];
    v20 = v21 / 0x174u;
    v19 = v21 / 0x1Fu % 0xC + 1;
    v18 = v21 % 0x1Fu + 1;
    dword_5316A0 = 10000 * v20 + 100 * v19 + v18;
    v17 = v15;
    for ( i = 0; i <= 0xD && (char)v17[i] != -128; ++i )
      ;
    v16 = (double *)dword_531548;
    dword_53155C = i + 1;
    v30 = (__int16)((v13 << 8) + v14);
    if ( sub_62FF4() )
    {
      if ( (unsigned __int8)sub_62740((int)(v16 + 3), *((_DWORD *)v16 + 5)) != 1 )
        return -1;
      v16[23] = v16[3] + (double)v30 / 1000.0;
      for ( j = 0; j < i; ++j )
      {
        v30 += (char)v17[j];
        v16[j + 24] = v16[j + 4] + (double)v30 / 1000.0;
      }
    }
    else
    {
      if ( (unsigned __int8)sub_6266C((int)(v16 + 3), *((_DWORD *)v16 + 5)) != 1 )
        return -1;
      sub_686B8();
      v16[23] = v0 + (double)v30 / 1000.0;
      for ( k = 0; k < i; ++k )
      {
        v30 += (char)v17[k];
        sub_686B8();
        v16[k + 24] = v0 + (double)v30 / 1000.0;
      }
    }
    return 0;
  }
  return -1;
}
