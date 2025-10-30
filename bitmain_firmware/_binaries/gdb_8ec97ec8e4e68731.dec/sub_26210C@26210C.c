int __fastcall sub_26210C(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  int v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int result; // r0
  int v10; // r8
  int v11; // r0
  int (__fastcall *v12)(int); // r3

  v1 = sub_26EAAC(a1);
  v2 = (_DWORD *)sub_26BC70(v1);
  v3 = sub_171258(v2);
  if ( *(_DWORD *)nullsub_31(v1) != 6
    || (v12 = *(int (__fastcall **)(int))(((int (__fastcall *)(int))loc_26C000)(v1) + 8)) == 0
    || (result = v12(v1)) == 0 )
  {
    if ( **(_BYTE **)(v3 + 24) != 1 )
      sub_946E0("Attempt to take contents of a non-pointer value.");
    v4 = (_DWORD *)sub_26BD30(v1);
    v5 = *(_DWORD **)(*(_DWORD *)(sub_171258(v4) + 24) + 20);
    if ( **(_BYTE **)(sub_171258(v5) + 24) == 7 || **(_BYTE **)(sub_171258(v5) + 24) == 15 )
    {
      v6 = sub_17D408(v1, 0);
      v7 = sub_25F714(v5, v6, 1);
    }
    else
    {
      v10 = sub_26EBA8(v1);
      v11 = sub_26BFF0(v1);
      v7 = sub_25F714(v5, v10 - v11, 1);
    }
    v8 = sub_26BC70(v7);
    return sub_26DF3C(v7, v8, v3, v1);
  }
  return result;
}
