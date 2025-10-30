int __fastcall sub_25F09C(int a1, int a2, unsigned int a3)
{
  _DWORD *v4; // r0
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r10
  int v10; // r0
  char *v11; // r3
  char *v12; // r2
  size_t v13; // r5
  int v14; // r10
  __int64 v15; // r6
  int v16; // r4
  int v17; // r0
  int v18; // r11
  void *v19; // r4
  const void *v20; // r0
  int v22; // [sp+4h] [bp-38h]
  int v26; // [sp+14h] [bp-28h]
  __int64 v27; // [sp+18h] [bp-24h] BYREF
  __int64 v28; // [sp+20h] [bp-1Ch] BYREF
  __int64 v29; // [sp+28h] [bp-14h] BYREF
  __int64 v30; // [sp+30h] [bp-Ch] BYREF

  v4 = (_DWORD *)sub_26BC70(a1);
  v5 = sub_171258(v4);
  v6 = (_DWORD *)sub_26BC70(a2);
  v7 = sub_171258(v6);
  if ( (**(_DWORD **)(v5 + 24) & 0x100FF) != 0x10002 || (v8 = v7, (**(_DWORD **)(v7 + 24) & 0x100FF) != 0x10002) )
    sub_946E0("Vector operations are only supported among vectors");
  if ( !sub_171B30(v5, &v27, &v28) || !sub_171B30(v8, &v29, &v30) )
    sub_946E0("Could not determine the vector bounds");
  v9 = sub_171258(*(_DWORD **)(*(_DWORD *)(v5 + 24) + 20));
  v10 = sub_171258(*(_DWORD **)(*(_DWORD *)(v8 + 24) + 20));
  v11 = *(char **)(v9 + 24);
  v12 = *(char **)(v10 + 24);
  v13 = *(_DWORD *)(v9 + 20);
  if ( *v11 != *v12
    || v13 != *(_DWORD *)(v10 + 20)
    || (((unsigned __int8)v11[1] ^ (unsigned __int8)v12[1]) & 1) != 0
    || v27 != v29
    || v28 != v30 )
  {
    sub_946E0("Cannot perform operation on vectors with different types");
  }
  v22 = sub_26BB80(v5);
  v26 = sub_26C1E0(v22);
  if ( (((unsigned __int64)(v28 - v27) >> 32) & 0x80000000) == 0LL )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = sub_25CE0C(a1, v15);
      v17 = sub_25CE0C(a2, v15);
      v18 = sub_25E4EC(v16, v17, a3);
      v19 = (void *)(sub_26E954(v22) + v14);
      v20 = (const void *)sub_26E738(v18);
      v14 += v13;
      memcpy(v19, v20, v13);
      ++v15;
    }
    while ( v28 - v27 >= v15 );
  }
  sub_26C300(v26);
  return v22;
}
