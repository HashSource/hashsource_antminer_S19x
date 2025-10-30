int __fastcall sub_7AC50(int a1, int a2, int a3, int a4)
{
  _DWORD v9[18]; // [sp+0h] [bp-45Ch] BYREF
  _DWORD s[261]; // [sp+48h] [bp-414h] BYREF

  memset(s, 0, 0x410u);
  s[259] = a2;
  s[258] = a1;
  sub_7C218(a4, "<callback>");
  if ( a1 )
  {
    a1 = 0;
    if ( !sub_79E30((int)v9, (int)sub_79D30, a3, (int)s) )
    {
      a1 = sub_7A9AC(v9, a3, a4);
      sub_7A664(v9);
    }
  }
  else
  {
    sub_79D74(a4, 0, 4, "wrong arguments");
  }
  return a1;
}
