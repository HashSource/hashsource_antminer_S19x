int *__fastcall sub_15CE04(int *a1)
{
  int *result; // r0
  int *v3; // r3
  int *v4; // r2
  int *v5; // r1
  int v6; // r7
  int v7; // r6
  int v8; // r5
  int v9; // r4

  result = sub_15CDE0(*a1, a1[1], a1[2]);
  if ( result )
  {
    v3 = a1;
    v4 = result;
    v5 = a1 + 12;
    do
    {
      v6 = *v3;
      v3 += 4;
      v7 = *(v3 - 3);
      v4 += 4;
      v8 = *(v3 - 2);
      v9 = *(v3 - 1);
      *(v4 - 4) = v6;
      *(v4 - 3) = v7;
      *(v4 - 2) = v8;
      *(v4 - 1) = v9;
    }
    while ( v3 != v5 );
    *v4 = *v3;
  }
  return result;
}
