char *__fastcall sub_19C5EC(char *a1, char *a2)
{
  char *v2; // r7
  char *v3; // r6
  char *v4; // r5
  char *v5; // r4
  int v7; // r4
  int v8; // r0
  _BOOL4 v9; // r4
  int v11; // r1
  char *v12; // r0

  v2 = a2;
  if ( !a2 )
    return 0;
  v3 = a1;
  if ( a2 - a1 > 7 )
  {
    if ( a1 >= a2 )
      goto LABEL_20;
LABEL_4:
    v4 = v2;
    do
    {
      v5 = v4;
      if ( !isspace((unsigned __int8)*--v4) )
        goto LABEL_7;
    }
    while ( v4 != v3 );
    v5 = v3;
LABEL_7:
    while ( v5 - v3 > 7 && !strncmp(v5 - 8, "operator", 8u) )
    {
      if ( v5 - 8 != v3 )
      {
        v7 = (unsigned __int8)*(v5 - 9);
        v8 = isalnum(v7);
        v9 = v7 != 95;
        if ( v8 )
          v9 = 0;
        if ( !v9 )
          break;
      }
      v11 = (unsigned __int8)*v2;
      if ( v11 == 45 && v2[1] == 45 )
        v3 = v2 + 2;
      else
        v3 = v2 + 1;
      v12 = sub_197488(v3, v11);
      v2 = v12;
      if ( !v12 )
        return 0;
      if ( v12 - v3 <= 7 )
        return v2;
      if ( v3 < v12 )
        goto LABEL_4;
LABEL_20:
      v5 = v2;
    }
  }
  return v2;
}
