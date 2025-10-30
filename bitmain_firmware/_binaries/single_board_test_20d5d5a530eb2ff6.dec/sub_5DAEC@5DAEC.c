int __fastcall sub_5DAEC(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  bool v3; // cc
  int v4; // r4
  int v6; // r7
  int v7; // r8
  unsigned __int8 *v8; // r6
  unsigned __int8 *v9; // r4
  char *v10; // r11
  int v11; // r10
  int v12; // t1
  char v13; // r5
  char v15; // r4

  v3 = (int)a1 <= 0;
  if ( a1 )
    v3 = a3 <= 0;
  v4 = v3;
  if ( !a2 )
    v4 |= 1u;
  if ( v4 )
  {
    printf("s2hex para error dst(%p), src(%p), inlen(%d)\n", a1, a2, a3);
    return -1;
  }
  else
  {
    v6 = a3 >> 1;
    v7 = a3 & 1;
    if ( a3 >> 1 )
    {
      v8 = &a2[2 * v6];
      v9 = a2;
      v10 = a1 - 1;
      do
      {
        v11 = v9[1];
        v12 = *v9;
        v9 += 2;
        v13 = sub_5CB60(v12);
        *++v10 = sub_5CB60(v11) ^ (16 * v13);
      }
      while ( v9 != v8 );
    }
    if ( v7 )
    {
      v15 = sub_5CB60(a2[2 * v6]);
      printf("input value error: %c\n", 0);
      a1[v6] = ~(16 * v15);
    }
    return v6 + v7;
  }
}
