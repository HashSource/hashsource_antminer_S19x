int __fastcall sub_4F944(int a1, int *a2)
{
  const unsigned __int16 **v4; // r0
  int v5; // r12
  int i; // r3
  int v7; // r2
  int v8; // t1

  v4 = _ctype_b_loc();
  v5 = a1 - 1;
  for ( i = 0; ; i = v7 - 48 + 10 * i )
  {
    v8 = *(unsigned __int8 *)++v5;
    v7 = v8;
    if ( ((v5 - a1 != 2) & ((*v4)[v8] >> 11)) == 0 )
      break;
  }
  *a2 = i;
  return i;
}
