int __fastcall sub_136D8(int a1, int a2, int a3)
{
  const char *v5; // r1
  int v6; // r4
  int v8; // [sp+4h] [bp-50h] BYREF
  _DWORD v9[19]; // [sp+8h] [bp-4Ch] BYREF

  v8 = a1;
  if ( a1 )
    v5 = "<stream>";
  else
    v5 = "<stdin>";
  sub_14D80(a3, v5);
  if ( v8 < 0 )
  {
    sub_128D8(a3, 0, 4, "wrong arguments");
    return 0;
  }
  else if ( sub_12994((int)v9, (int)sub_129C8, a2, (int)&v8) )
  {
    return 0;
  }
  else
  {
    v6 = sub_13510(v9, a2, a3);
    sub_131C8(v9);
  }
  return v6;
}
