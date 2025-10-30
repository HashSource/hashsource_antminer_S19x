int __fastcall sub_123C8(int result)
{
  int v1; // r6
  int v2; // r4
  int v3; // r0
  int v4; // r5
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2
  int v8; // r0

  v1 = result + 12;
  v2 = *(_DWORD *)(result + 16);
  if ( v2 != result + 12 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 20);
      v4 = *(_DWORD *)(v2 + 4);
      v5 = (unsigned int *)(v3 + 4);
      if ( v3 && *(_DWORD *)(v3 + 4) != -1 )
      {
        __dmb(0xFu);
        do
        {
          v6 = __ldrex(v5);
          v7 = v6 - 1;
        }
        while ( __strex(v7, v5) );
        if ( !v7 )
          sub_1427C();
      }
      v8 = v2;
      v2 = v4;
      result = sub_1383C(v8);
    }
    while ( v4 != v1 );
  }
  return result;
}
