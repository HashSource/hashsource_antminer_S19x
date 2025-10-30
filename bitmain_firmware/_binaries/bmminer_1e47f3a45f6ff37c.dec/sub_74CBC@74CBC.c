int __fastcall sub_74CBC(int a1, int a2, int a3, int a4)
{
  _DWORD v10[260]; // [sp+10h] [bp-464h] BYREF
  _DWORD v11[19]; // [sp+420h] [bp-54h] BYREF
  int v12; // [sp+46Ch] [bp-8h]

  memset(v10, 0, sizeof(v10));
  v10[258] = a1;
  v10[259] = a2;
  sub_78408(a4, "<callback>");
  if ( a1 )
  {
    if ( sub_73EB4((int)v11, (int)sub_74BF8, a3, (int)v10) )
    {
      return 0;
    }
    else
    {
      v12 = sub_74564(v11, a3, a4);
      sub_73F30((int)v11);
      return v12;
    }
  }
  else
  {
    sub_727DC(a4, 0, 4, "wrong arguments");
    return 0;
  }
}
