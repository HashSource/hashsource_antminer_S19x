int __fastcall sub_64844(int a1, int a2, int a3, int a4)
{
  _DWORD v10[3]; // [sp+14h] [bp-60h] BYREF
  _DWORD v11[19]; // [sp+20h] [bp-54h] BYREF
  int v12; // [sp+6Ch] [bp-8h]

  sub_68408(a4, "<buffer>");
  if ( a1 )
  {
    v10[0] = a1;
    v10[2] = 0;
    v10[1] = a2;
    if ( sub_63EB8((int)v11, (int)sub_647C8, a3, (int)v10) )
    {
      return 0;
    }
    else
    {
      v12 = sub_64568(v11, a3, a4);
      sub_63F34((int)v11);
      return v12;
    }
  }
  else
  {
    sub_627E0(a4, 0, 4, "wrong arguments");
    return 0;
  }
}
