int __fastcall sub_E4674(int a1)
{
  int v1; // r5
  int v3; // r4
  const char *v4; // r4
  const char *v5; // r0
  const char *v7; // r0
  const char **v8; // [sp+4h] [bp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 36);
  if ( sub_2AA86C(v1, 1) )
  {
    v3 = *(_DWORD *)(v1 + 172);
    if ( !v3 )
      return v3;
    if ( dword_489694 )
    {
      v7 = (const char *)sub_1B87A8(a1);
      sub_259858("\nLooking for separate debug info (build-id) for %s\n", v7);
    }
    sub_E43DC(&v8, *(_DWORD *)v3, (unsigned __int8 *)(v3 + 4));
    if ( v8 )
    {
      v4 = *v8;
      v5 = (const char *)sub_1B87A8(a1);
      if ( !j_strcmp(v4, v5) )
      {
        sub_946B0("\"%s\": separate debug info file has no debug info", *v8);
        if ( v8 )
          ((void (*)(void))loc_1625A8)();
      }
      else if ( v8 )
      {
        v3 = sub_327254(*v8);
        if ( v8 )
          ((void (*)(void))loc_1625A8)();
        return v3;
      }
    }
  }
  return 0;
}
