_DWORD *__fastcall sub_3142CC(_DWORD *a1, char a2)
{
  _DWORD *v2; // r4
  int v3; // r12
  _BYTE *v4; // r2
  unsigned int v6; // r3
  bool v7; // cc
  unsigned int v8; // r2
  _DWORD *result; // r0
  int v10; // r2
  int v11; // r1
  const char *v12; // r2
  int v13; // r3
  int v14; // r1
  bool v15; // zf
  int v16; // r12
  _DWORD *v17; // r4
  int v18; // r3
  unsigned int v19; // r0
  _BYTE *v20; // r1
  unsigned int v21; // r4
  unsigned int v22; // r3
  unsigned int v23; // r2
  int v24; // r5
  int v25; // r7

  v4 = (_BYTE *)a1[3];
  if ( *v4 != 83 )
    return 0;
  a1[3] = v4 + 1;
  v6 = (unsigned __int8)v4[1];
  if ( v4[1] )
  {
    a1[3] = v4 + 2;
    v6 = (unsigned __int8)v4[1];
    v3 = v6 - 48;
    v7 = v6 > 0x5F;
    if ( v6 != 95 )
      v7 = (unsigned __int8)(v6 - 48) > 9u;
    if ( !v7 || v6 - 65 <= 0x19 )
    {
      if ( v6 == 95 )
      {
        v8 = 0;
LABEL_9:
        if ( a1[8] > v8 )
          return *(_DWORD **)(a1[7] + 4 * v8);
      }
      else
      {
        v19 = 0;
        while ( 1 )
        {
          v21 = v6 - 65;
          v22 = v6 + 36 * v19;
          v23 = v22 - 55;
          if ( (unsigned __int8)v3 > 9u )
          {
            if ( v21 > 0x19 )
              return 0;
          }
          else
          {
            v23 = v22 - 48;
          }
          v7 = v19 > v23;
          v19 = v23;
          if ( v7 )
            break;
          v20 = (_BYTE *)a1[3];
          v6 = (unsigned __int8)*v20;
          if ( *v20 )
          {
            a1[3] = v20 + 1;
            v6 = (unsigned __int8)*v20;
            if ( v6 == 95 )
            {
              v8 = v23 + 1;
              goto LABEL_9;
            }
          }
          LOBYTE(v3) = v6 - 48;
        }
      }
      return 0;
    }
  }
  v10 = a1[2] & 8;
  if ( v10 )
  {
    v11 = 0;
    v3 = 1;
  }
  else
  {
    v11 = a2 & 1;
  }
  if ( !v10 )
    v3 = 0;
  if ( v11 && (unsigned int)*(unsigned __int8 *)a1[3] - 67 <= 1 )
    v3 = 1;
  v12 = "t";
  if ( v6 != 116 )
  {
    do
    {
      v12 += 28;
      if ( v12 >= (const char *)&off_433404 )
        return 0;
    }
    while ( v6 != *(unsigned __int8 *)v12 );
  }
  result = (_DWORD *)*((_DWORD *)v12 + 5);
  v13 = a1[5];
  v14 = a1[6];
  if ( result )
  {
    if ( v14 > v13 )
    {
      v24 = 16 * v13;
      v25 = *((_DWORD *)v12 + 6);
      ++v13;
      v2 = (_DWORD *)(a1[4] + v24);
      v2[1] = 0;
      a1[5] = v13;
      *v2 = 24;
      v2[2] = result;
      v2[3] = v25;
    }
    else
    {
      v2 = 0;
    }
    a1[10] = v2;
  }
  v15 = v3 == 0;
  if ( v3 )
  {
    v16 = *((_DWORD *)v12 + 4);
  }
  else
  {
    v2 = (_DWORD *)*((_DWORD *)v12 + 1);
    v16 = *((_DWORD *)v12 + 2);
  }
  if ( !v15 )
    v2 = (_DWORD *)*((_DWORD *)v12 + 3);
  if ( v14 <= v13 )
    result = 0;
  a1[11] += v16;
  if ( v14 > v13 )
  {
    result = (_DWORD *)(a1[4] + 16 * v13);
    result[1] = 0;
    a1[5] = v13 + 1;
    *result = 24;
    result[2] = v2;
    result[3] = v16;
  }
  if ( *(_BYTE *)a1[3] == 66 )
  {
    v17 = a1;
    result = (_DWORD *)sub_314268(a1, (int)result);
    if ( result )
    {
      v18 = v17[8];
      if ( v18 < v17[9] )
      {
        *(_DWORD *)(v17[7] + 4 * v18) = result;
        v17[8] = v18 + 1;
        return result;
      }
    }
    return 0;
  }
  return result;
}
