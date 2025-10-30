void __fastcall sub_203358(int a1)
{
  _DWORD *i; // r6
  _DWORD *j; // r4
  void *v4; // r0
  void *v5; // r0
  int v6; // r3

  for ( i = *(_DWORD **)(a1 + 20); i; i = (_DWORD *)*i )
  {
    for ( j = (_DWORD *)i[3]; j; j = (_DWORD *)*j )
    {
      v4 = (void *)j[5];
      if ( v4 )
      {
        free(v4);
        j[5] = 0;
      }
      v5 = (void *)j[7];
      if ( v5 )
      {
        free(v5);
        j[7] = 0;
      }
    }
  }
  v6 = *(_DWORD *)(a1 + 132);
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)(v6 + 40) + 8))(a1);
}
