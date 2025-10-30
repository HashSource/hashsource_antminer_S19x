int __fastcall sub_33A304(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = sub_33A848(a1, a2);
  if ( result )
  {
    *a4 = a3;
    a4[3] = 8;
    a4[1] = 6;
  }
  return result;
}
