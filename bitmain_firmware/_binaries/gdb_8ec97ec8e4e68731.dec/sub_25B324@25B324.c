char *__fastcall sub_25B324(char **a1, char *s, const char *a3)
{
  char *v3; // r11
  size_t v6; // r7
  char *v7; // r5
  size_t v8; // r8
  char *result; // r0
  int v10; // r4
  int v11; // r2
  bool v12; // zf
  int v13; // r1
  int v14; // r2
  size_t v15; // r0
  char *v16; // r0
  char *v17; // r4
  size_t v18; // r0

  v3 = *a1;
  v6 = strlen(s);
  v7 = v3;
  v8 = strlen(a3);
  while ( 1 )
  {
    result = (char *)sub_338BD4(v3, s);
    v10 = (int)result;
    v3 = result + 1;
    if ( !result )
      break;
    if ( v7 != result )
    {
      v11 = (unsigned __int8)*(result - 1);
      v12 = v11 == 47;
      if ( v11 != 47 )
        v12 = v11 == 58;
      if ( !v12 )
        continue;
    }
    v13 = (unsigned __int8)result[v6];
    v14 = v13 == 47;
    if ( !result[v6] )
      v14 = 1;
    if ( v13 == 58 )
      v14 |= 1u;
    if ( v14 )
    {
      v15 = strlen(v7);
      v16 = (char *)sub_93050(v7, v8 + 1 + v15);
      v17 = &v16[v10 - (_DWORD)v7];
      v7 = v16;
      v3 = &v17[v8];
      v18 = strlen(&v17[v6]);
      memmove(&v17[v8], &v17[v6], v18 + 1);
      memcpy(v17, a3, v8);
    }
  }
  *a1 = v7;
  return result;
}
