int __fastcall sub_1E13D4(int a1, unsigned __int8 *a2, unsigned __int8 **a3)
{
  int v3; // r3
  unsigned __int8 *v7; // r6
  _BOOL4 v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r0
  __int64 v13; // kr00_8
  unsigned __int8 *v14; // r0
  unsigned __int8 *v15; // r0
  int v16; // [sp+0h] [bp-10h] BYREF
  int v17; // [sp+4h] [bp-Ch]
  unsigned int v18[2]; // [sp+8h] [bp-8h] BYREF

  v3 = *a2;
  v16 = 0;
  v17 = 0;
  v18[0] = 0;
  v18[1] = 0;
  if ( v3 == 112 )
  {
    v14 = sub_99188(a2 + 1, (unsigned int *)&v16);
    if ( *v14 != 46 )
      sub_946E0("invalid remote ptid: %s", (const char *)a2);
    v15 = sub_99188(v14 + 1, v18);
    if ( a3 )
      *a3 = v15;
    sub_98F48((_DWORD *)a1, v16, v18[0], 0);
    return a1;
  }
  else
  {
    v7 = sub_99188(a2, v18);
    if ( a2 == v7 )
    {
      if ( a3 )
        *a3 = a2;
      v13 = qword_47584C;
      *(_DWORD *)a1 = dword_475848;
      *(_QWORD *)(a1 + 4) = v13;
      return a1;
    }
    else
    {
      v8 = sub_98F78(&qword_4878EC, &dword_475848);
      v9 = !v8;
      if ( v8 )
        v10 = (int)&unk_488C70;
      else
        v10 = 30956;
      if ( v9 )
        HIWORD(v10) = 72;
      v11 = ps_getpid_0(v10);
      if ( a3 )
        *a3 = v7;
      v16 = v11;
      v17 = v11 >> 31;
      sub_98F48((_DWORD *)a1, v11, v18[0], 0);
      return a1;
    }
  }
}
