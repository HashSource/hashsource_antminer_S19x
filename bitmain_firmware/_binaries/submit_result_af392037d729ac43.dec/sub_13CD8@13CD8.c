int __fastcall sub_13CD8(int a1, unsigned int a2)
{
  int v4; // r4
  int v5; // r4
  unsigned int v6; // r5
  char *v7; // r0

  if ( !a2 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v6 = sub_13BAC(*(unsigned __int8 *)(a1 + v4));
    v7 = (char *)(a1 + v4);
    if ( !v6 )
      break;
    if ( v6 > 1 )
    {
      if ( v6 > a2 - v4 )
        return 0;
      v5 = v6 + v4;
      if ( !sub_13BF4(v7, v6, 0) )
        return 0;
      v4 = v5 - 1;
    }
    if ( a2 <= ++v4 )
      return 1;
  }
  return 0;
}
