int __fastcall sub_167DC8(int a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r4
  __int64 v5; // r6
  int v6; // r1

  v4 = *a2;
  v5 = a2[1];
  v6 = *(_DWORD *)(a1 + 44);
  if ( !v6 )
    v6 = 16;
  if ( !a3 )
    a3 = 2;
  if ( !a4 )
    a4 = 4;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 52) = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)sub_167E68 ^ v4;
  *(_DWORD *)(a1 + 44) = v6;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = v4 ^ loc_167E70;
  *(_QWORD *)(a1 + 16) = loc_167E78 ^ v5;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)sub_167E80 ^ v5;
  if ( v6 == 16 )
    *(_QWORD *)(a1 + 16) = v5 ^ *(_QWORD *)sub_167E88;
  return 1;
}
