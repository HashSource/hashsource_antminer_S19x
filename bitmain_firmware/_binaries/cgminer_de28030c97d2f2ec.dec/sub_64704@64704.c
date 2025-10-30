int __fastcall sub_64704(int a1, int a2, int a3)
{
  _DWORD v8[2]; // [sp+10h] [bp-5Ch] BYREF
  _DWORD v9[19]; // [sp+18h] [bp-54h] BYREF
  int v10; // [sp+64h] [bp-8h]

  sub_68408(a3, "<string>");
  if ( a1 )
  {
    v8[0] = a1;
    v8[1] = 0;
    if ( sub_63EB8((int)v9, 411284, a2, (int)v8) )
    {
      return 0;
    }
    else
    {
      v10 = sub_64568(v9, a2, a3);
      sub_63F34((int)v9);
      return v10;
    }
  }
  else
  {
    sub_627E0(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
