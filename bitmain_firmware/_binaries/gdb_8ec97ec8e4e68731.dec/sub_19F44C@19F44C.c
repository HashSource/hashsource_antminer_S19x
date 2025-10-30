int __fastcall sub_19F44C(int a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v9; // r3
  int v10; // r12
  int v11; // r3

  v3 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v3 != 3 )
    sub_946E0("expecting long_set");
  v4 = *(__int16 *)(v3 + 4);
  v5 = *(_WORD *)(v3 + 2) & 0x380;
  v6 = v5 == 128;
  if ( v5 == 128 )
    v7 = *(_DWORD *)(v3 + 28);
  else
    v7 = 18988;
  if ( !v6 )
    HIWORD(v7) = 59;
  if ( !*(_WORD *)(v3 + 4) )
    return 0;
  v9 = *(_DWORD *)(v3 + 24);
  v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 24 * *(__int16 *)v7 + 12) + 24) + 24)
                                          + 12)
                              + 24)
                  + 24);
  v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 24 * v4 - 12) + 24) + 24) + 12) + 24)
                  + 24);
  *a2 = *(_QWORD *)(v10 + 8);
  *a3 = *(_QWORD *)(v11 + 24);
  return 1;
}
