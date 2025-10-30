int __fastcall sub_25DFAC(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r3
  int v9; // r3
  unsigned __int8 v10; // r2
  bool v11; // zf
  char v12; // r3
  int v13; // r3
  int v14; // r6
  int v15; // r0
  int result; // r0

  v4 = (_DWORD *)sub_26BC70(a2);
  v5 = sub_171258(v4);
  v6 = (_DWORD *)sub_26BC70(a1);
  v7 = sub_171258(v6);
  v8 = *(_DWORD *)(v7 + 24);
  if ( *(_BYTE *)v8 == 12 )
    v7 = *(_DWORD *)(v8 + 20);
  if ( **(_BYTE **)(v5 + 24) != 11 )
    sub_946E0("Second argument of 'IN' has wrong type");
  v9 = **(char **)(v7 + 24);
  v10 = v9 - 20;
  v11 = v9 == 8;
  if ( v9 != 8 )
    v11 = v9 == 5;
  v12 = !v11;
  if ( v10 > 1u )
    v13 = v12 & 1;
  else
    v13 = 0;
  if ( v13 )
    sub_946E0("First argument of 'IN' has wrong type");
  v14 = sub_26E978(a2);
  v15 = sub_26EB1C(a1);
  result = sub_25DEE0(v5, v14, v15);
  if ( result < 0 )
    sub_946E0("First argument of 'IN' not in range");
  return result;
}
