int __fastcall sub_48458(_BYTE *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r6
  int v3; // t1
  int v4; // r6
  int v5; // r12
  int v6; // r7
  int v7; // r12
  unsigned int v8; // r7
  _BYTE *v9; // r4
  unsigned __int8 *v10; // r3
  int v11; // r5
  int v12; // r8
  unsigned int v13; // r3
  int v14; // r4
  _BYTE *v15; // r4

  v2 = a2;
  do
    v3 = *v2++;
  while ( (unsigned __int8)a456789[v3] <= 0x3Fu );
  v4 = v2 - a2;
  v5 = v4 + 5;
  v6 = v4 - 1;
  if ( v4 + 2 >= 0 )
    v5 = v4 + 2;
  v7 = 3 * (v5 >> 2);
  if ( v6 > 4 )
  {
    v8 = (unsigned int)(v4 - 6) >> 2;
    v9 = a1 + 3;
    v10 = a2 + 4;
    do
    {
      v11 = *(v10 - 3);
      v9 += 3;
      v12 = *(v10 - 4);
      v10 += 4;
      *(v9 - 6) = ((unsigned __int8)a456789[v11] >> 4) | (4 * a456789[v12]);
      *(v9 - 5) = ((unsigned __int8)a456789[*(v10 - 6)] >> 2) | (16 * a456789[*(v10 - 7)]);
      *(v9 - 4) = a456789[*(v10 - 5)] | (a456789[*(v10 - 6)] << 6);
    }
    while ( &a1[3 * v8 + 6] != v9 );
    v13 = v8 + 1;
    v14 = 3 * (v8 + 1);
    v6 = v4 - 5 - 4 * v8;
    a2 += 4 * v13;
    a1 += v14;
  }
  if ( v6 <= 1 )
    goto LABEL_18;
  *a1 = ((unsigned __int8)a456789[a2[1]] >> 4) | (4 * a456789[*a2]);
  if ( v6 == 2 )
  {
    ++a1;
LABEL_18:
    v15 = a1;
    goto LABEL_17;
  }
  if ( v6 == 4 )
    v15 = a1 + 3;
  else
    v15 = a1 + 2;
  a1[1] = ((unsigned __int8)a456789[a2[2]] >> 2) | (16 * a456789[a2[1]]);
  if ( v6 == 4 )
    a1[2] = a456789[a2[3]] | (a456789[a2[2]] << 6);
LABEL_17:
  *v15 = 0;
  return v7 - (-v6 & 3);
}
