int __fastcall sub_125648(int a1, int a2, int *a3)
{
  int v6; // r8
  int v7; // r7
  int v8; // r2
  __int64 v9; // r0
  char v10; // r1
  char v11; // r2
  int v13; // [sp+10h] [bp-10h] BYREF
  int v14; // [sp+14h] [bp-Ch] BYREF
  __int64 v15; // [sp+18h] [bp-8h] BYREF

  v6 = *a3;
  v7 = *(_DWORD *)(a2 + 24);
  if ( dword_46D448 )
    v8 = sub_21B3C4(a2);
  else
    v8 = *(_DWORD *)a2;
  LODWORD(v9) = ((int (__fastcall *)(int, int, int, int, int *, __int64 *, int *, int *))loc_12526C)(
                  a1,
                  v7 + 20,
                  v8,
                  v6 + 48,
                  a3,
                  &v15,
                  &v13,
                  &v14);
  if ( v14 )
  {
    v10 = *(_BYTE *)(a2 + 32);
    *(_DWORD *)(a2 + 36) = v14;
    *(_BYTE *)(a2 + 32) = v10 & 7 | (8 * (dword_48730C & 0x1F));
  }
  else if ( v13 )
  {
    v11 = *(_BYTE *)(a2 + 32);
    *(_DWORD *)(a2 + 8) = v13;
    *(_BYTE *)(a2 + 32) = v11 & 7 | 0x58;
  }
  else
  {
    v9 = v15;
    *(_BYTE *)(a2 + 32) = *(_BYTE *)(a2 + 32) & 7 | 8;
    *(_QWORD *)(a2 + 8) = v9;
  }
  return v9;
}
