void __fastcall sub_23E1DC(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5

  v4 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    v5 = 0;
    while ( v4[2] != a1 || v4[3] != a2 || v4[4] != a3 )
    {
      v5 = v4;
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        return;
    }
    sub_23DDE0((int)v4, a4);
    if ( !*v4 && !sub_98F78(v4 + 2, &dword_4878EC) )
    {
      if ( v5 )
        v5[1] = v4[1];
      else
        dword_48A4D4 = v4[1];
      sub_23E0DC(v4);
      sub_349268(v4);
    }
  }
}
