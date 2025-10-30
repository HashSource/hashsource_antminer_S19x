int __fastcall sub_C6784(int **a1)
{
  int **v2; // r0
  int v3; // r5
  int v4; // r4
  int result; // r0

  if ( !a1 )
    return 0;
  v2 = sub_C6130(*a1);
  v3 = (int)v2;
  if ( !v2 )
    return 0;
  v4 = sub_C6610(v2, (int)a1);
  result = v3;
  if ( !v4 )
  {
    sub_C64B8(v3);
    return 0;
  }
  return result;
}
