int __fastcall sub_9B6E8(const char *a1, unsigned __int8 *a2, int a3)
{
  const char *v3; // r8
  int v4; // r4
  _BYTE *v5; // r7
  int v7; // r5
  int v8; // r6
  int v9; // r9
  int v10; // t1
  int v11; // t1
  int v13; // r9

  v3 = a1;
  v4 = *(unsigned __int8 *)a1;
  v5 = a2;
  v7 = *a2;
  if ( !*a1 )
  {
LABEL_12:
    v9 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    if ( !v7 )
    {
      if ( v4 == 40 )
        return sub_25A8B8(v3, v5);
      if ( v4 != 95 )
      {
        v9 = v4;
        goto LABEL_14;
      }
      return sub_9A6F0(v3) == 0;
    }
    v8 = v4;
    v9 = v4;
    if ( isspace(v4) || isspace(v7) )
      return sub_25A8B8(v3, v5);
    if ( a3 == 1 )
    {
      v8 = (unsigned __int8)tolower(v4);
      v7 = (unsigned __int8)tolower(v7);
    }
    if ( v8 != v7 )
      break;
    v10 = *(unsigned __int8 *)++v3;
    v4 = v10;
    v11 = (unsigned __int8)*++v5;
    v7 = v11;
    if ( !v4 )
      goto LABEL_12;
  }
  if ( v4 == 40 )
    return sub_25A8B8(v3, v5);
  if ( v4 == 95 )
  {
    v7 = (unsigned __int8)*v5;
    if ( *v5 )
    {
      v9 = 95;
      goto LABEL_13;
    }
    return sub_9A6F0(v3) == 0;
  }
  v7 = (unsigned __int8)*v5;
LABEL_13:
  if ( v7 == 40 )
    return sub_25A8B8(v3, v5);
LABEL_14:
  if ( a3 != 1 )
    return v9 - v7;
  v13 = tolower(v9);
  return v13 - tolower(v7);
}
