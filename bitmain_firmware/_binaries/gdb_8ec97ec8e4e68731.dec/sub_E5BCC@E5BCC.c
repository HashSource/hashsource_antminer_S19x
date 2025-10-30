int __fastcall sub_E5BCC(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r4

  v2 = (_DWORD *)dword_478930;
  if ( dword_478930 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  dword_478930 = 0;
  if ( dword_478934 )
    sub_E4FC4();
  v4 = (_DWORD *)dword_4788F0;
  if ( dword_4788F0 )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      free(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  v6 = (_DWORD *)dword_4788F4;
  dword_4788F0 = 0;
  if ( dword_4788F4 )
  {
    do
    {
      v7 = (_DWORD *)*v6;
      free(v6);
      v6 = v7;
    }
    while ( v7 );
  }
  dword_4788F4 = 0;
  if ( dword_4788FC )
    sub_1A3784();
  dword_4788FC = 0;
  if ( dword_478900 )
    obstack_free(&stru_478904, 0);
  dword_478900 = 0;
  sub_E47C8();
  return a1;
}
