int __fastcall sub_A11D4(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r5
  __int64 v5; // r6
  __int64 v6; // r0
  int v7; // r4
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // [sp+Ch] [bp-8h] BYREF

  v14 = a1;
  v1 = sub_26BC70(a1);
  v2 = sub_A0870(v1);
  if ( sub_A0AB8(v2) )
  {
    v3 = sub_A0F5C(v2);
    v4 = sub_A0C08(v3);
    if ( v4 )
    {
      if ( **(_BYTE **)(v2 + 24) == 1 )
        v5 = sub_26EB1C(v14);
      else
        v5 = (unsigned int)((int (__fastcall *)(int))loc_26C09C)(v14);
      v6 = sub_1700C0(v4);
      return sub_26DAF4(
               v6,
               HIDWORD(v6),
               v5 - *(_DWORD *)(v4 + 20),
               (v5 - (unsigned __int64)*(unsigned int *)(v4 + 20)) >> 32);
    }
LABEL_13:
    sub_946E0("Bad GNAT array descriptor");
  }
  v7 = sub_A0B30(v2);
  if ( !v7 )
    return v7;
  v7 = sub_2624C8(&v14, 0, "P_BOUNDS", 0, "Bad GNAT array descriptor");
  v9 = sub_26BC70(v7);
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_DWORD *)(v9 + 24);
  if ( *(_BYTE *)v10 != 1 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v10 + 20);
  if ( (*(_BYTE *)(*(_DWORD *)(v11 + 24) + 1) & 4) == 0 )
    return v7;
  v12 = sub_A0870(v11);
  v13 = sub_1700C0(v12);
  return sub_2647C8(v13, v7);
}
