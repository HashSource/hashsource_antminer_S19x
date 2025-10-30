int __fastcall sub_A31E8(int a1)
{
  const char *v2; // r4
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r1
  __int64 v7; // r0
  int v8; // r4
  int v9; // r0
  __int64 v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // [sp+8h] [bp-20h] BYREF
  int v15; // [sp+Ch] [bp-1Ch]
  int v16; // [sp+10h] [bp-18h] BYREF
  int v17; // [sp+14h] [bp-14h]
  int v18; // [sp+18h] [bp-10h] BYREF
  int v19; // [sp+1Ch] [bp-Ch]
  int v20; // [sp+20h] [bp-8h] BYREF
  int v21; // [sp+24h] [bp-4h]

  v2 = (const char *)sub_9AAB0(a1);
  v3 = sub_170040(a1);
  v4 = *(_DWORD *)(sub_1780B4(v3) + 48);
  v5 = sscanf(v2, "_%lld_%lld_%lld_%lld", &v14, &v16, &v18, &v20);
  if ( v5 <= 1 )
    return sub_26DAF4(v4, v6, 1, 0);
  if ( v5 == 4 )
  {
    v11 = sub_26DAF4(v4, v6, v18, v19);
    v12 = v11;
    v13 = sub_26DAF4(v4, HIDWORD(v11), v20, v21);
    return sub_25E4EC(v12, v13, 4);
  }
  else
  {
    v7 = sub_26DAF4(v4, v6, v14, v15);
    v8 = v7;
    v9 = sub_26DAF4(v4, HIDWORD(v7), v16, v17);
    return sub_25E4EC(v8, v9, 4);
  }
}
