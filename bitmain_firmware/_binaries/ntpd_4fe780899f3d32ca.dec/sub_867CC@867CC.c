int __fastcall sub_867CC(_DWORD *a1, int *a2)
{
  unsigned __int8 *v3; // r1
  _DWORD *v4; // r4
  unsigned int v5; // r1
  unsigned int v6; // r3
  int v7; // r0
  char *v8; // r1
  int v9; // t1
  __int16 v10; // r6
  int result; // r0

  v3 = (unsigned __int8 *)a1[5];
  v4 = a1;
  if ( v3 )
  {
    v5 = *v3;
    if ( v5 )
      return sub_7DFF0((int)a1, v5, a2, a2 + 3);
  }
  v6 = a1[4];
  if ( v6 >= a1[1] )
    return 1;
  v7 = a1[3];
  v8 = *(char **)(v4[2] + 4 * v6);
  v4[5] = v8;
  if ( (v7 & 3) != 0 )
  {
    v4[5] = v8 + 1;
    if ( *v8 == 45 && v8[1] )
    {
      v4[4] = v6 + 1;
      if ( v8[1] != 45 )
      {
        if ( (v7 & 2) == 0 )
          return sub_85A98((int)v4, ++v8, a2);
        v5 = (unsigned __int8)v8[1];
        a1 = v4;
        return sub_7DFF0((int)a1, v5, a2, a2 + 3);
      }
      v4[5] = v8 + 2;
      if ( v8[2] )
      {
        if ( (v7 & 1) == 0 )
        {
          fprintf(stderr, off_B84CC[0], v4[6], v8);
          return -1;
        }
        v8 += 2;
        return sub_85A98((int)v4, v8, a2);
      }
    }
    return 1;
  }
  v4[4] = v6 + 1;
  if ( *v8 != 45 )
    return sub_85A98((int)v4, v8, a2);
  do
    v9 = (unsigned __int8)*++v8;
  while ( v9 == 45 );
  v10 = *((_WORD *)v4 + 49);
  *((_WORD *)v4 + 49) = 0x8000;
  result = sub_85A98((int)v4, v8, a2);
  *((_WORD *)v4 + 49) = v10;
  return result;
}
