int __fastcall sub_415C4(int a1, int a2, const char *a3, int a4, unsigned __int8 a5)
{
  const char *v8; // r3
  _UNKNOWN **v9; // r4
  const char *v10; // t1
  const __int32_t **v11; // r0
  __int32_t v12; // r3
  int v13; // r5
  const char *v14; // r0
  const char *v15; // r3
  char **v16; // r0
  int result; // r0
  int v18; // r0
  const char *v19; // r3
  int v20; // r0
  int v21; // r0
  char s[100]; // [sp+Ch] [bp-64h] BYREF

  if ( !a3 || !*a3 )
    return sub_3F65C((unsigned int *)a1, 71, 0, 0, a4);
  v8 = (const char *)off_9DD3C;
  if ( off_9DD3C )
  {
    v9 = &off_9DD3C;
    while ( strcmp(v8, a3) )
    {
      v10 = (const char *)v9[3];
      v9 += 3;
      v8 = v10;
      if ( !v10 )
      {
        sub_3F65C((unsigned int *)a1, 72, 0, 0, a4);
        if ( !a4 )
          goto LABEL_20;
        goto LABEL_17;
      }
    }
    sprintf(s, "|%s|", a3);
    v11 = _ctype_toupper_loc();
    v12 = (*v11)[a5];
    if ( v12 == (*v11)[87] || strstr(*((const char **)&unk_242DF4 + v12 - (*v11)[65]), s) )
    {
      sub_3F65C((unsigned int *)a1, 72, 0, 0, a4);
      if ( a4 )
        v13 = sub_3C770((unsigned int *)a1, ",\"CHECK\":[");
      else
        v13 = sub_3C770((unsigned int *)a1, "CHECK,");
      v14 = sub_3F3D8(0, "Exists", 2, "Y", 0);
      v15 = "Y";
      goto LABEL_12;
    }
    sub_3F65C((unsigned int *)a1, 72, 0, 0, a4);
    if ( a4 )
      v21 = sub_3C770((unsigned int *)a1, ",\"CHECK\":[");
    else
      v21 = sub_3C770((unsigned int *)a1, "CHECK,");
    v19 = "Y";
    v13 = v21;
  }
  else
  {
    sub_3F65C((unsigned int *)a1, 72, 0, 0, a4);
    if ( a4 )
    {
LABEL_17:
      v18 = sub_3C770((unsigned int *)a1, ",\"CHECK\":[");
      v19 = "N";
      v13 = v18;
    }
    else
    {
LABEL_20:
      v20 = sub_3C770((unsigned int *)a1, "CHECK,");
      v19 = "N";
      v13 = v20;
    }
  }
  v14 = sub_3F3D8(0, "Exists", 2, v19, 0);
  v15 = "N";
LABEL_12:
  v16 = (char **)sub_3F3D8((int)v14, "Access", 2, v15, 0);
  result = sub_3E88C((unsigned int *)a1, v16, a4, 0);
  if ( (a4 & v13) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
