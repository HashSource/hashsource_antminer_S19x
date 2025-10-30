_DWORD *__fastcall sub_314170(int a1)
{
  int v2; // r0
  int v3; // r6
  unsigned __int8 *v4; // r5
  int v5; // r2
  _DWORD *result; // r0
  int v7; // r2
  bool v8; // zf
  int v9; // r3

  v2 = sub_313C18((unsigned __int8 **)(a1 + 12));
  v3 = v2;
  if ( v2 <= 0 )
    return 0;
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( v2 > *(_DWORD *)(a1 + 4) - (int)v4 )
  {
    result = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 12) = &v4[v2];
    if ( (v5 & 4) != 0 && v4[v2] == 36 )
      *(_DWORD *)(a1 + 12) = &v4[v2 + 1];
    if ( v2 <= 9 || memcmp(v4, "_GLOBAL_", 8u) )
      goto LABEL_6;
    v7 = v4[8];
    v8 = v7 == 95;
    if ( v7 != 95 )
      v8 = v7 == 46;
    v9 = v8;
    if ( v7 == 36 )
      v9 |= 1u;
    if ( v9 && v4[9] == 78 )
    {
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 44) + 22 - v3;
      result = sub_314104((_DWORD *)a1, (int)"(anonymous namespace)", 21);
    }
    else
    {
LABEL_6:
      result = sub_314104((_DWORD *)a1, (int)v4, v3);
    }
  }
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
