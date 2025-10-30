int __fastcall sub_260DE4(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r5
  __int64 v6; // r0
  int v7; // r10
  int v8; // r1
  __int64 v9; // kr00_8
  int v10; // r11
  void *v11; // r8
  const void *v12; // r0
  __int64 v13; // r2
  __int64 v14; // [sp+8h] [bp-14h] BYREF
  __int64 v15; // [sp+10h] [bp-Ch] BYREF

  v2 = (_DWORD *)sub_171258(a1);
  if ( sub_1736DC(v2) || sub_173720(v2) )
  {
    v4 = sub_26DAF4(a1, v3, 1, 0);
  }
  else
  {
    HIDWORD(v6) = v2[6];
    if ( (*(_DWORD *)HIDWORD(v6) & 0x100FF) != 0x10002 )
      goto LABEL_13;
    v7 = sub_171258(*(_DWORD **)(HIDWORD(v6) + 20));
    if ( !sub_171B30((int)v2, &v14, &v15) )
      sub_946E0("Could not determine the vector bounds");
    v4 = sub_26BB80(a1);
    v8 = HIDWORD(v14);
    if ( (((unsigned __int64)(v15 - v14) >> 32) & 0x80000000) == 0LL )
    {
      v9 = 1;
      do
      {
        v10 = sub_260DE4(v7, v8);
        v11 = (void *)(sub_26E954(v4) + *(_DWORD *)(v7 + 20) * (v9 - 1));
        v12 = (const void *)sub_26E738(v10);
        memcpy(v11, v12, *(_DWORD *)(v7 + 20));
        v13 = v9;
        v8 = v14;
        ++v9;
      }
      while ( v15 - v14 >= v13 );
    }
  }
  if ( *(_DWORD *)nullsub_31(v4) )
  {
    v6 = sub_94700(
           (int)"valops.c",
           891,
           "%s: Assertion `%s' failed.",
           "value* value_one(type*)",
           "VALUE_LVAL (val) == not_lval");
LABEL_13:
    sub_946E0("Not a numeric type.", HIDWORD(v6));
  }
  return v4;
}
