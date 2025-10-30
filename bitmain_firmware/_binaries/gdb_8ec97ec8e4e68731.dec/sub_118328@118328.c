int __fastcall sub_118328(int a1, __int64 a2, int a3, int a4, int a5)
{
  int v8; // r5
  int v9; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r4
  signed __int64 v15; // [sp+10h] [bp-40h] BYREF
  _DWORD v16[3]; // [sp+18h] [bp-38h] BYREF
  struct obstack obstack; // [sp+24h] [bp-2Ch] BYREF

  sub_1320E4(v16, a1, a3, sub_115254, a4);
  v8 = v16[0];
  v9 = sub_13499C(a1, a3);
  if ( !v9 )
    sub_15D54();
  if ( v8 )
    return sub_117684(v9, a4, v8, v16[1], v16[2], *(_DWORD *)(*(_DWORD *)(a5 + 24) + 20), a2);
  obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, sub_115008);
  v11 = sub_134604(a1, a3, &obstack, &v15);
  if ( v11 )
  {
    if ( a2 < 0 || (v12 = *(_DWORD *)(*(_DWORD *)(a5 + 24) + 20), v15 < a2 + *(unsigned int *)(v12 + 20)) )
      sub_15D54();
    v13 = sub_26DCD8(v12, v11 + a2);
  }
  else
  {
    v13 = sub_26BC1C(*(_DWORD *)(*(_DWORD *)(a5 + 24) + 20));
  }
  v14 = v13;
  obstack_free(&obstack, 0);
  return v14;
}
