int __fastcall sub_69F5C(_DWORD *a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  void *ptr[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !a1 )
    return 501;
  v1 = sub_6A6EC(*a1);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_6AC04(*(_DWORD *)(v1 + 16), ptr);
    free(ptr[0]);
    sub_6AC78(v2[4]);
    sub_6AC04(v2[5], ptr);
    free(ptr[0]);
    sub_6AC78(v2[5]);
    free(v2);
  }
  return 0;
}
