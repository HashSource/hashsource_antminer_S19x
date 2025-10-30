unsigned int __fastcall sub_50BB8(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // r5
  unsigned int v4; // r3
  unsigned int v5; // r2
  char *v6; // r4
  int v7; // r6
  int v8; // t1
  int v9; // t1
  int v11; // [sp+4h] [bp-8h] BYREF

  HIWORD(v11) = HIWORD(a3);
  if ( a1 < a2 + 4 )
  {
    v4 = a1;
  }
  else
  {
    v3 = *(_DWORD *)(a1 - 4);
    v4 = a1;
    if ( v3 == a3 )
    {
      do
        v4 -= 4;
      while ( v4 >= a2 + 4 && v3 == *(_DWORD *)(v4 - 4) );
    }
  }
  if ( a2 < v4 && HIBYTE(v11) == *(unsigned __int8 *)(v4 - 1) )
  {
    v5 = v4 - 1;
    v6 = (char *)&v11 + 3;
    do
    {
      v4 = v5;
      if ( v5 == a2 )
        break;
      v8 = *(unsigned __int8 *)--v5;
      v7 = v8;
      v9 = (unsigned __int8)*--v6;
    }
    while ( v7 == v9 );
  }
  return a1 - v4;
}
