size_t __fastcall sub_10EE08(int **a1, _DWORD **a2)
{
  int *v2; // r2
  _DWORD *v3; // r1
  int v4; // r3
  size_t result; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = **a1;
  result = v4 - *v3;
  if ( v4 == *v3 )
  {
    if ( v4 == 1 )
    {
      return sub_10E760(v2[1], v3[1]);
    }
    else if ( v4 == 2 )
    {
      return sub_10E768(v2[1], v3[1]);
    }
  }
  return result;
}
