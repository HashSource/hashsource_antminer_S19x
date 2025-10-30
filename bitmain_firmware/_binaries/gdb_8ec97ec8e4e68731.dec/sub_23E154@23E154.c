void sub_23E154()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r5

  v0 = (_DWORD *)dword_48A4D4;
  dword_48A4DC = 0;
  if ( dword_48A4D4 )
  {
    do
    {
      v1 = (_DWORD *)v0[1];
      if ( *v0 || sub_98F78(v0 + 2, &dword_4878EC) )
      {
        sub_23DDE0((int)v0, 1);
      }
      else
      {
        sub_23E0DC(v0);
        sub_33AC04(v0);
      }
      v0 = v1;
    }
    while ( v1 );
    dword_48A4D4 = 0;
    dword_48A4E0 = 0;
  }
}
