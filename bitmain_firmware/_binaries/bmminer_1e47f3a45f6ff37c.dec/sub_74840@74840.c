int __fastcall sub_74840(int a1, int a2, int a3, int a4)
{
  _DWORD v10[3]; // [sp+14h] [bp-60h] BYREF
  _DWORD v11[19]; // [sp+20h] [bp-54h] BYREF
  int v12; // [sp+6Ch] [bp-8h]

  sub_78408(a4, "<buffer>");
  if ( a1 )
  {
    v10[0] = a1;
    v10[2] = 0;
    v10[1] = a2;
    if ( sub_73EB4((int)v11, 477124, a3, (int)v10) )
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
