int __fastcall sub_31DD30(_BYTE **a1, FILE *a2)
{
  _BYTE *v3; // r5
  _BYTE **v4; // r8
  int v5; // r4
  int v6; // t1
  bool v7; // zf
  int v8; // r3
  _BYTE *v10; // t1

  if ( !a2 )
    return 1;
  v3 = *a1;
  v4 = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int8)*v3;
      if ( *v3 )
        break;
LABEL_18:
      if ( fputc(10, a2) == -1 )
        return 1;
      v10 = v4[1];
      ++v4;
      v3 = v10;
      if ( !v10 )
        return 0;
    }
    while ( 1 )
    {
      if ( (word_438898[v5] & 0x40) != 0 )
        goto LABEL_15;
      v7 = v5 == 39;
      if ( v5 != 39 )
        v7 = v5 == 92;
      v8 = v7;
      if ( v5 == 34 )
        v8 |= 1u;
      if ( v8 )
      {
LABEL_15:
        if ( fputc(92, a2) == -1 )
          return 1;
      }
      if ( fputc(v5, a2) == -1 )
        return 1;
      v6 = (unsigned __int8)*++v3;
      v5 = v6;
      if ( !v6 )
        goto LABEL_18;
    }
  }
  return 0;
}
