int __fastcall ps_pglobal_lookup(_DWORD *a1, int a2, char *a3, _DWORD *a4)
{
  int v6; // r0
  int v7; // r5
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r4
  int v12; // r4
  __int64 v14; // r0
  int v15; // r0
  _DWORD v16[3]; // [sp+0h] [bp-Ch] BYREF

  v6 = sub_183A88(*a1, a1[1], a1[2]);
  v7 = dword_487D2C;
  ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v6 + 36));
  sub_1B141C((int)v16, a3);
  if ( v16[0] )
  {
    v8 = *(__int16 *)(v16[0] + 22);
    v9 = *(_DWORD *)(v16[0] + 8);
    if ( v8 == -1 )
    {
      v14 = sub_94700("proc-service.c", 106, "Section index is uninitialized", v9);
      v15 = ((int (__fastcall *)(int, _DWORD))loc_1CD290)(v7, HIDWORD(v14));
      sub_338FFC(v15);
    }
    v10 = *(_DWORD *)(dword_487D2C + 8);
    v11 = v9 + *(_DWORD *)(*(_DWORD *)(v16[1] + 144) + 4 * v8);
    if ( v10 )
      sub_2A78D4(v10);
    *a4 = v11;
    v12 = 0;
  }
  else
  {
    v12 = 5;
  }
  ((void (__fastcall *)(int))loc_1CD290)(v7);
  return v12;
}
