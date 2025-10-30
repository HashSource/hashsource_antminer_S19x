int __fastcall sub_131F78(int *a1, int a2)
{
  int v2; // r6
  int v4; // r5
  int v5; // r0
  int *v6; // r0
  int *v7; // r5
  int v9; // r8
  int v10; // r0
  int v11; // r3
  char v12[32]; // [sp+10h] [bp-40h] BYREF
  __int64 v13; // [sp+30h] [bp-20h]

  v2 = *a1;
  v4 = dword_4872D8;
  v5 = *(_DWORD *)(dword_4872D8 + 372);
  if ( !v5 )
  {
    v10 = sub_323980(41, sub_11C358, sub_11C360, 0, a2 + 48, sub_25AEEC, nullsub_44);
    v11 = dword_4872D8;
    *(_DWORD *)(v4 + 372) = v10;
    v5 = *(_DWORD *)(v11 + 372);
  }
  v13 = *(_QWORD *)(v2 + 8);
  v6 = (int *)sub_324030(v5, v12, 1);
  v7 = v6;
  if ( !*v6 )
  {
    v9 = ((int (__fastcall *)(_DWORD, _DWORD, int *))loc_11D294)(*(_DWORD *)(v2 + 8), *(_DWORD *)(v2 + 12), v6);
    sub_11C5E0(a2, v9, v2);
    *v7 = v9;
    ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, void *, _DWORD))loc_12DAAC)(v9, 0, 0, 0, &loc_137EE8, 0);
  }
  return 1;
}
