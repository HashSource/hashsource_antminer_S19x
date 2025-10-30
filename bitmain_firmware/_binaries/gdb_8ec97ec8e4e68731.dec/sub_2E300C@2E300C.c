_DWORD *__fastcall sub_2E300C(int a1, int a2)
{
  _DWORD *result; // r0
  int v3; // r12
  _DWORD *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r1

  result = *(_DWORD **)(a1 + 100);
  v3 = *(_DWORD *)(a2 + 28);
  if ( result )
  {
    while ( (result[5] & 0x400) == 0 )
    {
      result = (_DWORD *)result[3];
      if ( !result )
        goto LABEL_11;
    }
    v4 = result;
    v5 = 0;
    do
    {
      v6 = v4[16];
      v4 = (_DWORD *)v4[3];
      if ( v5 < v6 )
        v5 = v6;
    }
    while ( v4 && (v4[5] & 0x400) != 0 );
    *(_DWORD *)(v3 + 204) = result;
    result[16] = v5;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(v3 + 204) = result;
  }
  return result;
}
