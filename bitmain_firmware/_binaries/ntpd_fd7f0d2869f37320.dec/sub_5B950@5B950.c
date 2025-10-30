__int16 *__fastcall sub_5B950(int a1, int a2)
{
  __int16 *result; // r0
  int v3; // r1
  int *v4; // r12
  int v5; // r4
  bool v6; // zf
  int v7; // r1

  result = (__int16 *)a2;
  v3 = *(_DWORD *)(a2 + 76);
  v4 = (int *)*((_DWORD *)result + 21);
  v5 = *v4;
  if ( v3 )
  {
    if ( v3 == 2 )
      return result;
    goto LABEL_8;
  }
  v6 = result == (__int16 *)sys_peer;
  if ( result != (__int16 *)sys_peer )
    v6 = sys_peer == 0;
  if ( v6 )
  {
LABEL_8:
    v7 = *(_DWORD *)(v5 + 4);
    ++v4[194];
    if ( !v7 )
    {
      *(_DWORD *)(v5 + 12) = 0;
      return sub_5B548(result, 0);
    }
  }
  return result;
}
