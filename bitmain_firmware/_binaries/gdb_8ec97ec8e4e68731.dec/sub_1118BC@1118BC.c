int __fastcall sub_1118BC(int a1)
{
  int v2; // r5
  void *v4; // r6

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 )
  {
    v4 = *(void **)(v2 + 32);
    if ( v4 )
    {
      sub_1118BC(*(_DWORD *)(v2 + 32));
      sub_33AC04(v4);
    }
    if ( *(_DWORD *)v2 )
      free(*(void **)v2);
    sub_33AC04((void *)v2);
  }
  if ( *(_DWORD *)a1 )
    free(*(void **)a1);
  return a1;
}
