int __fastcall sub_1E7884(int a1, int a2, int a3, int *a4)
{
  int v5; // r5

  v5 = *a4;
  if ( *(_DWORD *)(v5 + 12) == ps_getpid_0(a3 + 4) )
  {
    sub_1F7D58(a3);
    ((void (__fastcall *)(int, int))loc_1E77D4)(a1, a2);
  }
  return 1;
}
