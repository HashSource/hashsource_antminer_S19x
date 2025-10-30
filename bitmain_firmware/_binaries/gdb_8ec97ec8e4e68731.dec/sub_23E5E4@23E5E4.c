_DWORD *__fastcall sub_23E5E4(_DWORD *result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r1
  int v7; // r2

  v2 = dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( a2 != *(_DWORD *)(v2 + 20) )
    {
      v2 = *(_DWORD *)(v2 + 4);
      if ( !v2 )
        goto LABEL_6;
    }
    v3 = (_DWORD *)(v2 + 8);
    v4 = v3[1];
    v5 = v3[2];
    *result = *v3;
    result[1] = v4;
    result[2] = v5;
  }
  else
  {
LABEL_6:
    v6 = HIDWORD(qword_46BBCC);
    v7 = dword_46BBD4;
    *result = qword_46BBCC;
    result[1] = v6;
    result[2] = v7;
  }
  return result;
}
