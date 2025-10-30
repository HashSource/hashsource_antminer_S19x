int __fastcall sub_713FC(int a1, int a2, int a3)
{
  _DWORD v8[18]; // [sp+10h] [bp-54h] BYREF
  int v9; // [sp+58h] [bp-Ch]
  const char *v10; // [sp+5Ch] [bp-8h]

  if ( a1 == stdin )
    v10 = "<stdin>";
  else
    v10 = "<stream>";
  sub_74F98(a3, v10);
  if ( a1 )
  {
    if ( sub_70998((int)v8, (int)fgetc, a2, a1) )
    {
      return 0;
    }
    else
    {
      v9 = sub_71050(v8, a2, a3);
      sub_70A14((int)v8);
      return v9;
    }
  }
  else
  {
    sub_6F2A8(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
