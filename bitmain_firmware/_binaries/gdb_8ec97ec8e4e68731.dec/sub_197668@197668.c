char *__fastcall sub_197668(char *a1, int a2)
{
  char *v3; // r0
  int v4; // r3
  char *v5; // r5
  bool v6; // zf
  int v7; // r3
  bool v8; // zf
  char *v9; // r0
  char *v10; // r3

  v3 = sub_197488(a1, a2);
  if ( !v3 )
    return 0;
  v4 = (unsigned __int8)*v3;
  v5 = v3;
  v6 = v4 == 58;
  if ( v4 != 58 )
    v6 = v4 == 0;
  if ( !v6 )
  {
    do
    {
      v9 = sub_197488(v3, a2);
      v10 = v9;
      if ( !v9 )
        break;
      v3 = v9 + 1;
      v5 = v10;
      if ( v10 == (char *)-1 )
        break;
      v7 = (unsigned __int8)v10[1];
      v8 = v7 == 58;
      if ( v7 != 58 )
        v8 = v7 == 0;
    }
    while ( !v8 );
  }
  return v5;
}
