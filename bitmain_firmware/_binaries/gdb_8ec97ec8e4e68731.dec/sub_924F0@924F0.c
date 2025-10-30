void __fastcall sub_924F0(_DWORD **a1, _DWORD *a2)
{
  _DWORD *i; // r4
  void (__fastcall *v5)(_DWORD); // r3

  for ( i = *a1; *a1 != a2; i = *a1 )
  {
    v5 = (void (__fastcall *)(_DWORD))i[2];
    *a1 = (_DWORD *)*i;
    if ( v5 )
      v5(i[3]);
    free(i);
  }
}
