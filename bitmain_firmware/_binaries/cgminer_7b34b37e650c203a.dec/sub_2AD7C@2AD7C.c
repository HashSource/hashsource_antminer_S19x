_BYTE *__fastcall sub_2AD7C(const char *a1)
{
  const char *v1; // r4
  size_t v2; // r0
  _BYTE *v3; // r5
  _DWORD *v4; // r0
  int v5; // r2
  _BYTE *v6; // r2
  int i; // r3
  bool v8; // zf
  _BYTE *v9; // r3
  char v10; // t1

  v1 = a1;
  v2 = strlen(a1);
  v3 = sub_229BC(2 * v2 + 1, "cgminer.c", "json_escape", 5921);
  v4 = sub_229BC(8u, "cgminer.c", "json_escape", 5922);
  *v4 = v3;
  v5 = dword_68DF0;
  dword_68DF0 = (int)v4;
  v4[1] = v5;
  v6 = v3;
  for ( i = *(unsigned __int8 *)v1; *v1; i = *(unsigned __int8 *)v1 )
  {
    v8 = i == 34;
    if ( i != 34 )
      v8 = i == 92;
    v9 = v6 + 1;
    if ( v8 )
    {
      *v6 = 92;
      v6 += 2;
    }
    else
    {
      v9 = v6++;
    }
    v10 = *v1++;
    *v9 = v10;
  }
  *v6 = 0;
  return v3;
}
