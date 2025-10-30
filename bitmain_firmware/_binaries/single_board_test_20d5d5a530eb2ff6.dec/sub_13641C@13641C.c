bool __fastcall sub_13641C(int **a1, int a2, int a3, int a4)
{
  bool v5; // zf
  _BOOL4 v7; // r1

  if ( a2 )
  {
    if ( a2 < 0 )
      goto LABEL_5;
    v7 = a2 == 1;
    if ( a3 <= 0 )
      v7 = 0;
    if ( v7 )
      goto LABEL_5;
    return sub_13602C(1, a1, a2, a3, a4);
  }
  else
  {
    v5 = a4 == 0;
    if ( !a4 )
      v5 = a3 == -1;
    if ( !v5 )
    {
LABEL_5:
      sub_D0048(3, 127, 118, (int)"crypto/bn/bn_rand.c", 93);
      return 0;
    }
    sub_B8930(a1, 0);
    return 1;
  }
}
