void __fastcall sub_33B848(_DWORD *a1)
{
  unsigned int v1; // r3

  if ( (_DWORD *)*a1 == a1 + 2 )
    v1 = 15;
  else
    v1 = a1[2];
  if ( a1[1] < v1 )
    sub_33B7B0(a1, 0);
}
