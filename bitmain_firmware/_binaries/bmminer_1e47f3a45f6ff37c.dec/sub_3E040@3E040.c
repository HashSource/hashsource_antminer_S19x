int __fastcall sub_3E040(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  int result; // r0

  v3 = *a1 - *a2;
  *a3 = v3;
  result = a1[1] - a2[1];
  if ( result < 0 )
  {
    *a3 = v3 - 1;
    a3[1] = result + 1000000000;
  }
  else
  {
    a3[1] = result;
  }
  return result;
}
