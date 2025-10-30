void __fastcall sub_1B8760(int a1, int (__fastcall *a2)(_DWORD *, int), int a3)
{
  _DWORD *i; // r4

  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    if ( a2(i, a3) )
      break;
  }
}
