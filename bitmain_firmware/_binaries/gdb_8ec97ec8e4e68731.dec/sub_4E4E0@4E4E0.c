int __fastcall sub_4E4E0(int a1)
{
  int v2; // r0
  _BYTE *v3; // r4
  int i; // r5
  int v5; // r1
  _BYTE v7[12]; // [sp+8Ch] [bp-98h] BYREF
  _BYTE v8[4]; // [sp+10Ch] [bp-18h] BYREF
  _BYTE v9[4]; // [sp+110h] [bp-14h] BYREF
  _BYTE v10[4]; // [sp+114h] [bp-10h] BYREF
  _BYTE v11[4]; // [sp+118h] [bp-Ch] BYREF
  _BYTE v12[4]; // [sp+11Ch] [bp-8h] BYREF
  _BYTE v13[4]; // [sp+120h] [bp-4h] BYREF

  ((void (__fastcall *)(_BYTE *, int))loc_1DD598)(v7, a1);
  v2 = sub_98F68(v7);
  if ( ptrace(PTRACE_GETFPXREGS, v2, 0, v7) < 0 )
    sub_258B04("Unable to fetch WMMX registers.");
  v3 = v7;
  for ( i = 26; i != 42; ++i )
  {
    v5 = i;
    ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, v5, v3);
    v3 += 8;
  }
  ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, 44, v8);
  ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, 45, v9);
  ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, 50, v10);
  ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, 51, v11);
  ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, 52, v12);
  return ((int (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a1, 53, v13);
}
