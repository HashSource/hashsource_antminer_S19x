int __fastcall sub_1BBE4C(int *a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r0
  int v8; // r5
  _DWORD *v9; // r0
  int v10; // r8
  int v11; // r0
  int *v12; // r1
  bool v13; // zf
  int v14; // r7
  int v15; // r4
  char *v16; // r3
  char *v17; // r1
  int v18; // r2
  int v19; // r0
  int v20; // r8
  int v21; // r1
  __int64 v22; // r4
  __int64 v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r6
  int v27; // r0
  int v28; // r1
  __int64 v32; // [sp+20h] [bp-24h] BYREF
  __int64 v33; // [sp+28h] [bp-1Ch] BYREF
  __int64 v34; // [sp+30h] [bp-14h] BYREF
  __int64 v35; // [sp+38h] [bp-Ch] BYREF

  v7 = (_DWORD *)sub_26BC70(a2);
  v8 = sub_171258(v7);
  v9 = (_DWORD *)sub_26BC70(a3);
  v10 = sub_171258(v9);
  v11 = *(_DWORD *)(v8 + 24);
  v12 = (int *)(*(_DWORD *)v11 & 0x100FF);
  v13 = v12 == (int *)((char *)&dword_10000 + 2);
  if ( v12 == (int *)((char *)&dword_10000 + 2) )
    v13 = (**(_DWORD **)(v10 + 24) & 0x100FF) == (_DWORD)&dword_10000 + 2;
  if ( !v13 )
    sub_946E0("Vector operations are not supported on scalar types");
  v14 = sub_171258(*(_DWORD **)(v11 + 20));
  v15 = sub_171258(*(_DWORD **)(*(_DWORD *)(v10 + 24) + 20));
  if ( !sub_171B30(v8, &v32, &v34) || !sub_171B30(v10, &v33, &v35) )
    sub_946E0("Could not determine the vector bounds");
  v16 = *(char **)(v14 + 24);
  v17 = *(char **)(v15 + 24);
  if ( *v16 != *v17
    || (v18 = *(_DWORD *)(v14 + 20), v18 != *(_DWORD *)(v15 + 20))
    || (((unsigned __int8)v16[1] ^ (unsigned __int8)v17[1]) & 1) != 0
    || v32 != v33
    || v34 != v35 )
  {
    sub_946E0("Cannot perform operation on vectors with different types");
  }
  v19 = sub_1BACD4(*a1, 8, v18, 0, v34 + 1 - v32);
  v20 = sub_26BB80(v19);
  v21 = HIDWORD(v32);
  if ( (((unsigned __int64)(v34 - v32) >> 32) & 0x80000000) == 0LL )
  {
    v22 = 0;
    do
    {
      v23 = sub_25CE0C(a2, v21, v22, HIDWORD(v22));
      v24 = v23;
      v25 = sub_25CE0C(a3, HIDWORD(v23), v22, HIDWORD(v22));
      v26 = sub_1BAE38(v24, v25, a4);
      v27 = sub_26E954(v20);
      v28 = v26;
      if ( v26 )
        v28 = 1;
      memset((void *)(v27 + *(_DWORD *)(v14 + 20) * v22++), -v28, *(_DWORD *)(v14 + 20));
      v21 = HIDWORD(v32);
    }
    while ( v34 - v32 >= v22 );
  }
  return v20;
}
