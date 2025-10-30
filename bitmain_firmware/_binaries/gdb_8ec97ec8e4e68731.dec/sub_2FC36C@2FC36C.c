int __fastcall sub_2FC36C(int a1, const char *a2)
{
  char *v3; // r0
  unsigned int v4; // r4
  const char *v6; // r1
  char *v7; // r5
  int v8; // r4
  void *ptr; // [sp+0h] [bp-8h] BYREF
  char *s1; // [sp+4h] [bp-4h] BYREF

  v3 = sub_2AD7AC(a1, a2);
  if ( !v3 )
    return 0;
  v4 = *((_DWORD *)v3 + 9);
  if ( !v4 )
    return 0;
  if ( !sub_2ADFDC(a1, (int)v3, (int *)&ptr) || !sub_2FC0D8(a1 + 4, (int)ptr, v4, &s1) )
  {
LABEL_5:
    if ( ptr )
      free(ptr);
    return 0;
  }
  v6 = "arm_any";
  v7 = s1;
  v8 = 13;
  while ( strcmp(v7, v6) )
  {
    if ( v8-- == 0 )
      goto LABEL_5;
    v6 = (&off_41D35C)[2 * v8];
  }
  free(ptr);
  return dword_41D238[2 * v8 + 74];
}
