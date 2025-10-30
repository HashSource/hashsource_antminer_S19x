void __fastcall sub_1E7340(int a1, int a2, int a3, char *a4)
{
  int v5; // r5
  size_t v6; // r0

  if ( a4 )
  {
    if ( *a4 )
    {
      v5 = *(_DWORD *)(a3 + 4);
      v6 = strlen(a4);
      sub_33BC54(v5 - 64, 0, *(_DWORD *)(v5 - 60), a4, v6);
    }
  }
}
