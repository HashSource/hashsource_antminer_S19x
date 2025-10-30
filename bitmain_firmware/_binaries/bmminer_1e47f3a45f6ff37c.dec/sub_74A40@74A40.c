int __fastcall sub_74A40(int a1, int a2, int a3)
{
  int v7; // [sp+Ch] [bp-58h] BYREF
  _DWORD v8[18]; // [sp+10h] [bp-54h] BYREF
  int v9; // [sp+58h] [bp-Ch]
  const char *v10; // [sp+5Ch] [bp-8h]

  v7 = a1;
  if ( a1 )
    v10 = "<stream>";
  else
    v10 = "<stdin>";
  sub_78408(a3, v10);
  if ( v7 >= 0 )
  {
    if ( sub_73EB4((int)v8, (int)sub_749F4, a2, (int)&v7) )
    {
      return 0;
    }
    else
    {
      v9 = sub_74564(v8, a2, a3);
      sub_73F30((int)v8);
      return v9;
    }
  }
  else
  {
    sub_727DC(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
