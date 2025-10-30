int __fastcall sub_6E668(char a1, char a2, char a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned __int8 v10; // [sp+7h] [bp-Dh]
  unsigned __int8 v11; // [sp+Fh] [bp-5h]

  v10 = 2 * a1;
  if ( a3 )
  {
    sub_6E218();
    sub_6E398(v10);
    sub_6E398(a4);
  }
  if ( a2 )
  {
    sub_6E218();
    sub_6E398(v10 | 1);
    v11 = sub_6E4B4(0);
    sub_6E23C();
    return v11;
  }
  else
  {
    if ( a3 != 1 )
    {
      sub_6E218();
      sub_6E398(v10);
    }
    sub_6E398(a5);
    sub_6E23C();
    return 0;
  }
}
