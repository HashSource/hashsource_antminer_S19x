int __fastcall sub_F14F0(int a1, int a2)
{
  int v6; // r7
  int v7; // r4
  int v8; // r4
  unsigned int v9; // r0

  if ( sub_EAC84(*(_DWORD *)(a1 + 16)) != (char *)25 )
  {
    sub_D0048(33, 126, 113, (int)"crypto/pkcs7/pk7_lib.c", 389);
    return 1;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4);
  v7 = sub_B2408();
  *(_DWORD *)(v6 + 4) = v7;
  if ( !v7 )
  {
    sub_D0048(33, 126, 65, (int)"crypto/pkcs7/pk7_lib.c", 381);
    return 0;
  }
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4);
  **(_DWORD **)(v8 + 4) = 5;
  v9 = sub_D8C70(a2);
  *(_DWORD *)v8 = sub_EAA20(v9);
  return 1;
}
