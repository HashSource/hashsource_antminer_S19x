int __fastcall sub_2FC24C(int a1, const char *a2)
{
  const char *v2; // r8
  char *v5; // r0
  char *v6; // r4
  unsigned int n; // r5
  unsigned int v9; // r0
  int v10; // r3
  int v11; // r0
  void *v12; // r9
  int v13; // r3
  void *ptr; // [sp+10h] [bp-Ch] BYREF
  char *s1; // [sp+14h] [bp-8h] BYREF

  v5 = sub_2AD7AC(a1, a2);
  v6 = v5;
  if ( !v5 )
    return 1;
  n = *((_DWORD *)v5 + 9);
  if ( !n )
    return 0;
  if ( !sub_2ADFDC(a1, (int)v5, (int *)&ptr) || !sub_2FC0D8(a1 + 4, (int)ptr, n, &s1) )
  {
LABEL_6:
    if ( ptr )
      free(ptr);
    return 0;
  }
  v9 = sub_2A678C(a1) - 1;
  if ( v9 > 0xC )
    v2 = (const char *)(unsigned __int16)"unknown";
  else
    v10 = 53816;
  if ( v9 > 0xC )
    HIWORD(v2) = (unsigned int)"unknown" >> 16;
  else
    HIWORD(v10) = 65;
  if ( v9 <= 0xC )
    v2 = *(const char **)(v10 + 4 * v9 + 240);
  v11 = strcmp(s1, v2);
  v12 = ptr;
  if ( !v11 )
    goto LABEL_20;
  strcpy((char *)ptr + 20, v2);
  if ( !sub_2ADDE8(a1, v6, v12, v13, 0, n) )
  {
    sub_2A6A5C("warning: unable to update contents of %s section in %B", a2, a1);
    goto LABEL_6;
  }
  v12 = ptr;
LABEL_20:
  free(v12);
  return 1;
}
