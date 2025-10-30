int __fastcall sub_7F5D0(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4

  v2 = *(_DWORD **)a1;
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)v2[1];
      free(v2);
      v2 = v3;
      *(_DWORD *)a1 = v3;
    }
    while ( v3 );
  }
  obstack_free((struct obstack *)(a1 + 8), 0);
  return a1;
}
