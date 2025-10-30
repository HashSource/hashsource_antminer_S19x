int __fastcall sub_63B10(int a1, int a2, int a3, int a4)
{
  _DWORD v10[3]; // [sp+14h] [bp-60h] BYREF
  _DWORD v11[19]; // [sp+20h] [bp-54h] BYREF
  int v12; // [sp+6Ch] [bp-8h]

  sub_67778(a4, "<buffer>");
  if ( a1 )
  {
    v10[0] = a1;
    v10[2] = 0;
    v10[1] = a2;
    if ( sub_6317C((int)v11, (int)sub_63A94, a3, (int)v10) )
    {
      return 0;
    }
    else
    {
      v12 = sub_63834(v11, a3, a4);
      sub_631F8((int)v11);
      return v12;
    }
  }
  else
  {
    sub_61A8C(a4, 0, 4, "wrong arguments");
    return 0;
  }
}
