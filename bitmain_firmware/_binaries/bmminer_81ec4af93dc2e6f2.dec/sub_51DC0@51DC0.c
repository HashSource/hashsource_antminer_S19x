int __fastcall sub_51DC0(_DWORD *a1)
{
  int result; // r0
  char v3[2048]; // [sp+8h] [bp-80Ch] BYREF
  unsigned int v4; // [sp+808h] [bp-Ch] BYREF
  int v5; // [sp+80Ch] [bp-8h]

  v4 = 0;
  v5 = 0;
  memset(a1, 0, 0x124u);
  sub_52E24(2, &v4);
  if ( v4 )
  {
    if ( (v4 & 0x80000000) == 0 )
    {
      dword_530F18 = 0;
      v4 = (unsigned __int16)v4;
      snprintf(v3, 0x800u, "HASH_ON_PLUG V9 = 0x%x\n", (unsigned __int16)v4);
      result = sub_3AF5C(2, v3, 0, (int)v3);
      while ( v4 )
      {
        if ( (v4 & 1) != 0 )
        {
          a1[18 * *a1 + 1] = v5;
          a1[18 * *a1 + 3 + a1[18 * *a1 + 2]] = v5;
          result = (int)a1;
          ++a1[18 * (*a1)++ + 2];
        }
        v4 >>= 1;
        ++v5;
      }
    }
    else
    {
      dword_530F18 = 1;
      v4 >>= 24;
      snprintf(v3, 0x800u, "HASH_ON_PLUG T9 = 0x%x\n", v4);
      result = sub_3AF5C(2, v3, 0, (int)v3);
      while ( v4 )
      {
        if ( (v4 & 1) != 0 )
        {
          a1[18 * *a1 + 1] = v5;
          if ( v5 == 1 )
          {
            a1[18 * *a1 + 3] = 2;
            a1[18 * *a1 + 4] = 10;
            a1[18 * *a1 + 5] = 11;
            a1[18 * *a1 + 2] = 3;
          }
          else if ( v5 )
          {
            if ( v5 == 2 )
            {
              a1[18 * *a1 + 3] = 3;
              a1[18 * *a1 + 4] = 12;
              a1[18 * *a1 + 5] = 13;
              a1[18 * *a1 + 2] = 3;
            }
          }
          else
          {
            a1[18 * *a1 + 3] = 1;
            a1[18 * *a1 + 4] = 8;
            a1[18 * *a1 + 5] = 9;
            a1[18 * *a1 + 2] = 3;
          }
          ++*a1;
        }
        v4 >>= 1;
        ++v5;
      }
    }
  }
  else
  {
    strcpy(v3, "Cannot Find Any Plug In!\r\n");
    return sub_3AF5C(0, v3, 0, (int)v3);
  }
  return result;
}
