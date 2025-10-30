_BYTE *__fastcall sub_244ACC(_BYTE *result, int a2)
{
  _BYTE *v2; // r9
  int v4; // r3
  int v5; // r4
  int v6; // r5
  const char **v7; // r0
  int v8; // r3
  int v9; // r3
  bool v10; // zf

  v2 = result;
  if ( result )
  {
    if ( *result == 43 && !result[1] )
    {
      v5 = dword_48A554;
      v4 = dword_490158;
    }
    else
    {
      result = (_BYTE *)sub_14CC00((int)result);
      v4 = dword_490158;
      v5 = (int)&result[-dword_4707AC - 5];
      dword_48A554 = v5;
    }
  }
  else
  {
    v4 = dword_490158;
    v5 = dword_490158 - 10;
    dword_48A554 = dword_490158 - 10;
  }
  if ( v5 < 0 )
  {
    v5 = 0;
    dword_48A554 = 0;
    if ( v4 > 9 )
      goto LABEL_10;
  }
  else if ( v4 - v5 > 9 )
  {
    goto LABEL_7;
  }
  v5 = v4 - 10;
  if ( v4 - 10 < 0 )
  {
    v5 = 0;
    dword_48A554 = 0;
  }
  else
  {
    dword_48A554 = v4 - 10;
  }
LABEL_7:
  if ( v4 <= v5 )
  {
    v8 = v5;
    goto LABEL_11;
  }
  do
  {
LABEL_10:
    v6 = v5 + dword_4707AC;
    ++v5;
    v7 = (const char **)sub_2979C4(v6);
    result = (_BYTE *)sub_259F10("%5d  %s\n", v6, *v7);
    v8 = dword_48A554;
  }
  while ( dword_48A554 + 9 >= v5 && dword_490158 > v5 );
LABEL_11:
  v9 = v8 + 10;
  v10 = a2 == 0;
  if ( a2 )
    v10 = v2 == 0;
  dword_48A554 = v9;
  if ( !v10 )
    dword_48A51C = (int)"+";
  return result;
}
