char *__fastcall sub_21868(char *a1, char *a2)
{
  char *v4; // [sp+0h] [bp-2Ch] BYREF
  char *s; // [sp+4h] [bp-28h]
  int v6; // [sp+Ch] [bp-20h]
  char *v7; // [sp+10h] [bp-1Ch]
  char *needle; // [sp+14h] [bp-18h]
  char *haystack; // [sp+18h] [bp-14h]
  signed int v10; // [sp+1Ch] [bp-10h]
  signed int v11; // [sp+20h] [bp-Ch]
  signed int i; // [sp+24h] [bp-8h]

  s = a1;
  v4 = a2;
  if ( !a1 || !v4 )
    return 0;
  v11 = strlen(s);
  v10 = strlen(v4);
  if ( !v11 || !v10 )
    return 0;
  haystack = (char *)&v4;
  needle = (char *)&v4;
  for ( i = 0; i < v11; ++i )
    haystack[i] = tolower((unsigned __int8)s[i]);
  for ( i = 0; i < v10; ++i )
    needle[i] = tolower((unsigned __int8)v4[i]);
  v7 = strstr(haystack, needle);
  if ( !v7 )
    return 0;
  v6 = v7 - haystack;
  return &s[v7 - haystack];
}
