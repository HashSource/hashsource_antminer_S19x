int __fastcall sub_509C4(unsigned __int8 **a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // r4
  int v6; // lr

  v4 = a1[3];
  if ( a2 < (int)v4 )
  {
    v5 = *a1;
    v4 = 0;
    a1[3] = 0;
    a1[1] = v5;
    v6 = *v5;
  }
  else
  {
    v5 = a1[1];
    v6 = *v5;
    if ( a2 <= (int)v4 )
      goto LABEL_9;
  }
  if ( !v6 )
    return 3;
  while ( 1 )
  {
    if ( v6 == 44 )
      ++v4;
    a1[3] = v4;
    a1[1] = v5 + 1;
    v6 = v5[1];
    if ( a2 <= (int)v4 )
      break;
    ++v5;
    if ( !v6 )
      return 3;
  }
LABEL_9:
  if ( v6 && (a3 != v6) != ((a4 ^ 1) & 1) )
    return 0;
  return 3;
}
