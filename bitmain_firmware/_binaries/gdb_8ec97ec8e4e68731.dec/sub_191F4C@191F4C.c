void __fastcall sub_191F4C(int a1, _DWORD *ptr)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r0

  if ( *ptr )
  {
    v4 = (_DWORD *)sub_1CD14C(*(_DWORD *)(a1 + 16), dword_4879D0);
    v5 = v4;
    if ( v4 )
    {
      if ( *v4 == a1 )
      {
        v6 = v4[2];
        *v5 = 0;
        ((void (__fastcall *)(int))loc_DB0B0)(v6);
        v5[1] = 0;
      }
    }
  }
  free(ptr);
}
