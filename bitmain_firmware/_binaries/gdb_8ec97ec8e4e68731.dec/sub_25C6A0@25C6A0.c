int __fastcall sub_25C6A0(_DWORD *a1, int a2, const char *a3, int a4, int a5)
{
  int v8; // [sp+20h] [bp-8h] BYREF
  int v9; // [sp+24h] [bp-4h] BYREF

  v8 = 0;
  v9 = 0;
  sub_262800(a1, a2, a3, 2, a1, 0, &v9, &v8, a4, 0, a5);
  if ( v9 )
    return v9;
  if ( !v8 )
    sub_946E0("Could not find %s.", a3);
  *a1 = sub_26210C(*a1);
  return sub_26118C(v8, 0);
}
