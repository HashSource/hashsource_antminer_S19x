int __fastcall sub_4A644(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  int v4; // r1
  int result; // r0

  v3 = *a1 - *a2;
  *a3 = v3;
  v4 = a2[1];
  result = a1[1] - v4;
  if ( result >= 0 )
  {
    a3[1] = result;
  }
  else
  {
    v4 = 1000000000;
    --v3;
  }
  if ( result < 0 )
  {
    *a3 = v3;
    a3[1] = result + v4;
  }
  return result;
}
