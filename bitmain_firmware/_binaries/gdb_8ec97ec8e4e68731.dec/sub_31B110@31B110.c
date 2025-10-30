int __fastcall sub_31B110(_DWORD *a1, int a2)
{
  _BYTE *v2; // r3
  _DWORD *v4; // r5
  __int64 v5; // r2

  v2 = (_BYTE *)a1[3];
  if ( *v2 == 74 )
  {
    a1[3] = v2 + 1;
    goto LABEL_4;
  }
  if ( a2 )
  {
LABEL_4:
    v4 = sub_319DD0((int)a1);
    if ( !v4 )
      return 0;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_5:
  HIDWORD(v5) = sub_31AADC(a1);
  if ( HIDWORD(v5) )
  {
    LODWORD(v5) = v4;
    return sub_313728(a1, 41, v5);
  }
  return 0;
}
