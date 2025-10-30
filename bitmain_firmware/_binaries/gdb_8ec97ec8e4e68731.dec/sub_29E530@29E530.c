bool __fastcall sub_29E530(int a1, int a2, int *a3)
{
  _BYTE *v3; // r3
  _BOOL4 result; // r0
  int v5; // r1
  bool v6; // zf
  int v7; // r3
  int v8; // r3
  int v9; // r3

  v3 = *(_BYTE **)(*(_DWORD *)(a1 + 4 * a2) + 4);
  if ( *v3 != 36 )
    return 0;
  v5 = (unsigned __int8)v3[1];
  v6 = v5 == 116;
  if ( v5 != 116 )
    v6 = v5 == 97;
  if ( v6 )
  {
    v7 = (unsigned __int8)v3[2];
    result = v7 == 46;
    if ( !v7 )
      result = 1;
    if ( result )
    {
      if ( v5 == 97 )
      {
        v8 = 0;
      }
      else if ( v5 == 116 )
      {
        v8 = 1;
      }
      else
      {
        v8 = 2;
      }
      goto LABEL_15;
    }
  }
  else
  {
    result = 0;
    if ( v5 == 100 )
    {
      v9 = (unsigned __int8)v3[2];
      result = v9 == 46;
      if ( !v9 )
        result = 1;
      if ( result )
      {
        v8 = 2;
LABEL_15:
        *a3 = v8;
        return 1;
      }
    }
  }
  return result;
}
