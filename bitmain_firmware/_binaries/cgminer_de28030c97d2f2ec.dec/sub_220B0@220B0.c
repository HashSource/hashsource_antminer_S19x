char *__fastcall sub_220B0(char *a1, char *a2)
{
  char *v3; // r4
  char *v4; // r4
  char *v6; // [sp+0h] [bp-34h] BYREF
  char *s; // [sp+4h] [bp-30h]
  int v8; // [sp+Ch] [bp-28h]
  char *v9; // [sp+10h] [bp-24h]
  char *needle; // [sp+14h] [bp-20h]
  char *haystack; // [sp+18h] [bp-1Ch]
  signed int v12; // [sp+1Ch] [bp-18h]
  signed int v13; // [sp+20h] [bp-14h]
  signed int i; // [sp+24h] [bp-10h]

  s = a1;
  v6 = a2;
  if ( !a1 || !v6 )
    return 0;
  v13 = strlen(s);
  v12 = strlen(v6);
  if ( !v13 || !v12 )
    return 0;
  haystack = (char *)&v6;
  needle = (char *)&v6;
  for ( i = 0; i < v13; ++i )
  {
    v3 = &haystack[i];
    *v3 = tolower((unsigned __int8)s[i]);
  }
  for ( i = 0; i < v12; ++i )
  {
    v4 = &needle[i];
    *v4 = tolower((unsigned __int8)v6[i]);
  }
  v9 = strstr(haystack, needle);
  if ( !v9 )
    return 0;
  v8 = v9 - haystack;
  return &s[v9 - haystack];
}
