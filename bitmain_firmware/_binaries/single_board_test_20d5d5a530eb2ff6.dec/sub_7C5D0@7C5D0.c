_DWORD *__fastcall sub_7C5D0(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r2
  int v6; // r4
  int v7; // r4
  int v8; // r4

  v2 = result[570];
  v3 = *(unsigned __int16 *)(v2 + 2);
  if ( a2 == v3 - 1 )
  {
    v7 = result[567];
    *(_DWORD *)(v2 + 60) = result[566];
    *(_DWORD *)(v2 + 64) = v7;
    v2 = result[570];
    v8 = *(_DWORD *)(v2 + 56);
    result[566] = *(_DWORD *)(v2 + 52);
    result[567] = v8;
    goto LABEL_3;
  }
  if ( a2 != v3 + 1 )
  {
LABEL_3:
    *(_WORD *)(v2 + 2) = a2;
    return result;
  }
  v4 = result[567];
  *(_DWORD *)(v2 + 52) = result[566];
  *(_DWORD *)(v2 + 56) = v4;
  v5 = result[570];
  v6 = *(_DWORD *)(v5 + 64);
  result[566] = *(_DWORD *)(v5 + 60);
  result[567] = v6;
  *(_WORD *)(v5 + 2) = a2;
  return result;
}
