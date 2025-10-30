void __fastcall sub_1D1750(_DWORD *a1)
{
  _DWORD *i; // r4
  void *v2; // r0

  for ( i = (_DWORD *)sub_1D0878(a1, 1)[6]; i; i = (_DWORD *)*i )
  {
    v2 = (void *)i[2];
    if ( v2 )
    {
      free(v2);
      i[2] = 0;
    }
  }
}
