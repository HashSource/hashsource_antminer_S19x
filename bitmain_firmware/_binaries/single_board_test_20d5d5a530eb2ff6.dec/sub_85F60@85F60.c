int sub_85F60()
{
  int *v0; // r5
  int *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r2
  int *v6; // r6
  _DWORD *v7; // r4
  int *v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  char v18; // r3
  int result; // r0
  int v20; // [sp+8h] [bp-8h] BYREF
  int v21; // [sp+Ch] [bp-4h] BYREF

  dword_6DF27C = 0;
  v0 = (int *)&unk_6DF280;
  v1 = (int *)&unk_1A9090;
  sub_821C4();
  do
  {
    while ( 1 )
    {
      v2 = *(v1 - 10);
      __pld(v1);
      if ( v2 )
        break;
      *v0 = 0;
LABEL_3:
      v1 += 2;
      ++v0;
      if ( v1 == &dword_1A9140 )
        goto LABEL_7;
    }
    v3 = ((int (*)(void))sub_EAAB4)();
    v4 = sub_D99BC(v3);
    *v0 = v4;
    if ( v4 )
      goto LABEL_3;
    v5 = *(v1 - 11);
    v1 += 2;
    ++v0;
    dword_6DF27C |= v5;
  }
  while ( v1 != &dword_1A9140 );
LABEL_7:
  v6 = &dword_6DF30C;
  v7 = &unk_1A911C;
  dword_6DF2D8 = 0;
  v8 = &dword_6DF2D8;
  do
  {
    while ( 1 )
    {
      v10 = sub_EAAB4(*(v7 - 1));
      v11 = sub_D99DC(v10);
      v8[1] = v11;
      ++v8;
      if ( v11 )
        break;
      v12 = *(v7 - 2);
      v7 += 2;
      ++v6;
      dword_6DF2D8 |= v12;
      if ( v7 == (_DWORD *)&unk_1A917C )
        goto LABEL_12;
    }
    v9 = sub_D8C78(v11);
    if ( v9 < 0 )
      return 0;
    v7 += 2;
    *v6++ = v9;
  }
  while ( v7 != (_DWORD *)&unk_1A917C );
LABEL_12:
  if ( !dword_6DF2DC || !dword_6DF2E0 )
    return 0;
  dword_6DF33C = 0;
  dword_6DF340 = 0;
  v20 = 0;
  v21 = 0;
  v13 = sub_AD9B8((int)&v20, "gost-mac");
  if ( v13 && sub_ADAF4(&v21, 0, 0, 0, 0, v13) <= 0 )
    v21 = 0;
  sub_CDDF8(v20);
  dword_21F57C = v21;
  if ( v21 )
    dword_6DF318 = 32;
  else
    dword_6DF2D8 |= 8u;
  v20 = 0;
  v21 = 0;
  v14 = sub_AD9B8((int)&v20, "gost-mac-12");
  if ( v14 && sub_ADAF4(&v21, 0, 0, 0, 0, v14) <= 0 )
    v21 = 0;
  sub_CDDF8(v20);
  dword_21F58C = v21;
  if ( v21 )
    dword_6DF328 = 32;
  else
    dword_6DF2D8 |= 0x100u;
  v20 = 0;
  v21 = 0;
  v15 = sub_AD9B8((int)&v20, "gost2001");
  if ( v15 && sub_ADAF4(&v21, 0, 0, 0, 0, v15) <= 0 )
    v21 = 0;
  sub_CDDF8(v20);
  if ( !v21 )
    dword_6DF340 |= 0xA0u;
  v20 = 0;
  v21 = 0;
  v16 = sub_AD9B8((int)&v20, "gost2012_256");
  if ( v16 && sub_ADAF4(&v21, 0, 0, 0, 0, v16) <= 0 )
    v21 = 0;
  sub_CDDF8(v20);
  if ( !v21 )
    dword_6DF340 |= 0x80u;
  v20 = 0;
  v21 = 0;
  v17 = sub_AD9B8((int)&v20, "gost2012_512");
  if ( v17 && sub_ADAF4(&v21, 0, 0, 0, 0, v17) <= 0 )
    v21 = 0;
  sub_CDDF8(v20);
  if ( v21 )
  {
    v18 = dword_6DF340;
  }
  else
  {
    v18 = dword_6DF340 | 0x80;
    dword_6DF340 |= 0x80u;
  }
  result = 1;
  if ( (v18 & 0xA0) == 0xA0 )
    dword_6DF33C |= 0x10u;
  return result;
}
