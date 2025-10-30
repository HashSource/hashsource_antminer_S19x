int __fastcall sub_1AFA0(char *a1, char *s, _BYTE *a3, unsigned int a4)
{
  char *v6; // r4
  char *v8; // r0
  char *v9; // r5
  int v10; // r5

  if ( !a1 )
    sub_10C38();
  v6 = s;
  if ( !s )
    sub_10C38();
  if ( !a3 )
    sub_10C38();
  v8 = strrchr(s, 47);
  if ( v8 )
    v6 = v8 + 1;
  v9 = strrchr(a1, 47);
  if ( v9 )
  {
    v10 = v9 - a1;
    if ( v10 + 2 + strlen(v6) > a4 )
      return 19;
    sub_108C4(a3, (unsigned __int8 *)a1, a4);
    a3[v10 + 1] = 0;
    sub_10968(a3, v6, a4);
    return 0;
  }
  else
  {
    if ( a4 < strlen(v6) + 1 )
      return 19;
    sub_108C4(a3, (unsigned __int8 *)v6, a4);
    return 0;
  }
}
