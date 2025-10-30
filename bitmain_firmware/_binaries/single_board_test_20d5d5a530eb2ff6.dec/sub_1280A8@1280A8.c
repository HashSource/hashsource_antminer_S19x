int __fastcall sub_1280A8(const char *a1, signed int a2)
{
  const char *v2; // r8
  int v3; // r6
  signed int v4; // r4
  int v5; // r7
  char v6; // r5
  unsigned int v7; // t1

  if ( !a1 )
    return 19;
  v2 = a1;
  if ( a2 < 0 )
    a2 = strlen(a1);
  v3 = 0;
  v4 = a2;
  v5 = 0;
  while ( v4-- > 0 )
  {
    v7 = *(unsigned __int8 *)v2++;
    v6 = v7;
    if ( !sub_BDB10(v7, 2048) )
      v5 = 1;
    if ( v6 < 0 )
      v3 = 1;
  }
  if ( v3 )
    return 20;
  if ( v5 )
    return 22;
  return 19;
}
