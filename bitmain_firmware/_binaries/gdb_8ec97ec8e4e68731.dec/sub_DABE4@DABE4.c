int __fastcall sub_DABE4(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r4
  _BYTE *v7; // r12
  int v8; // lr
  bool v9; // zf
  int v10; // r3
  int v11; // t1
  _BOOL4 v12; // r3

  if ( !a1 )
    return sub_259F10("Usage: stop in <function | address>\n");
  *(&a5 - 2) = v5;
  v6 = (unsigned __int8)*a1;
  if ( v6 == 42 )
    return sub_DAA34((int)a1, 0);
  if ( *a1 )
  {
    v7 = a1;
    v8 = (unsigned __int8)*a1;
    while ( 1 )
    {
      v11 = (unsigned __int8)*++v7;
      v10 = v11;
      if ( !v11 )
        break;
      v9 = v8 == 58;
      v8 = v10;
      if ( v9 )
      {
        v12 = v10 != 58;
        goto LABEL_9;
      }
    }
    if ( v8 == 58 )
      return sub_259F10("Usage: stop in <function | address>\n");
  }
  v12 = (unsigned int)(v6 - 48) <= 9;
LABEL_9:
  if ( !v12 )
    return sub_DAA34((int)a1, 0);
  else
    return sub_259F10("Usage: stop in <function | address>\n");
}
