int __fastcall sub_237534(int a1, __int64 *a2, unsigned int a3, char **a4)
{
  char **v4; // r4
  char *v5; // r3
  char *v9; // t1

  v4 = a4;
  v5 = *a4;
  if ( !v5 )
    return 0;
  while ( !sub_2374B8(a1, a2, a3, v5) )
  {
    v9 = v4[1];
    ++v4;
    v5 = v9;
    if ( !v9 )
      return 0;
  }
  return 1;
}
