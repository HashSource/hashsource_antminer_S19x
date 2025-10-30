int __fastcall sub_319D04(int *a1, unsigned int a2, int a3)
{
  int v3; // r12
  int v4; // r3
  bool v5; // zf
  int v6; // r3

  v4 = (a3 == 0) | (a2 >> 31);
  if ( !a1 )
    v4 = 1;
  v5 = v4 == 0;
  if ( v4 )
  {
    v6 = 0;
  }
  else
  {
    a1[1] = 0;
    v3 = 50;
    v6 = 1;
  }
  if ( v5 )
  {
    a1[2] = a2;
    a1[3] = a3;
    *a1 = v3;
  }
  return v6;
}
