int __fastcall sub_74700(int a1, int a2, int a3)
{
  _DWORD v8[2]; // [sp+10h] [bp-5Ch] BYREF
  _DWORD v9[19]; // [sp+18h] [bp-54h] BYREF
  int v10; // [sp+64h] [bp-8h]

  sub_78408(a3, "<string>");
  if ( a1 )
  {
    v8[0] = a1;
    v8[1] = 0;
    if ( sub_73EB4((int)v9, 476816, a2, (int)v8) )
    {
      return 0;
    }
    else
    {
      v10 = sub_74564(v9, a2, a3);
      sub_73F30((int)v9);
      return v10;
    }
  }
  else
  {
    sub_727DC(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
