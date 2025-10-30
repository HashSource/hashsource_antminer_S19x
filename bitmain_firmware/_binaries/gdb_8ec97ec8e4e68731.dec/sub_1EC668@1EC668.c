void __fastcall sub_1EC668(int a1, unsigned int a2, unsigned int a3, int a4)
{
  _BOOL4 v5; // r7
  int v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r0
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // [sp+Ch] [bp-20h] BYREF
  unsigned __int64 v15; // [sp+10h] [bp-1Ch]
  _DWORD v16[4]; // [sp+1Ch] [bp-10h] BYREF

  v14 = a1;
  v15 = __PAIR64__(a3, a2);
  v5 = sub_232950(a1) != 0;
  if ( sub_23E644(v14, v15, HIDWORD(v15)) && sub_23F1C4(v14, v15, HIDWORD(v15)) )
    goto LABEL_5;
  if ( sub_23E644(v14, v15, HIDWORD(v15)) )
    return;
  v6 = ps_getpid_0((int)&v14);
  if ( sub_98FB8(&dword_4878EC) && v6 == ps_getpid_0((int)&dword_4878EC) )
  {
    sub_98F50(v16, v6);
    if ( !sub_23E644(v16[0], v16[1], v16[2]) )
    {
      sub_1E3AC0(v14, v15, SHIDWORD(v15), v5, a4);
      dword_4878EC = v14;
      qword_4878F0 = v15;
      return;
    }
LABEL_13:
    sub_23EDB4(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0), v14, v15, HIDWORD(v15));
    return;
  }
  if ( sub_98F78(dword_488C70, &dword_4878EC) )
    goto LABEL_13;
  v7 = ps_getpid_0((int)&v14);
  if ( sub_183C5C(v7) )
  {
LABEL_5:
    sub_1E3AC0(v14, v15, SHIDWORD(v15), v5, a4);
    return;
  }
  v8 = sub_16F654(0);
  ((void (__fastcall *)(int))loc_1E2770)(v8);
  v9 = ((int (__fastcall *)(int))loc_1E2198)(72);
  v10 = ps_getpid_0((int)&v14);
  v11 = sub_1EC4D4(v9 != 1, v10, -1, 1);
  sub_1E3AC0(v14, v15, SHIDWORD(v15), v5, a4);
  if ( v11 )
  {
    v13 = sub_16F654(v12);
    ((void (__fastcall *)(int))loc_1E2770)(v13);
    if ( !*(_DWORD *)(dword_488C94 + 8) )
      sub_1820F0(v14, v15, SHIDWORD(v15), a4, 0);
  }
}
