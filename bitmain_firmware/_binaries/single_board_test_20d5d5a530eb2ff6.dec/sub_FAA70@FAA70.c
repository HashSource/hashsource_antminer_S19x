int __fastcall sub_FAA70(int a1)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r6
  char v6; // r0
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // [sp+Ch] [bp-1Ch] BYREF
  int v11; // [sp+10h] [bp-18h] BYREF
  int v12; // [sp+14h] [bp-14h] BYREF

  if ( **(_DWORD **)a1 != 912 )
    return 0;
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
  if ( !*(_DWORD *)(v2 + 52) )
    return 1;
  v3 = *(_DWORD **)(a1 + 20);
  if ( sub_F6D84(*(_DWORD *)(v2 + 52), &v10, &v11, &v12) )
  {
    v4 = sub_F7ED8(v2);
    v5 = v4 - sub_D8C78(v10);
    v6 = sub_F7ED0(v2);
    v7 = v12;
    if ( (v6 & 7) == 1 )
      --v5;
    if ( v5 >= v12 )
    {
      v8 = v10;
      v9 = v11;
      v3[9] = v12;
      v3[8] = v7;
      v3[6] = v8;
      v3[7] = v9;
      return 1;
    }
    sub_D0048(4, 165, 150, (int)"crypto/rsa/rsa_pmeth.c", 821);
  }
  return 0;
}
