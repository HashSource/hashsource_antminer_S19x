int __fastcall sub_11FAA0(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r6
  char *v10; // r0
  int v11; // r3
  char *v12; // r4
  int v13; // r7
  char *v14; // r5
  const char *v15; // r0
  int v16; // r6
  _DWORD *v17; // r11
  int v18; // r1
  int result; // r0
  void *v20; // r1
  unsigned int v21; // r5
  void *v22[2]; // [sp+Ch] [bp-8h] BYREF

  v8 = sub_11054C(a2);
  v22[0] = (void *)sub_AE2B4(v8);
  v9 = sub_AE2A8(v8);
  v10 = sub_11DF20(a2);
  if ( !v10 )
  {
    result = a3 & 0xF0000;
    v20 = v22[0];
    if ( (a3 & 0xF0000) == 0x10000 )
    {
      sub_B550C(a1, "%*s<Not Supported>", a4, &byte_1A4198);
      return 1;
    }
    if ( (a3 & 0xF0000u) <= 0x10000 )
    {
      if ( !result )
        return result;
    }
    else
    {
      if ( result == 0x20000 )
        return sub_12D234(a1, v20, v9, a4, -1);
      if ( result == 196608 )
        return sub_12F2E8(a1, v20, v9, a4);
    }
    return 1;
  }
  v11 = *((_DWORD *)v10 + 2);
  v12 = v10;
  if ( v11 )
    v13 = sub_B0A18(0, v22, v9, v11);
  else
    v13 = (*((int (__fastcall **)(_DWORD, void **, int))v10 + 5))(0, v22, v9);
  if ( !v13 )
  {
    v21 = a3 & 0xF0000;
    v20 = v22[0];
    if ( v21 == 0x10000 )
    {
      sub_B550C(a1, "%*s<Parse Error>", a4, &byte_1A4198);
      return 1;
    }
    if ( v21 > 0x10000 )
    {
      if ( v21 != 0x20000 )
      {
        if ( v21 != 196608 )
          return 1;
        return sub_12F2E8(a1, v20, v9, a4);
      }
      return sub_12D234(a1, v20, v9, a4, -1);
    }
    result = 0;
    if ( !v21 )
      return result;
    return 1;
  }
  v14 = (char *)*((_DWORD *)v12 + 7);
  if ( v14 )
  {
    v15 = (const char *)((int (__fastcall *)(char *, int))v14)(v12, v13);
    v14 = (char *)v15;
    if ( v15 )
    {
      v16 = 1;
      v17 = 0;
      sub_B550C(a1, "%*s%s", a4, &byte_1A4198, v15);
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
  }
  else
  {
    v17 = (_DWORD *)*((_DWORD *)v12 + 9);
    if ( v17 )
    {
      v17 = (_DWORD *)((int (__fastcall *)(char *, int, _DWORD))v17)(v12, v13, *((_DWORD *)v12 + 7));
      if ( v17 )
      {
        v16 = 1;
        sub_11F964(a1, v17, a4, *((_DWORD *)v12 + 1) & 4);
      }
      else
      {
        v16 = 0;
        v14 = 0;
      }
    }
    else
    {
      v16 = *((_DWORD *)v12 + 11);
      if ( v16 )
      {
        v14 = 0;
        v16 = ((int (__fastcall *)(char *, int, int, int))v16)(v12, v13, a1, a4) != 0;
      }
      else
      {
        v17 = 0;
        v14 = 0;
      }
    }
  }
  sub_10BFDC((int)v17, (void (__fastcall *)(int))X509V3_conf_free);
  CRYPTO_free(v14);
  v18 = *((_DWORD *)v12 + 2);
  if ( v18 )
  {
    sub_B17C4(v13, v18);
    return v16;
  }
  else
  {
    (*((void (__fastcall **)(int))v12 + 4))(v13);
    return v16;
  }
}
