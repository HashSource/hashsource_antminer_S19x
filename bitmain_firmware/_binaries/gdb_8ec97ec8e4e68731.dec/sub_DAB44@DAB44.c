int __fastcall sub_DAB44(_BYTE *a1)
{
  int v1; // r4
  _BYTE *v2; // r12
  int v3; // lr
  bool v4; // zf
  int v5; // r3
  int v6; // t1
  _BOOL4 v7; // r3

  if ( !a1 )
    return sub_259F10("Usage: stop at <line>\n");
  v1 = (unsigned __int8)*a1;
  if ( v1 == 42 )
    return sub_259F10("Usage: stop at <line>\n");
  if ( *a1 )
  {
    v2 = a1;
    v3 = (unsigned __int8)*a1;
    while ( 1 )
    {
      v6 = (unsigned __int8)*++v2;
      v5 = v6;
      if ( !v6 )
        break;
      v4 = v3 == 58;
      v3 = v5;
      if ( v4 )
      {
        v7 = v5 == 58;
        goto LABEL_9;
      }
    }
    if ( v3 == 58 )
      return sub_DAA34((int)a1, 0);
  }
  v7 = (unsigned int)(v1 - 48) > 9;
LABEL_9:
  if ( v7 )
    return sub_259F10("Usage: stop at <line>\n");
  else
    return sub_DAA34((int)a1, 0);
}
