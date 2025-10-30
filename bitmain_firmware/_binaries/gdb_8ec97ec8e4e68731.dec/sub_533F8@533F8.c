int __fastcall sub_533F8(char *a1, int a2, int a3, int a4, _DWORD *a5, int a6, char a7, int **a8)
{
  int v9; // r0
  int v10; // r3
  char v11; // r2
  int v12; // r4
  int *v13; // r3
  char v14; // r2
  _DWORD *v15; // r3

  v9 = sub_52DB8(a1, a2, a4, a8);
  v11 = *(_BYTE *)(v9 + 12);
  if ( a3 )
    v10 = 11328;
  else
    *(_DWORD *)(v9 + 16) = 0;
  if ( a3 )
    HIWORD(v10) = 5;
  v12 = v9;
  if ( a3 )
    *(_DWORD *)(v9 + 16) = v10;
  v13 = &dword_474744;
  v14 = v11 & 0xDF | (32 * (a7 & 1));
  *(_DWORD *)(v9 + 20) = a3;
  if ( a8 == (int **)&dword_474744 )
    v13 = 0;
  *(_DWORD *)(v9 + 52) = a5;
  *(_DWORD *)(v9 + 56) = a6;
  *(_BYTE *)(v9 + 12) = v14;
  if ( a8 == (int **)&dword_474744 )
    *(_DWORD *)(v9 + 60) = v13;
  else
    sub_52F2C(v9, a8);
  v15 = (_DWORD *)*a5;
  if ( *a5 )
  {
    do
    {
      v15[15] = v12;
      v15 = (_DWORD *)*v15;
    }
    while ( v15 );
  }
  return v12;
}
