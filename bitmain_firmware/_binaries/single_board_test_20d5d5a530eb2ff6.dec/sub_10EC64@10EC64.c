int __fastcall sub_10EC64(int a1, int a2, int a3)
{
  char **v6; // r0
  int v7; // r0
  char **v9; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r0

  if ( a2 )
  {
    v6 = sub_10D384();
    v7 = sub_10F1B4(a1, v6);
    if ( !v7 || sub_10EFB0(v7, 1) != 1 )
      return 0;
  }
  if ( a3 )
  {
    v9 = sub_10D378();
    v10 = sub_10F1B4(a1, v9);
    if ( !v10 || sub_10EFB0(v10, 2) != 1 )
      return 0;
  }
  v11 = a3 == 0;
  if ( !a3 )
    v11 = a2 == 0;
  v12 = v11;
  return v12 ^ 1;
}
