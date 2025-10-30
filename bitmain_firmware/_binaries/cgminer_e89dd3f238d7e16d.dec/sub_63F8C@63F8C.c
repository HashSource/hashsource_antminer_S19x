int __fastcall sub_63F8C(int a1, int a2, int a3, int a4)
{
  _DWORD v10[260]; // [sp+10h] [bp-464h] BYREF
  _DWORD v11[19]; // [sp+420h] [bp-54h] BYREF
  int v12; // [sp+46Ch] [bp-8h]

  memset(v10, 0, sizeof(v10));
  v10[258] = a1;
  v10[259] = a2;
  sub_67778(a4, "<callback>");
  if ( a1 )
  {
    if ( sub_6317C((int)v11, (int)sub_63EC8, a3, (int)v10) )
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
