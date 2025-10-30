int __fastcall sub_2C110(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  if ( *a2 > *a3 )
    return -1;
  if ( *a2 == *a3 && a2[1] > a3[1] )
    return -1;
  *a1 = *a3 - *a2;
  a1[1] = a3[1] - a2[1];
  if ( (int)a1[1] < 0 )
  {
    --*a1;
    a1[1] += 1000000;
  }
  return 0;
}
