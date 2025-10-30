int __fastcall sub_E0AF4(const char **a1, const char **a2, const char **a3, const char **a4)
{
  int v4; // r7
  int v5; // r12
  int result; // r0
  _BOOL4 v11; // r4
  int v12; // r0
  const char *v13; // r4
  int v14; // r0
  const char *v15; // r0

  v4 = (int)a3;
  if ( a3 )
    v4 = 1;
  v5 = (int)a1;
  if ( a1 )
    v5 = 1;
  if ( (v4 & v5) != 0 )
  {
    if ( strcmp(*a3, *a1) )
      return 1;
    if ( a4 )
      goto LABEL_8;
LABEL_15:
    if ( !a3 )
      return 1;
    goto LABEL_16;
  }
  if ( !a4 )
  {
    if ( a2 )
      v5 = 1;
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_15;
  }
LABEL_8:
  if ( a2 )
  {
    if ( !strcmp(*a4, *a2) )
    {
      v12 = sub_2209DC(a2);
      v13 = (const char *)sub_204308(v12);
      v14 = sub_2209DC(a4);
      v15 = (const char *)sub_204308(v14);
      result = j_strcmp(v15, v13);
      if ( !result )
        return result;
    }
    return 1;
  }
  if ( !a1 )
    goto LABEL_20;
LABEL_16:
  v11 = a1 == 0;
  if ( a2 )
    result = 0;
  else
    result = v11;
  if ( result )
  {
LABEL_20:
    if ( a4 )
      return 1;
    else
      return v4;
  }
  return result;
}
