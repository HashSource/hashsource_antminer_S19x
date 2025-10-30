int __fastcall sub_8EBDC(int a1)
{
  int v2; // r4

  if ( (**(_DWORD **)(a1 + 124) & 0x1200) == 0x1000 )
  {
    v2 = 0;
    sub_95494(a1, 40, 486, 104, "ssl/statem/extensions.c", 1204);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 28)
      && *(_DWORD *)(a1 + 140)
      && (((**(_DWORD **)(a1 + 124) ^ 0x200u) >> 9) & 1) != !(*(_BYTE *)(*(_DWORD *)(a1 + 1140) + 508) & 1) )
    {
      sub_95494(a1, 40, 486, 104, "ssl/statem/extensions.c", 1215);
      return 0;
    }
    return 1;
  }
  return v2;
}
