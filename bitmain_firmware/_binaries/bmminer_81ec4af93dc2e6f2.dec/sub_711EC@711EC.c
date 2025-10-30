int __fastcall sub_711EC(int a1, int a2, int a3)
{
  _DWORD v8[2]; // [sp+10h] [bp-5Ch] BYREF
  _DWORD v9[19]; // [sp+18h] [bp-54h] BYREF
  int v10; // [sp+64h] [bp-8h]

  sub_74F98(a3, "<string>");
  if ( a1 )
  {
    v8[0] = a1;
    v8[1] = 0;
    if ( sub_70998((int)v9, 463228, a2, (int)v8) )
    {
      return 0;
    }
    else
    {
      v10 = sub_71050(v9, a2, a3);
      sub_70A14((int)v9);
      return v10;
    }
  }
  else
  {
    sub_6F2A8(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
