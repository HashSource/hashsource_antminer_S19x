void __fastcall sub_1534A4(int a1)
{
  int v1; // r2
  _DWORD *v2; // r3

  v1 = dword_487650;
  if ( dword_487650 )
  {
    v2 = (_DWORD *)dword_487650;
    if ( a1 == *(_DWORD *)(dword_487650 + 8) )
    {
LABEL_11:
      dword_487650 = *(_DWORD *)(dword_487650 + 12);
LABEL_10:
      sub_33AC04(v2);
      dword_48764C = 0;
    }
    else
    {
      while ( 1 )
      {
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          break;
        if ( v2[2] == a1 )
        {
          if ( (_DWORD *)dword_487650 == v2 )
            goto LABEL_11;
          while ( *(_DWORD **)(v1 + 12) != v2 )
            v1 = *(_DWORD *)(v1 + 12);
          *(_DWORD *)(v1 + 12) = v2[3];
          goto LABEL_10;
        }
      }
    }
  }
}
