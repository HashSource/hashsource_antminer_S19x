char *__fastcall sub_258CB0(int a1, int a2)
{
  char *v4; // r0
  char *v5; // r8
  char *v6; // r5
  int v7; // r4
  int v8; // r6
  int v9; // t1

  v4 = (char *)sub_93028(2 * a2 + 1);
  v5 = v4;
  if ( a2 )
  {
    v7 = a1 - 1;
    v8 = v7 + a2;
    v6 = v4;
    do
    {
      v9 = *(unsigned __int8 *)++v7;
      v6 += sub_93170(v6, 3u, "%02x", v9);
    }
    while ( v7 != v8 );
  }
  else
  {
    v6 = v4;
  }
  *v6 = 0;
  return v5;
}
