int __fastcall sub_1A6790(int a1)
{
  char v3; // r3
  const char *v4; // r0
  const char *v5; // r6
  __int64 v6; // kr00_8
  __int64 v7; // kr08_8
  __int64 v8; // kr10_8
  double v9; // d8
  double v10; // r0
  __int64 v11; // [sp+10h] [bp-2Ch] BYREF
  __int64 v12; // [sp+18h] [bp-24h] BYREF
  __int64 v13; // [sp+20h] [bp-1Ch] BYREF
  int v14; // [sp+2Ch] [bp-10h] BYREF
  int v15; // [sp+30h] [bp-Ch] BYREF
  int v16; // [sp+34h] [bp-8h] BYREF

  if ( !*(_BYTE *)a1 )
  {
    v3 = *(_BYTE *)(a1 + 1);
    if ( (v3 & 1) != 0 && dword_487A94 )
      goto LABEL_17;
    goto LABEL_8;
  }
  if ( dword_487A94 )
  {
    v3 = *(_BYTE *)(a1 + 1);
    if ( (v3 & 1) != 0 )
    {
LABEL_17:
      v5 = "Command execution time: %.6f (cpu), %.6f (wall)\n";
      sub_99784(&v13);
      v6 = v13 - *(_QWORD *)(a1 + 8);
      sub_33B25C(&v12);
      v7 = v12 - *(_QWORD *)(a1 + 16);
      sub_2592B4(&v11);
      v8 = v7 - v11;
      if ( !*(_BYTE *)a1 )
        v5 = "Startup time: %.6f (cpu), %.6f (wall)\n";
      v9 = sub_347C5C(v6, HIDWORD(v6)) / 1000000.0;
      v10 = sub_347C5C(v8, HIDWORD(v8));
      sub_259858(v5, HIDWORD(v10), v9, v10 / 1000000000.0);
      goto LABEL_20;
    }
LABEL_8:
    if ( (v3 & 2) == 0 )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( !dword_487A98 && !dword_487A9C )
    return a1;
LABEL_20:
  v3 = *(_BYTE *)(a1 + 1);
  if ( (v3 & 2) == 0 )
    goto LABEL_9;
LABEL_12:
  if ( dword_487A98 )
  {
    sbrk(0);
    v4 = "Space used: %ld (%s%ld for this command)\n";
    if ( !*(_BYTE *)a1 )
      v4 = "Space used: %ld (%s%ld during startup)\n";
    sub_259858(v4);
    v3 = *(_BYTE *)(a1 + 1);
  }
LABEL_9:
  if ( (v3 & 4) == 0 || !dword_487A9C )
    return a1;
  sub_1A5618(&v14, &v15, &v16);
  sub_259858(
    "#symtabs: %d (+%d), #compunits: %d (+%d), #blocks: %d (+%d)\n",
    v14,
    v14 - *(_DWORD *)(a1 + 28),
    v15,
    v15 - *(_DWORD *)(a1 + 32),
    v16,
    v16 - *(_DWORD *)(a1 + 36));
  return a1;
}
