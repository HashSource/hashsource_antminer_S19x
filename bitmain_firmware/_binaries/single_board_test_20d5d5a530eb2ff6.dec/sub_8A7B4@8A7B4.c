int __fastcall sub_8A7B4(_DWORD *a1)
{
  int result; // r0

  if ( a1[243] )
  {
    sub_D7A6C();
    a1[243] = 0;
  }
  if ( a1[251] )
  {
    sub_D7A6C();
    a1[251] = 0;
  }
  sub_BB754(a1[250]);
  a1[250] = 0;
  result = sub_BB754(a1[249]);
  a1[249] = 0;
  return result;
}
