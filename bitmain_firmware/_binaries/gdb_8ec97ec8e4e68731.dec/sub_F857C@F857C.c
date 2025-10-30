void __fastcall sub_F857C(int a1)
{
  _DWORD *i; // r4
  void (__fastcall *v3)(_DWORD); // r3

  for ( i = *(_DWORD **)(a1 + 136); i; i = *(_DWORD **)(a1 + 136) )
  {
    v3 = (void (__fastcall *)(_DWORD))i[2];
    *(_DWORD *)(a1 + 136) = *i;
    if ( v3 )
      v3(i[3]);
    free(i);
  }
  *(_DWORD *)(a1 + 136) = 0;
}
