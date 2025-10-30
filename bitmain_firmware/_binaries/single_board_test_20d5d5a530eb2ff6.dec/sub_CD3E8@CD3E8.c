int __fastcall sub_CD3E8(int a1, void *dest, unsigned int *a3)
{
  const void *v3; // r5
  unsigned int v4; // r6
  int v5; // r4
  bool v6; // zf
  size_t v7; // r3
  int v9; // r3
  bool v10; // zf
  int v11; // r3

  v3 = *(const void **)(a1 + 24);
  if ( dest )
  {
    if ( v3 )
    {
      v4 = *a3;
      v5 = **(_DWORD **)(a1 + 12);
      v6 = v5 == 1034;
      if ( v5 != 1034 )
        v6 = v5 == 1087;
      if ( v6 )
      {
        if ( v4 <= 0x1F )
          return 0;
        v7 = 32;
        goto LABEL_15;
      }
      if ( v5 == 1035 )
      {
        if ( v4 > 0x37 )
        {
          v7 = 56;
          goto LABEL_15;
        }
      }
      else if ( v4 > 0x38 )
      {
        v7 = 57;
LABEL_15:
        *a3 = v7;
        memcpy(dest, v3, v7);
        return 1;
      }
      return 0;
    }
    return 0;
  }
  else
  {
    v9 = **(_DWORD **)(a1 + 12);
    v10 = v9 == 1034;
    if ( v9 != 1034 )
      v10 = v9 == 1087;
    if ( v10 )
    {
      v11 = 32;
    }
    else if ( v9 == 1035 )
    {
      v11 = 56;
    }
    else
    {
      v11 = 57;
    }
    *a3 = v11;
    return 1;
  }
}
