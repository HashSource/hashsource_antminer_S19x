int __fastcall sub_7AAA0(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  _DWORD v10[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v11[18]; // [sp+10h] [bp-48h] BYREF

  sub_7C218(a4, "<buffer>");
  if ( a1 )
  {
    v8 = 0;
    v10[0] = a1;
    v10[1] = a2;
    v10[2] = 0;
    if ( !sub_79E30((int)v11, (int)sub_79D14, a3, (int)v10) )
    {
      v8 = sub_7A9AC(v11, a3, a4);
      sub_7A664(v11);
    }
  }
  else
  {
    v8 = 0;
    sub_79D74(a4, 0, 4, "wrong arguments");
  }
  return v8;
}
