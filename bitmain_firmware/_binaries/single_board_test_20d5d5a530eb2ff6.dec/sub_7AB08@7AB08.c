int __fastcall sub_7AB08(int a1, int a2, int a3)
{
  int v5; // r4
  const char *v6; // r1
  int v7; // r0
  _DWORD v9[19]; // [sp+0h] [bp-4Ch] BYREF

  v5 = a1;
  if ( a1 == stdin )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  sub_7C218(a3, v6);
  if ( v5 )
  {
    v7 = sub_79E30((int)v9, (int)fgetc, a2, v5);
    v5 = 0;
    if ( !v7 )
    {
      v5 = sub_7A9AC(v9, a2, a3);
      sub_7A664(v9);
    }
  }
  else
  {
    sub_79D74(a3, 0, 4, "wrong arguments");
  }
  return v5;
}
