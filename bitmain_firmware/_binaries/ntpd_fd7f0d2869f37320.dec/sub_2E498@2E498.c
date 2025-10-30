int __fastcall sub_2E498(int (__fastcall *a1)(int), int a2)
{
  _DWORD *v4; // r1
  unsigned int *v5; // r12
  _BYTE *v6; // r0
  unsigned int v7; // r3
  _DWORD *v8; // r2
  int v10; // [sp+18h] [bp-D4h]
  int v11; // [sp+28h] [bp-C4h] BYREF
  _DWORD s1[5]; // [sp+2Ch] [bp-C0h] BYREF
  _BYTE v13[20]; // [sp+40h] [bp-ACh] BYREF
  const unsigned __int16 *v14[23]; // [sp+54h] [bp-98h] BYREF
  unsigned __int8 v15[2]; // [sp+B0h] [bp-3Ch] BYREF
  char s[58]; // [sp+B2h] [bp-3Ah] BYREF

  v10 = -1;
  sub_7945C(v14);
  while ( sub_2D3B4(a1, a2, v15) )
  {
    if ( !strncmp((const char *)v15, "#h", 2u) )
    {
      memset(s1, 0, sizeof(s1));
      if ( sscanf(s, " %lx %lx %lx %lx %lx%n", v13, &v13[4], &v13[8], &v13[12], &v13[16], &v11) == 5
        && (unsigned __int8)s[v11] <= 0x20u )
      {
        v4 = s1;
        v5 = (unsigned int *)v13;
        do
        {
          v6 = v4 + 1;
          v7 = *v5;
          v8 = v4 + 1;
          do
          {
            *((_BYTE *)v8 - 1) = v7;
            v8 = (_DWORD *)((char *)v8 - 1);
            v7 >>= 8;
          }
          while ( v4 != v8 );
          *v5++ = v7;
          ++v4;
        }
        while ( v13 != v6 );
        v10 = 1;
      }
      else
      {
        v10 = 0;
      }
    }
    else if ( !strncmp((const char *)v15, "#@", 2u) || !strncmp((const char *)v15, "#$", 2u) )
    {
      sub_2D1B0(v14, (unsigned __int8 *)s);
    }
    else if ( ((*_ctype_b_loc())[v15[0]] & 0x800) != 0 )
    {
      sub_2D1B0(v14, v15);
    }
  }
  sub_796B4(v14, v13);
  sub_79514(v14);
  if ( v10 == -1 )
    return 0;
  if ( !v10 )
    return -2;
  if ( !memcmp(s1, v13, 0x14u) )
    return 1;
  return -1;
}
