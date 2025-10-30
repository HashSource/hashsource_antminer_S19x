int __fastcall sub_CCF88(int a1, void *dest, unsigned int *a3)
{
  int v3; // r3
  const void *v4; // r6
  unsigned int v5; // r7
  int v6; // r5
  bool v7; // zf
  size_t v8; // r3
  int v10; // r3
  bool v11; // zf
  int v12; // r3

  v3 = *(_DWORD *)(a1 + 24);
  if ( dest )
  {
    if ( v3 )
    {
      v4 = *(const void **)(v3 + 60);
      if ( !v4 )
        return 0;
      v5 = *a3;
      v6 = **(_DWORD **)(a1 + 12);
      v7 = v6 == 1034;
      if ( v6 != 1034 )
        v7 = v6 == 1087;
      if ( !v7 )
      {
        if ( v6 == 1035 )
        {
          if ( v5 > 0x37 )
          {
            v8 = 56;
            goto LABEL_16;
          }
        }
        else if ( v5 > 0x38 )
        {
          v8 = 57;
LABEL_16:
          *a3 = v8;
          memcpy(dest, v4, v8);
          return 1;
        }
        return 0;
      }
      v3 = 0;
      if ( v5 > 0x1F )
      {
        v8 = 32;
        goto LABEL_16;
      }
    }
    return v3;
  }
  v10 = **(_DWORD **)(a1 + 12);
  v11 = v10 == 1034;
  if ( v10 != 1034 )
    v11 = v10 == 1087;
  if ( v11 )
  {
    v12 = 32;
  }
  else if ( v10 == 1035 )
  {
    v12 = 56;
  }
  else
  {
    v12 = 57;
  }
  *a3 = v12;
  return 1;
}
