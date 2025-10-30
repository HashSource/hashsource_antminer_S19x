int *__fastcall sub_B454(int *a1, int a2, int a3)
{
  int v4; // r0
  char *v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1

  if ( a2 < 0
    || (!a3 ? (v4 = 0) : (v4 = 26),
        v5 = (char *)&unk_1D4E8 + v4,
        *(unsigned __int16 *)((char *)&unk_1D4E8 + v4 + 24) <= a2) )
  {
    v8 = -1;
    v6 = -1;
  }
  else
  {
    v6 = a2 >> 5;
    v7 = 2 * ((a2 >> 5) + 1);
    if ( *(unsigned __int16 *)&v5[v7] <= a2 )
      v6 = (a2 >> 5) + 1;
    else
      v7 -= 2;
    v8 = a2 - *(unsigned __int16 *)&v5[v7];
  }
  *a1 = v6;
  a1[1] = v8;
  return a1;
}
