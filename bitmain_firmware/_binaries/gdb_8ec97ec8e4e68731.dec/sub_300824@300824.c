void __fastcall sub_300824(_DWORD *a1)
{
  _DWORD *i; // r4

  for ( i = a1; i; i = (_DWORD *)*i )
  {
    sub_2AAA1C(i[2]);
    free((void *)i[2]);
  }
}
