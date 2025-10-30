int __fastcall sub_63BE0(int a1, int a2, int a3)
{
  _DWORD v8[18]; // [sp+10h] [bp-54h] BYREF
  int v9; // [sp+58h] [bp-Ch]
  const char *v10; // [sp+5Ch] [bp-8h]

  if ( a1 == stdin )
    v10 = "<stdin>";
  else
    v10 = "<stream>";
  sub_67778(a3, v10);
  if ( a1 )
  {
    if ( sub_6317C((int)v8, (int)fgetc, a2, a1) )
    {
      return 0;
    }
    else
    {
      v9 = sub_63834(v8, a2, a3);
      sub_631F8((int)v8);
      return v9;
    }
  }
  else
  {
    sub_61A8C(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
