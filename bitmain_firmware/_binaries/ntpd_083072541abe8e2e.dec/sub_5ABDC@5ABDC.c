__int16 *__fastcall sub_5ABDC(int a1, int a2)
{
  __int16 *result; // r0
  int v3; // r1
  bool v4; // zf
  _DWORD *v5; // r2
  int v6; // lr
  int v7; // r1

  result = (__int16 *)a2;
  v3 = *(_DWORD *)(a2 + 76);
  if ( v3 )
  {
    if ( v3 == 2 )
      return result;
    goto LABEL_8;
  }
  v4 = sys_peer == 0;
  if ( sys_peer )
    v4 = sys_peer == (_DWORD)result;
  if ( v4 )
  {
LABEL_8:
    v5 = (_DWORD *)*((_DWORD *)result + 21);
    v6 = *v5;
    v7 = *(_DWORD *)(*v5 + 4);
    ++v5[194];
    if ( !v7 )
    {
      *(_DWORD *)(v6 + 12) = 0;
      return sub_5A7D8(result, 0);
    }
  }
  return result;
}
