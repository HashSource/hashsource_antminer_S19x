int __fastcall sub_762A8(unsigned int a1)
{
  int v2; // r6
  unsigned int v3; // r4
  int v4; // r5
  unsigned __int8 *v5; // r9
  int v6; // r0
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(v8, 0x800u, " Bad T-sensor param, input chain is %d\n", a1);
    nullsub_8();
    return -2147482111;
  }
  else
  {
    v2 = 16 * a1;
    v3 = 0;
    v4 = 68 * a1;
    v5 = &byte_65E5D8[68 * a1];
    if ( *v5 )
    {
      do
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)&byte_65E5D8[8 * v3 + 8 + v4];
          if ( v6 )
            break;
          v3 = (unsigned __int8)(v3 + 1);
          if ( *v5 <= v3 )
            return (int)j_memset(&byte_65E5D8[4 * v2 + 4 * a1], 0, 0x44u);
        }
        sub_76698(v6);
        v3 = (unsigned __int8)(v3 + 1);
      }
      while ( *v5 > v3 );
    }
    return (int)j_memset(&byte_65E5D8[4 * v2 + 4 * a1], 0, 0x44u);
  }
}
