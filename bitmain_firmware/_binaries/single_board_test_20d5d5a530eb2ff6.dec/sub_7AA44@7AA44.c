int __fastcall sub_7AA44(int a1, int a2, int a3)
{
  int v6; // r7
  _DWORD v8[2]; // [sp+0h] [bp-54h] BYREF
  _DWORD v9[19]; // [sp+8h] [bp-4Ch] BYREF

  sub_7C218(a3, "<string>");
  if ( a1 )
  {
    v6 = 0;
    v8[0] = a1;
    v8[1] = 0;
    if ( !sub_79E30((int)v9, (int)sub_79CFC, a2, (int)v8) )
    {
      v6 = sub_7A9AC(v9, a2, a3);
      sub_7A664(v9);
    }
  }
  else
  {
    v6 = 0;
    sub_79D74(a3, 0, 4, "wrong arguments");
  }
  return v6;
}
