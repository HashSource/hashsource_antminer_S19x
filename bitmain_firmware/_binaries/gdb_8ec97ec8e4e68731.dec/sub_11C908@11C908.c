void __fastcall sub_11C908(int a1)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 80);
  if ( v2 )
  {
    obstack_free((struct obstack *)(v2 + 4), 0);
    free((void *)v2);
  }
  *(_DWORD *)(a1 + 80) = 0;
}
