_BYTE *__fastcall sub_3D370(unsigned __int8 *a1, int a2)
{
  int v2; // r4
  _BYTE *result; // r0
  unsigned __int8 *v6; // r1
  char *v7; // r12
  unsigned __int8 *v8; // r2
  unsigned __int8 *v9; // r5
  unsigned int v10; // t1
  _BYTE *v11; // r4

  v2 = 2 * a2;
  result = sub_3D194(4 - (2 * a2 + 1) % 4 + 2 * a2 + 1, 1u, "util.c", "bin2hex", 789);
  if ( a2 <= 0 )
  {
    v11 = result;
  }
  else
  {
    v6 = &a1[a2];
    v7 = result + 2;
    v8 = a1;
    do
    {
      v9 = v8;
      v10 = *v8++;
      v7 += 2;
      *(v7 - 4) = aTqFreezethaw[(v10 >> 4) + 72];
      *(v7 - 3) = aTqFreezethaw[(*v9 & 0xF) + 72];
    }
    while ( v8 != v6 );
    v11 = &result[v2];
  }
  *v11 = 0;
  return result;
}
