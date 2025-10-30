int __fastcall sub_3A94(int a1)
{
  unsigned int v1; // r3
  _BOOL4 v2; // r1
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // [sp+4h] [bp-4h]

  v1 = *(unsigned __int16 *)(a1 + 74);
  v2 = *(unsigned __int16 *)(a1 + 68) > v1;
  if ( v1 > 7 )
    v2 = 0;
  if ( v2 )
  {
    v4 = (_DWORD *)(a1 + 4 * v1);
    v5 = (_DWORD *)(a1 + 8 * v1 + 108);
    v4[19] = 0;
    v1 = (unsigned __int16)(v1 + 1);
    *v5 = 0;
    v5[1] = 0;
    v4[43] = 0;
    v4[51] = 0;
    *(_WORD *)(a1 + 74) = v1;
  }
  if ( sys_samples > (int)v1 )
    return sub_384C(a1);
  *(_DWORD *)(a1 + 60) = 0;
  ++complete_servers;
  return v6;
}
