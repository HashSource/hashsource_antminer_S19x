int __fastcall sub_D8BA8(int *a1, _DWORD *a2)
{
  int (*v2)(void); // r4
  int v3; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r2
  unsigned int v10; // r3

  v2 = *(int (**)(void))(*a1 + 36);
  if ( v2 )
  {
    v3 = v2();
  }
  else
  {
    if ( (*(_DWORD *)(*a1 + 16) & 0x1000) == 0 )
    {
      v3 = -1;
      goto LABEL_8;
    }
    v7 = sub_D8920((int)a1);
    v8 = sub_D8928(v7);
    v10 = v8 & 0xF0007;
    if ( (v8 & 0xF0007) == 0x10001 )
      goto LABEL_10;
    if ( (v8 & 0xF0007u) <= 0x10001 )
    {
      v10 -= 6;
      if ( v10 <= 1 )
        goto LABEL_10;
    }
    else
    {
      if ( v10 == 65538 )
      {
        if ( sub_D8BA0((int)a1) == 246 )
          sub_AD794(a2, 5, 0);
        return 1;
      }
      v9 = 65539;
      if ( v10 == 65539 )
        goto LABEL_10;
    }
    v3 = sub_D8A7C(a1, (int)a2, v9, v10);
  }
  if ( v3 > 0 )
    return v3;
  if ( v3 == -2 )
  {
LABEL_10:
    v3 = -1;
    sub_D0048(6, 205, 228, (int)"crypto/evp/evp_lib.c", 46);
    return v3;
  }
LABEL_8:
  sub_D0048(6, 205, 122, (int)"crypto/evp/evp_lib.c", 46);
  return v3 | (v3 >> 31);
}
