int __fastcall sub_717A8(int a1, int a2, int a3, int a4)
{
  _DWORD v10[260]; // [sp+10h] [bp-464h] BYREF
  _DWORD v11[19]; // [sp+420h] [bp-54h] BYREF
  int v12; // [sp+46Ch] [bp-8h]

  memset(v10, 0, sizeof(v10));
  v10[258] = a1;
  v10[259] = a2;
  sub_74F98(a4, "<callback>");
  if ( a1 )
  {
    if ( sub_70998((int)v11, (int)sub_716E4, a3, (int)v10) )
    {
      return 0;
    }
    else
    {
      v12 = sub_71050(v11, a3, a4);
      sub_70A14((int)v11);
      return v12;
    }
  }
  else
  {
    sub_6F2A8(a4, 0, 4, "wrong arguments");
    return 0;
  }
}
