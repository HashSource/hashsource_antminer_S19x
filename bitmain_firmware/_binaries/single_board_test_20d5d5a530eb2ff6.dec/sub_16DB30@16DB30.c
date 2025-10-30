int __fastcall sub_16DB30(int a1, unsigned int *a2, _BYTE *a3, signed int a4)
{
  unsigned int v6; // r2
  _BYTE *v7; // r3
  int v8; // r1
  const char *v9; // r8
  const char *v10; // r7
  int v11; // t1
  int result; // r0
  void *v15; // r0
  int v16; // r2
  _BYTE v17[16]; // [sp+8h] [bp-20h] BYREF
  _BYTE v18[16]; // [sp+18h] [bp-10h] BYREF

  v6 = *a2;
  *(_DWORD *)(a1 + 16) &= ~1u;
  if ( !v6 )
    return 0;
  if ( v6 <= 2 )
  {
    sub_B5560(v17, 0xDu, "%d", a2[5]);
    sub_B5560(v18, 0xDu, "%d", a2[6]);
    if ( (int)a2[5] > a4 )
    {
      *(_DWORD *)(a1 + 16) |= 1u;
      sub_D0048(40, 120, 101, (int)"crypto/ui/ui_lib.c", 905);
      sub_D1240(5, "You must type in ", v17, " to ", v18, " characters");
    }
    else
    {
      if ( a4 <= (int)a2[6] )
      {
        v15 = (void *)a2[3];
        if ( v15 )
        {
          memcpy(v15, a3, a4);
          result = 0;
          if ( a4 <= (int)a2[6] )
            *(_BYTE *)(a2[3] + a4) = 0;
          a2[4] = a4;
          return result;
        }
        v16 = 920;
        goto LABEL_25;
      }
      *(_DWORD *)(a1 + 16) |= 1u;
      sub_D0048(40, 120, 100, (int)"crypto/ui/ui_lib.c", 912);
      sub_D1240(5, "You must type in ", v17, " to ", v18, " characters");
    }
    return -1;
  }
  if ( v6 != 3 )
    return 0;
  v7 = (_BYTE *)a2[3];
  if ( !v7 )
  {
    v16 = 934;
LABEL_25:
    sub_D0048(40, 120, 105, (int)"crypto/ui/ui_lib.c", v16);
    return -1;
  }
  *v7 = 0;
  v8 = (unsigned __int8)*a3;
  if ( !*a3 )
    return v8;
  v9 = (const char *)a2[6];
  while ( 1 )
  {
    if ( strchr(v9, v8) )
    {
      *(_BYTE *)a2[3] = *v9;
      return 0;
    }
    v10 = (const char *)a2[7];
    if ( strchr(v10, (unsigned __int8)*a3) )
      break;
    v11 = (unsigned __int8)*++a3;
    v8 = v11;
    if ( !v11 )
      return v8;
  }
  *(_BYTE *)a2[3] = *v10;
  return 0;
}
