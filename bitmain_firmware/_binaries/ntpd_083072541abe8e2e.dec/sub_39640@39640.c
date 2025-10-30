void __fastcall sub_39640(int a1)
{
  void *v2; // r0
  void (__fastcall *v3)(_DWORD, int); // r3

  v2 = *(void **)(a1 + 84);
  if ( v2 )
  {
    v3 = (void (__fastcall *)(_DWORD, int))*((_DWORD *)*(&refclock_conf + *(unsigned __int8 *)(a1 + 88)) + 1);
    if ( v3 )
    {
      v3(*(unsigned __int8 *)(a1 + 89), a1);
      v2 = *(void **)(a1 + 84);
    }
    free(v2);
    *(_DWORD *)(a1 + 84) = 0;
  }
}
