int __fastcall sub_247A80(int a1)
{
  __int64 v1; // r0
  __int64 v2; // r0
  __int64 v3; // r0
  int v5; // r6
  int v6; // r5
  int *v7; // r4
  __int64 v8; // r0
  int v9; // r0
  __int64 v10; // r0
  int v11; // r4
  int v12; // r0
  __int64 v13; // r0
  unsigned int v14; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v15[4]; // [sp+8h] [bp-28h] BYREF
  int v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+18h] [bp-18h]

  if ( !a1 || !sub_15E124(a1, (int *)&v14) )
  {
    v1 = sub_26CBF4("trace_line");
    sub_26CC80(v1, HIDWORD(v1), -1, -1);
    v2 = sub_26CBF4("trace_func");
    sub_26CC14(v2, HIDWORD(v2));
LABEL_4:
    v3 = sub_26CBF4("trace_file");
    return sub_26CC14(v3, HIDWORD(v3));
  }
  sub_21DEAC((int)v15, v14);
  v5 = v17;
  v6 = v16;
  v7 = sub_C3460(v14);
  v8 = sub_26CBF4("trace_line");
  sub_26CC80(v8, HIDWORD(v8), v5, v5 >> 31);
  if ( v7 && *v7 )
  {
    v9 = sub_26CBF4("trace_func");
    sub_26CCAC(v9, *v7);
  }
  else
  {
    v13 = sub_26CBF4("trace_func");
    sub_26CC14(v13, HIDWORD(v13));
  }
  if ( !v6 )
    goto LABEL_4;
  v10 = sub_26CBF4("trace_file");
  v11 = v10;
  v12 = ((int (__fastcall *)(int, _DWORD))loc_2043D4)(v6, HIDWORD(v10));
  return sub_26CCAC(v11, v12);
}
