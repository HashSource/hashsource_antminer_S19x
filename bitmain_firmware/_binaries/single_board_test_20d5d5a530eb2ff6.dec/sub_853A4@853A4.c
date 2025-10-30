int __fastcall sub_853A4(int a1, int a2, int *a3)
{
  int v4; // r0
  int v5; // r0

  if ( a2 )
    v4 = sub_8B81C(a2);
  else
    v4 = sub_8B7D4(a1);
  v5 = v4 & ~(v4 >> 31);
  if ( v5 >= 5 )
    v5 = 5;
  if ( a3 )
    *a3 = v5;
  return dword_1A8F8C[v5];
}
