void __fastcall sub_27A768(_DWORD *a1)
{
  int v2; // r0

  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 20))(*a1);
  sub_323B84(a1[5]);
  v2 = a1[6];
  if ( v2 )
    sub_323B84(v2);
  free(a1);
}
