FILE *__fastcall sub_2A8794(int a1, int a2)
{
  FILE *v2; // r0
  FILE *v3; // r4
  int v4; // r5
  int v5; // r0

  v2 = (FILE *)fopen64(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    v5 = fcntl(v4, 1, 0);
    if ( v5 >= 0 )
      fcntl(v4, 2, v5 | 1);
  }
  return v3;
}
