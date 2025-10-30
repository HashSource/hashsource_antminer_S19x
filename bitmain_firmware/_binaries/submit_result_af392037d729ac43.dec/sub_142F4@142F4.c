int __fastcall sub_142F4(_DWORD *a1)
{
  unsigned int v2; // r1
  unsigned int i; // r4
  _DWORD *v4; // r0
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2

  if ( !a1 || *a1 != 1 )
    return -1;
  v2 = a1[3];
  if ( v2 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD **)(a1[4] + 4 * i);
      v5 = v4 + 1;
      if ( v4 && v4[1] != -1 )
      {
        __dmb(0xFu);
        do
        {
          v6 = __ldrex(v5);
          v7 = v6 - 1;
        }
        while ( __strex(v7, v5) );
        if ( !v7 )
          sub_1427C(v4);
        v2 = a1[3];
      }
    }
  }
  a1[3] = 0;
  return 0;
}
