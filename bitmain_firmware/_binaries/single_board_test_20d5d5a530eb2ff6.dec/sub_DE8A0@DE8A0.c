int __fastcall sub_DE8A0(int a1, char *s1, const char *a3)
{
  int v6; // r5
  int v8; // r5
  int v9; // r2
  int v10; // r0
  int v11; // r1
  char *v12; // r2
  int v13; // r0
  int v14; // r1

  if ( !strcmp(s1, "mode") )
  {
    v6 = 0;
    if ( !strcmp(a3, "EXTRACT_AND_EXPAND") || !strcmp(a3, "EXTRACT_ONLY") || !strcmp(a3, "EXPAND_ONLY") )
      return sub_DB77C(a1, -1, 1024);
    return v6;
  }
  v8 = (unsigned __int8)*s1;
  if ( v8 == 109 && s1[1] == 100 && !s1[2] )
    return sub_DB8C0(a1, 1024, 4099, (int)a3);
  if ( !strcmp(s1, "salt") )
  {
    v12 = (char *)a3;
    v13 = a1;
    v14 = 4100;
    return sub_DB850(v13, v14, v12);
  }
  if ( !strcmp(s1, "hexsalt") )
  {
    v9 = (int)a3;
    v10 = a1;
    v11 = 4100;
    return sub_DB880(v10, v11, v9);
  }
  if ( v8 != 107 || s1[1] != 101 || s1[2] != 121 || s1[3] )
  {
    if ( !strcmp(s1, "hexkey") )
    {
      v9 = (int)a3;
      v10 = a1;
      v11 = 4101;
    }
    else
    {
      if ( !strcmp(s1, "info") )
      {
        v12 = (char *)a3;
        v13 = a1;
        v14 = 4102;
        return sub_DB850(v13, v14, v12);
      }
      if ( strcmp(s1, "hexinfo") )
      {
        v6 = -2;
        sub_D0048(52, 103, 103, (int)"crypto/kdf/hkdf.c", 174);
        return v6;
      }
      v9 = (int)a3;
      v10 = a1;
      v11 = 4102;
    }
    return sub_DB880(v10, v11, v9);
  }
  v12 = (char *)a3;
  v13 = a1;
  v14 = 4101;
  return sub_DB850(v13, v14, v12);
}
