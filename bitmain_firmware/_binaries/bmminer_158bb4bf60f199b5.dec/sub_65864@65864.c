unsigned int __fastcall sub_65864(int a1, unsigned int a2, int *a3)
{
  int v3; // r6
  int v4; // r12
  unsigned int v5; // r4
  int v6; // lr
  unsigned int v7; // r3
  int v8; // r5
  unsigned int v9; // r5
  unsigned int v10; // r7
  int v11; // r8
  unsigned int v12; // r4
  int v13; // r12
  int v14; // r5
  unsigned int v15; // r3
  int v16; // r6
  unsigned int v17; // r6
  unsigned int v18; // r7
  unsigned int result; // r0
  unsigned int v20; // r5
  bool v21; // zf

  v3 = 1;
  v4 = 1;
  v5 = 0;
  v6 = -1;
  while ( 1 )
  {
    v7 = v4 + v5;
    v8 = a1 + v6;
    if ( v4 + v5 >= a2 )
      break;
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)(v8 + v4);
      v10 = *(unsigned __int8 *)(a1 + v7);
      if ( v10 >= v9 )
        break;
      v5 = v7;
      v4 = 1;
      v3 = v7 - v6;
      ++v7;
      v8 = a1 + v6;
      if ( v7 >= a2 )
        goto LABEL_5;
    }
    if ( v10 == v9 )
    {
      v21 = v4++ == v3;
      if ( v21 )
      {
        v5 = v7;
        v4 = 1;
      }
    }
    else
    {
      v3 = 1;
      v6 = v5;
      v4 = 1;
      ++v5;
    }
  }
LABEL_5:
  v11 = 1;
  v12 = 0;
  v13 = 1;
  v14 = -1;
  *a3 = v3;
  while ( 1 )
  {
    v15 = v13 + v12;
    v16 = a1 + v14;
    if ( a2 <= v13 + v12 )
      break;
    while ( 1 )
    {
      v17 = *(unsigned __int8 *)(v16 + v13);
      v18 = *(unsigned __int8 *)(a1 + v15);
      if ( v18 <= v17 )
        break;
      v12 = v15;
      v13 = 1;
      v11 = v15 - v14;
      ++v15;
      v16 = a1 + v14;
      if ( a2 <= v15 )
        goto LABEL_9;
    }
    if ( v18 == v17 )
    {
      v21 = v13++ == v11;
      if ( v21 )
      {
        v12 = v15;
        v13 = 1;
      }
    }
    else
    {
      v11 = 1;
      v14 = v12;
      v13 = 1;
      ++v12;
    }
  }
LABEL_9:
  result = v6 + 1;
  v20 = v14 + 1;
  if ( v20 >= v6 + 1 )
  {
    *a3 = v11;
    return v20;
  }
  return result;
}
