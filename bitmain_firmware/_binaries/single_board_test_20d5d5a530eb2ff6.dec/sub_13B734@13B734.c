int __fastcall sub_13B734(int *a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r0
  int result; // r0

  if ( dword_6E1C80 )
    return 1;
  if ( a1 )
  {
    v1 = *a1;
    v2 = a1[1];
    v3 = a1[2];
  }
  else
  {
    v2 = 0;
    LOBYTE(v3) = 50;
    v1 = 0;
  }
  v4 = sub_17AA40();
  sub_159EF4(v4);
  sub_D00F0();
  result = sub_BBE50(v1, v2, v3);
  dword_6E1C80 = 1;
  return result;
}
