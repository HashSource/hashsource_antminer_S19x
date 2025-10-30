int __fastcall sub_8B204(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = a1;
  if ( !a1[6] )
  {
    sub_8B1D4(a1);
    a1 = v1;
  }
  return sub_8A5AC((int)a1);
}
