int __fastcall sub_CDC90(_DWORD *a1)
{
  int (*v2)(void); // r3
  int result; // r0
  unsigned int v4; // r3
  unsigned int *v5; // r2
  unsigned int i; // r1
  unsigned int v7; // r4
  bool v8; // zf
  unsigned int v9; // lr

  if ( a1[21] || (v2 = (int (*)(void))a1[12]) == 0 )
  {
    result = 1;
  }
  else
  {
    result = v2();
    if ( !result )
      return result;
  }
  __dmb(0xBu);
  v4 = a1[20];
  __dmb(0xBu);
  v5 = a1 + 20;
  for ( i = v4; ; i = v4 )
  {
    v7 = v4 + 1;
    __dmb(0xBu);
    do
    {
      v4 = __ldrex(v5);
      v8 = v4 == i;
      if ( v4 != i )
        break;
      v9 = __strex(v7, v5);
      v8 = v9 == 0;
    }
    while ( v9 );
    __dmb(0xBu);
    if ( v8 )
      break;
  }
  ++a1[21];
  return result;
}
