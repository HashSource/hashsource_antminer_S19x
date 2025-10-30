int __fastcall sub_263504(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int v11; // r0
  __int64 v12; // r0
  __int64 v13; // r2
  unsigned int v14; // r6
  __int64 v15; // r0
  int v16; // r6
  int v17; // [sp+0h] [bp-14h] BYREF
  int v18; // [sp+4h] [bp-10h] BYREF
  __int64 v19; // [sp+8h] [bp-Ch] BYREF

  v5 = a2;
  v17 = 0;
  v18 = 0;
  v19 = -1;
  if ( a2 )
  {
    v17 = a3;
    v19 = a4;
    v18 = a5;
  }
  else
  {
    v5 = (_DWORD *)sub_FC6D8(a1, (int)&v17, (int)&v19, (int)&v18);
    if ( !v5 )
      return a1;
  }
  if ( v5 == (_DWORD *)sub_26BD30(a1) )
    return a1;
  if ( !v17 )
  {
LABEL_5:
    if ( *(_DWORD *)nullsub_31(a1) != 1 )
    {
      sub_946B0(
        "Couldn't retrieve complete object of RTTI type %s; object may be in register(s).",
        *(const char **)(v5[6] + 8));
      return a1;
    }
    v9 = ((int (__fastcall *)(int))loc_26C09C)(a1);
    v10 = v9 - v19;
    if ( !v18 )
      v10 += sub_26BFE0(a1);
    v8 = sub_25F714(v5, v10, 1);
    v11 = sub_26BC70(a1);
    sub_26BC78(v8, v11);
    if ( v18 )
    {
      v12 = sub_26BFE0(a1);
      v13 = v12 + v19;
    }
    else
    {
      v13 = v19;
    }
    sub_26BFE8(v8, HIDWORD(v12), v13, HIDWORD(v13));
    return v8;
  }
  v14 = v5[5];
  v15 = sub_26BD30(a1);
  if ( v14 < *(_DWORD *)(v15 + 20) )
    return a1;
  if ( !v17 )
    goto LABEL_5;
  v16 = sub_26C4E0(a1, HIDWORD(v15));
  sub_26D370(v16, v5);
  return v16;
}
