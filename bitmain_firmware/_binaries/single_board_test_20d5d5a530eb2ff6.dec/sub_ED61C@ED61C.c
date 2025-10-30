int __fastcall sub_ED61C(const char *a1, const char *a2, int a3, unsigned __int8 *a4)
{
  size_t v8; // r0
  size_t v9; // r4
  const char *v10; // r5
  int result; // r0
  signed int v12; // r4
  char *v13; // r5
  unsigned __int8 *v14; // r7
  int v15; // t1

  v8 = strlen(a1);
  v9 = 1024 - v8;
  v10 = &a1[v8];
  result = sub_B5560(v10, 1024 - v8, "DEK-Info: %s,", a2);
  if ( result > 0 )
  {
    v12 = v9 - result;
    v13 = (char *)&v10[result];
    if ( a3 <= 0 )
    {
LABEL_7:
      if ( v12 > 1 )
        strcpy(v13, "\n");
    }
    else
    {
      v14 = &a4[a3];
      while ( 1 )
      {
        v15 = *a4++;
        result = sub_B5560(v13, v12, "%02X", v15);
        v12 -= result;
        v13 += result;
        if ( result <= 0 )
          break;
        if ( a4 == v14 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
