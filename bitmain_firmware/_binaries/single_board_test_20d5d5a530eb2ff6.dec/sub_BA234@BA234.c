int __fastcall sub_BA234(int **a1, int **a2)
{
  int *v4; // r3
  int *v5; // r1
  int v6; // r6
  int *v7; // lr
  int *v8; // r0
  int *v9; // r3
  int *v10; // r2
  int v11; // r1
  int v12; // r5
  int *v13; // r4
  int v14; // t1

  if ( a1 == a2 )
  {
    if ( sub_B89D8((int)a1, (int)a1[1] + 1) )
      goto LABEL_4;
    return 0;
  }
  v4 = a2[3];
  v5 = a2[1];
  a1[3] = v4;
  if ( !sub_B89D8((int)a1, (int)v5 + 1) )
    return 0;
  a1[1] = a2[1];
LABEL_4:
  v6 = (int)a2[1];
  v7 = *a1;
  v8 = *a2;
  if ( v6 > 0 )
  {
    if ( v6 <= 8 )
    {
      v13 = *a1;
      v11 = 0;
    }
    else
    {
      v9 = v8 + 8;
      v10 = v7 + 8;
      v11 = 0;
      do
      {
        v12 = *(v9 - 8);
        v11 += 8;
        __pld(v9 + 17);
        v8 = v9;
        v13 = v10;
        v9 += 8;
        v10 += 8;
        *(v10 - 16) = 2 * v12;
        *(v10 - 15) = 2 * *(v9 - 15);
        *(v10 - 14) = 2 * *(v9 - 14);
        *(v10 - 13) = 2 * *(v9 - 13);
        *(v10 - 12) = 2 * *(v9 - 12);
        *(v10 - 11) = 2 * *(v9 - 11);
        *(v10 - 10) = 2 * *(v9 - 10);
        *(v10 - 9) = 2 * *(v9 - 9);
      }
      while ( v11 != ((v6 - 9) & 0xFFFFFFF8) + 8 );
    }
    do
    {
      v14 = *v8++;
      ++v11;
      *v13++ = 2 * v14;
    }
    while ( v6 > v11 );
    v7 += v6;
  }
  *v7 = 0;
  return 1;
}
