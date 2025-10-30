char *__fastcall sub_3B73C(const char *a1)
{
  size_t v1; // r0
  _DWORD *v2; // r0
  char *v3; // r3
  char *v4; // r3
  char *v5; // r2
  char *s; // [sp+4h] [bp-18h]
  char *v8; // [sp+10h] [bp-Ch]
  char *v9; // [sp+14h] [bp-8h]

  s = (char *)a1;
  v1 = strlen(a1);
  v8 = (char *)sub_20210(2 * v1 + 1, "cgminer.c", "json_escape", 5990);
  v9 = v8;
  v2 = sub_20210(8u, "cgminer.c", "json_escape", 5991);
  *v2 = v8;
  v2[1] = dword_898B0;
  dword_898B0 = (int)v2;
  while ( *s )
  {
    if ( *s == 92 || *s == 34 )
    {
      v3 = v9++;
      *v3 = 92;
    }
    v4 = v9++;
    v5 = s++;
    *v4 = *v5;
  }
  *v9 = 0;
  return v8;
}
