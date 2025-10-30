int *__fastcall sub_157854(const char *a1)
{
  int *v1; // r4
  int **v3; // r7
  signed int v4; // r6
  int *v5; // t1
  signed int v6; // r3

  v1 = &dword_35C954;
  v3 = &off_3A7718;
  v4 = strlen(a1);
  do
  {
    v6 = strlen((const char *)v1[3]);
    if ( v4 > v6 && !strcmp(&a1[v4 - v6], (const char *)v1[3]) )
      break;
    v5 = *v3++;
    v1 = v5;
  }
  while ( v5 );
  return v1;
}
