int __fastcall sub_40C94(int a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  bool v4; // cf
  _DWORD *v5; // r3
  unsigned int v6; // r3
  int v7; // r3

  pthread_mutex_lock(&stru_5FE898);
  v2 = (_DWORD *)dword_5FE790;
  v3 = *(_DWORD *)dword_5FE790;
  v4 = *(_DWORD *)dword_5FE790 >= 0x1FEu;
  if ( *(_DWORD *)dword_5FE790 < 0x1FEu )
    ++v3;
  v5 = (_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)dword_5FE790);
  v5[4] = *(_DWORD *)(a1 + 4);
  v5[7] = *(_BYTE *)(a1 + 3) & 0x1F;
  v5[5] = *(unsigned __int8 *)(a1 + 2);
  v5[6] = *(unsigned __int8 *)(a1 + 1);
  v5[8] = *(_BYTE *)a1 & 0xF;
  if ( v4 )
    v5 = 0;
  else
    *v2 = v3;
  if ( v4 )
    *v2 = v5;
  v6 = *(_DWORD *)(dword_5FE790 + 8);
  if ( v6 > 0x1FE )
    v7 = 511;
  else
    v7 = v6 + 1;
  *(_DWORD *)(dword_5FE790 + 8) = v7;
  return j_pthread_mutex_unlock(&stru_5FE898);
}
