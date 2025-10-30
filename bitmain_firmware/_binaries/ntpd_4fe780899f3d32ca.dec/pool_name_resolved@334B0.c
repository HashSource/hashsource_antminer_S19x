int __fastcall pool_name_resolved(int a1, int a2, unsigned __int16 a3, int a4, int a5, int a6, int a7)
{
  int v9; // r5
  int v10; // r0
  const char *v12; // r3

  if ( a1 )
  {
    v12 = gai_strerror(a1);
    return sub_64E00(3, "error resolving pool %s: %s (%d)", a4, v12);
  }
  else
  {
    v9 = sub_31C78(a3);
    if ( v9 )
    {
      v10 = sub_68EBC(a7);
      *(_DWORD *)(v9 + 48) = v10;
      *(_DWORD *)(v9 + 52) = v10;
      return sub_33174(v9);
    }
    else
    {
      return sub_64E00(3, "Could not find assoc %u for pool DNS %s", a3, a4);
    }
  }
}
