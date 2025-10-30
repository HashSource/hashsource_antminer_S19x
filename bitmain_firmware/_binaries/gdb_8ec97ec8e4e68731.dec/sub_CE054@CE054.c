void __fastcall sub_CE054(_DWORD **a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      do
      {
        v3 = (_DWORD *)*v2;
        sub_CDF5C(v2);
        sub_33AC04(v2);
        v2 = v3;
      }
      while ( v3 );
    }
    *a1 = 0;
  }
}
