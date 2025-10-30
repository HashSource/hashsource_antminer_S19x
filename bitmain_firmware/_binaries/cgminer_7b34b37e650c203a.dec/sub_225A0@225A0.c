int __fastcall sub_225A0(const char *a1, const char *a2, int a3)
{
  size_t v6; // r0
  int v7; // r3
  const char *v8; // r2
  const char *v9; // r0
  int v10; // t1
  int result; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a1 )
  {
    v6 = strlen(a1);
    if ( !v6 )
      return 1;
    v7 = *(unsigned __int8 *)a1;
    if ( dword_4C8CC[v7] >= 0 )
    {
      v8 = a1;
      v9 = &a1[v6 - 1];
      while ( v8 != v9 )
      {
        v10 = *(unsigned __int8 *)++v8;
        v7 = v10;
        if ( dword_4C8CC[v10] < 0 )
          goto LABEL_8;
      }
      return 1;
    }
LABEL_8:
    if ( byte_74500 || (result = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 2 )
    {
      snprintf(s, 0x800u, "Invalid char 0x%x passed to valid_hex from in %s %s():%d", v7, "util.c", a2, a3);
LABEL_12:
      sub_20F58(3, s, 0);
      return 0;
    }
  }
  else if ( byte_74500 || (result = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 2 )
  {
    snprintf(s, 0x800u, "Null string passed to valid_hex from in %s %s():%d", "util.c", a2, a3);
    goto LABEL_12;
  }
  return result;
}
