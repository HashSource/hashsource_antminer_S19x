int __fastcall sub_5954C(_DWORD *a1, int a2)
{
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  void *v5; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  if ( !a1 )
    return 501;
  v5 = (void *)sub_5A654(*a1, a2);
  if ( v5 )
  {
    sub_5B020(*((_DWORD *)v5 + 4), &ptr);
    free(ptr);
    sub_5B0FC(*((_DWORD *)v5 + 4));
    sub_5B020(*((_DWORD *)v5 + 5), &ptr);
    free(ptr);
    sub_5B0FC(*((_DWORD *)v5 + 5));
    free(v5);
  }
  return v6;
}
