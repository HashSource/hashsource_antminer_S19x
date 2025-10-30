int __fastcall sub_ED27C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3
  char *v5; // r3
  unsigned int v6; // r2
  bool v7; // cc
  int v8; // r3
  int v9; // r1
  __int16 *v10; // r2
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r2
  char *v15; // r3
  unsigned int v16; // r2
  bool v17; // cc
  int v18; // [sp+0h] [bp-60h] BYREF
  int v19; // [sp+4h] [bp-5Ch] BYREF
  int v20; // [sp+8h] [bp-58h] BYREF
  int v21; // [sp+Ch] [bp-54h]
  int v22; // [sp+10h] [bp-50h]
  _BYTE v23[24]; // [sp+14h] [bp-4Ch] BYREF
  int v24; // [sp+2Ch] [bp-34h]

  v18 = 0;
  sub_2665F0(v23);
  if ( !a1 || a1[19] || a1[20] )
  {
    v2 = sub_270624(a1);
    v3 = v24;
    v19 = v2;
    if ( v24 )
    {
      v5 = *(char **)(a1[19] + 24);
      v18 = a1[20];
      v6 = *v5;
      v7 = v6 > 1;
      if ( v6 != 1 )
        v7 = (unsigned __int8)(v6 - 18) > 1u;
      v3 = !v7;
    }
    sub_ECBD8(&v18, &v19, 0, v3);
    if ( (unsigned int)**(unsigned __int8 **)(v19 + 24) - 3 <= 1 )
    {
      sub_ED0D8(v19, &v20);
      v8 = v20;
      if ( v20 )
        v8 = 1;
      if ( v21 )
        ++v8;
      if ( v22 )
        ++v8;
      v9 = *(_DWORD *)(v19 + 24);
      if ( (*(_WORD *)(v9 + 2) & 0x380) == 0x80 )
        v10 = *(__int16 **)(v9 + 28);
      else
        v10 = &word_3B4A2C;
      return *v10 + v8;
    }
    else
    {
      return sub_ECEF0();
    }
  }
  else
  {
    v11 = sub_270624(a1[22]);
    v12 = v24;
    v19 = v11;
    if ( v24 )
    {
      v13 = a1[22];
      v14 = *(_DWORD *)(v13 + 80);
      v15 = *(char **)(*(_DWORD *)(v13 + 76) + 24);
      v18 = v14;
      v16 = *v15;
      v17 = v16 > 1;
      if ( v16 != 1 )
        v17 = (unsigned __int8)(v16 - 18) > 1u;
      v12 = !v17;
    }
    sub_ECBD8(&v18, &v19, 0, v12);
    sub_ED0D8(v19, &v20);
    if ( sub_33CAA0((int)a1, "public") )
    {
      if ( sub_33CAA0((int)a1, "private") )
        return v22;
      else
        return v21;
    }
    else
    {
      return v20;
    }
  }
}
