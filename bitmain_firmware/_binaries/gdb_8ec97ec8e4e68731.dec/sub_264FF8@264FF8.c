int __fastcall sub_264FF8(_DWORD *a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r5
  _DWORD *v7; // r8
  int v8; // r7
  int v9; // r0
  int v10; // r3
  int v11; // r2
  _BOOL4 v12; // r0
  bool v13; // zf
  int result; // r0
  int v15; // r0
  int v16; // r1
  __int64 v19; // r0

  v4 = (_DWORD *)sub_171258(a1);
  v5 = sub_26EAAC(a2);
  if ( (unsigned int)*(unsigned __int8 *)v4[6] - 18 <= 1 )
  {
    v6 = sub_2616BC(v5);
    v8 = 1;
    v7 = sub_1700C0(*(_DWORD **)(a1[6] + 20));
    v4 = sub_1700C0(v4);
  }
  else
  {
    v6 = v5;
    v7 = a1;
    v8 = 0;
  }
  v9 = sub_26BC70(v6);
  v10 = *(char *)v4[6];
  v11 = **(char **)(v9 + 24);
  v12 = v10 == 1;
  if ( !v12 || v11 != 8 )
  {
    v13 = v11 == 1;
    if ( v11 == 1 )
      v13 = v10 == 8;
    if ( !v13
      && (v11 != 8 || v10 != 16)
      && (v11 != 16 || v10 != 8)
      && (v10 != 17 || v11 != 8)
      && (v10 != 8 || v11 != 17) )
    {
      if ( v10 != v11 || (LODWORD(v19) = v12 || v10 == 16, HIDWORD(v19) = v11 == 17, !v19) )
        sub_946E0("Invalid reinterpret_cast");
    }
  }
  result = sub_2647C8(v7, v6);
  if ( v8 )
  {
    v15 = sub_26210C(result);
    v16 = ((int (__fastcall *)(int, _DWORD))loc_2618D4)(v15, *(char *)a1[6]);
    return sub_2647C8(a1, v16);
  }
  return result;
}
