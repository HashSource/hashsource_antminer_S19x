int __fastcall sub_F5924(int result, _BYTE **a2)
{
  _BYTE *v2; // lr
  _BYTE *v3; // r3
  int v4; // r12
  _BYTE *v5; // r1
  unsigned __int8 *v6; // r3
  int v7; // r2
  int v8; // t1
  int v9; // t1

  v2 = *(_BYTE **)(result + 100);
  v3 = *a2;
  if ( v2 )
  {
    v4 = (unsigned __int8)*v2;
    if ( *v3 )
    {
      if ( (unsigned __int8)*v3 != v4 )
      {
LABEL_8:
        *v2 = 0;
        *(_BYTE *)(result + 104) = 0;
        return result;
      }
      v5 = *a2;
      v6 = v2 + 1;
      while ( 1 )
      {
        v8 = (unsigned __int8)*++v5;
        v7 = v8;
        v2 = v6;
        v9 = *v6++;
        v4 = v9;
        if ( !v7 )
          break;
        if ( v7 != v4 )
          goto LABEL_8;
      }
    }
    if ( !v4 )
      return result;
    goto LABEL_8;
  }
  *a2 = 0;
  *(_DWORD *)(result + 100) = v3;
  *(_BYTE *)(result + 104) = 1;
  return result;
}
