int __fastcall sub_309F24(int a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r9
  unsigned int v8; // r7
  int v9; // lr
  int v10; // r12
  unsigned int v11; // r4
  int v12; // r6
  int v13; // lr
  unsigned int v14; // r10
  int result; // r0
  int v16; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 5200);
  v4 = a3 + 724;
  v5 = 2 * a3;
  v6 = v4 + 2;
  v7 = *(_DWORD *)(a1 + 4 * v6 + 4);
  if ( v5 > v3 )
  {
LABEL_14:
    result = a1 + 4 * v6;
    *(_DWORD *)(result + 4) = v7;
    return result;
  }
  v16 = *(_DWORD *)(a1 + 4 * v6 + 4);
  v8 = *(unsigned __int16 *)(a2 + 4 * v7);
  while ( 1 )
  {
    v9 = a1 + 4 * v5;
    v10 = *(_DWORD *)(v9 + 2908);
    v11 = *(unsigned __int16 *)(a2 + 4 * v10);
    if ( v3 <= v5 )
    {
LABEL_9:
      v13 = v5;
      goto LABEL_10;
    }
    v12 = *(_DWORD *)(v9 + 2912);
    v13 = v5 + 1;
    v14 = *(unsigned __int16 *)(a2 + 4 * v12);
    if ( v14 >= v11 )
    {
      if ( v14 != v11 )
        goto LABEL_9;
      if ( *(unsigned __int8 *)(a1 + v12 + 5208) <= (unsigned int)*(unsigned __int8 *)(a1 + v10 + 5208) )
        v10 = v12;
      else
        v13 = v5;
    }
    else
    {
      v11 = *(unsigned __int16 *)(a2 + 4 * v12);
      v10 = v12;
    }
LABEL_10:
    if ( v8 < v11
      || v8 == v11 && *(unsigned __int8 *)(a1 + v7 + 5208) <= (unsigned int)*(unsigned __int8 *)(a1 + v10 + 5208) )
    {
      v7 = v16;
      goto LABEL_14;
    }
    v5 = 2 * v13;
    *(_DWORD *)(a1 + 4 * v6 + 4) = v10;
    if ( 2 * v13 > v3 )
      break;
    v6 = v13 + 726;
  }
  result = a1 + 4 * (v13 + 726);
  *(_DWORD *)(result + 4) = v16;
  return result;
}
