int __fastcall sub_302C04(int a1)
{
  int v1; // r4
  int v2; // r3
  int result; // r0
  int v4; // r5
  _UNKNOWN **v5; // r7
  const char *v6; // r6
  const char *v7; // r8
  size_t i; // r2
  const char *v9; // t1
  const char *v10; // r0
  int v11; // r3

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 20) & 0x1000) != 0 )
      return 67;
    if ( (char **)v1 == &off_4708A8 )
    {
      v2 = *(_DWORD *)(a1 + 12);
      if ( (v2 & 0x80) == 0 )
        return 85;
      if ( (v2 & 0x10000) != 0 )
        return 118;
      return 119;
    }
    if ( (char **)v1 == &off_4709F8 )
      return 73;
  }
  v4 = *(_DWORD *)(a1 + 12);
  if ( (v4 & 0x400000) != 0 )
    return 105;
  if ( (v4 & 0x80) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
      return 86;
    else
      return 87;
  }
  if ( (v4 & 0x800000) != 0 )
    return 117;
  if ( (v4 & 3) == 0 )
    return 63;
  if ( (char **)v1 != &off_470950 )
  {
    if ( v1 )
    {
      v5 = &off_42F174;
      v6 = ".bss";
      v7 = *(const char **)v1;
      for ( i = 4; strncmp(v7, v6, i); i = strlen(v10) )
      {
        v9 = (const char *)v5[2];
        v5 += 2;
        v6 = v9;
        v10 = v9;
        if ( !v9 )
          goto LABEL_33;
      }
      result = *((unsigned __int8 *)v5 + 4);
      if ( result != 63 )
        goto LABEL_21;
LABEL_33:
      v11 = *(_DWORD *)(v1 + 20);
      if ( (v11 & 0x10) != 0 )
      {
        result = 116;
      }
      else if ( (v11 & 0x20) != 0 )
      {
        if ( (v11 & 8) != 0 )
        {
          result = 114;
        }
        else if ( (v11 & 0x400000) != 0 )
        {
          result = 103;
        }
        else
        {
          result = 100;
        }
      }
      else if ( (v11 & 0x100) != 0 )
      {
        if ( (v11 & 0x2000) != 0 )
        {
          result = 78;
        }
        else if ( (*(_DWORD *)(v1 + 20) & 0x108) == 0x108 )
        {
          result = 110;
        }
        else
        {
          result = 63;
        }
      }
      else if ( (v11 & 0x400000) != 0 )
      {
        result = 115;
      }
      else
      {
        result = 98;
      }
      goto LABEL_21;
    }
    return 63;
  }
  result = 97;
LABEL_21:
  if ( (v4 & 2) != 0 )
    return byte_438698[result];
  return result;
}
