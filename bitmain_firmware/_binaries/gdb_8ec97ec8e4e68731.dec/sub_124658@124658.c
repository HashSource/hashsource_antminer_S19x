void __fastcall sub_124658(int a1)
{
  void *v2; // r0

  ((void (__fastcall *)(_DWORD))loc_1625A8)(*(_DWORD *)(a1 + 8));
  v2 = *(void **)(a1 + 192);
  if ( v2 )
    free(v2);
  *(_DWORD *)(a1 + 192) = 0;
}
