int __fastcall sub_D89D0(int *a1, int a2)
{
  int (*v2)(void); // r3
  int v3; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r3

  v2 = *(int (**)(void))(*a1 + 40);
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
    v9 = v8 & 0xF0007;
    if ( (v8 & 0xF0007) == 0x10001 )
      goto LABEL_10;
    if ( (v8 & 0xF0007u) <= 0x10001 )
    {
      if ( (unsigned int)(v9 - 6) <= 1 )
        goto LABEL_10;
    }
    else
    {
      if ( v9 == 65538 )
        return 1;
      if ( v9 == 65539 )
        goto LABEL_10;
    }
    v3 = sub_D8978(a1, a2);
  }
  if ( v3 > 0 )
    return v3;
  if ( v3 == -2 )
  {
LABEL_10:
    v3 = -1;
    sub_D0048(6, 204, 107, (int)"crypto/evp/evp_lib.c", 81);
    return v3;
  }
LABEL_8:
  sub_D0048(6, 204, 122, (int)"crypto/evp/evp_lib.c", 81);
  return v3 | (v3 >> 31);
}
