int __fastcall sub_1B5150(const char *a1, int a2, int a3)
{
  int result; // r0
  int v6; // [sp+8h] [bp-8h] BYREF

  sub_21D6B0(&v6, a1, a2, 2, 0);
  result = v6;
  if ( v6 )
  {
    if ( **(_BYTE **)(*(_DWORD *)(v6 + 24) + 24) != 3 )
    {
      if ( !a3 )
        sub_946E0("This context has class, union or enum %s, not a struct.", a1);
      return 0;
    }
  }
  else if ( !a3 )
  {
    sub_946E0("No struct type named %s.", a1);
  }
  return result;
}
