int __fastcall sub_2E04C(int (__fastcall *a1)(int), int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r7
  unsigned int *v8; // r0
  unsigned int v9; // r3
  unsigned int v10; // t1
  _DWORD *v11; // r2
  int v12; // [sp+20h] [bp-2Ch] BYREF
  int s1; // [sp+24h] [bp-28h] BYREF
  _BYTE v14[16]; // [sp+28h] [bp-24h] BYREF
  _BYTE v15[20]; // [sp+38h] [bp-14h] BYREF
  const unsigned __int16 *v16[23]; // [sp+4Ch] [bp+0h] BYREF
  unsigned __int8 v17[2]; // [sp+A8h] [bp+5Ch] BYREF
  char s[58]; // [sp+AAh] [bp+5Eh] BYREF

  v4 = -1;
  sub_7819C(v16);
  while ( sub_2D014(a1, a2, v17) )
  {
    v5 = strncmp((const char *)v17, "#h", 2u);
    v6 = v5;
    if ( v5 )
    {
      if ( !strncmp((const char *)v17, "#@", 2u) || !strncmp((const char *)v17, "#$", 2u) )
      {
        sub_2CE3C(v16, (unsigned __int8 *)s);
      }
      else if ( ((*_ctype_b_loc())[v17[0]] & 0x800) != 0 )
      {
        sub_2CE3C(v16, v17);
      }
    }
    else
    {
      s1 = 0;
      memset(v14, 0, sizeof(v14));
      if ( sscanf(s, " %lx %lx %lx %lx %lx%n", v15, &v15[4], &v15[8], &v15[12], &v15[16], &v12) == 5
        && (unsigned __int8)s[v12] <= 0x20u )
      {
        v8 = (unsigned int *)v15;
        do
        {
          v10 = *v8++;
          v9 = v10;
          v11 = &v14[v5];
          do
          {
            *((_BYTE *)v11 - 1) = v9;
            v11 = (_DWORD *)((char *)v11 - 1);
            v9 >>= 8;
          }
          while ( v11 != (_DWORD *)&v14[v5 - 4] );
          v5 += 4;
          *(v8 - 1) = v9;
        }
        while ( v5 != 20 );
        v6 = 1;
      }
      v4 = v6;
    }
  }
  sub_783E8((int)v16);
  sub_78250(v16);
  if ( v4 == -1 )
    return 0;
  if ( !v4 )
    return -2;
  if ( !memcmp(&s1, v15, 0x14u) )
    return 1;
  return -1;
}
