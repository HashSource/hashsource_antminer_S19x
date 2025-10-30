int __fastcall sub_D7A88(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r0
  _BOOL4 v4; // r3
  bool v5; // zf
  int v6; // r0

  v3 = a1 - a2;
  v4 = v3 < a3;
  if ( v3 > -a3 )
    v4 = 1;
  v5 = a3 == 0;
  if ( a3 )
    v5 = v3 == 0;
  v6 = !v5;
  return v6 & v4;
}
