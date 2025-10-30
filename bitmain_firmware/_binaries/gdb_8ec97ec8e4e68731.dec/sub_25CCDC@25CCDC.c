int __fastcall sub_25CCDC(int a1, __int64 a2, int a3)
{
  _DWORD *v6; // r0
  int v7; // r10
  _DWORD *v8; // r8
  int v9; // r0
  unsigned __int64 v10; // r4
  int v11; // r0
  int v13; // r0
  __int64 v14; // [sp+0h] [bp-8h]

  v6 = (_DWORD *)sub_26BC70(a1);
  v7 = sub_171258(v6);
  v8 = (_DWORD *)sub_171258(*(_DWORD **)(*(_DWORD *)(v7 + 24) + 20));
  v9 = sub_170058((int)v8);
  LODWORD(v14) = a3;
  if ( a2 < a3
    || (HIDWORD(v14) = a3 >> 31,
        v10 = (a2 - v14) * (unsigned int)v9,
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + 12) + 24) + 24) + 16))
    && (unsigned int)sub_170058(v7) <= v10 )
  {
    if ( !sub_174544(v7) )
    {
      if ( sub_1744F0(v7) )
        sub_946E0("no such vector element (vector not allocated)");
      sub_946E0("no such vector element");
    }
    sub_946E0("no such vector element (vector not associated)");
  }
  sub_172880();
  if ( v11 )
  {
    v13 = ((int (__fastcall *)(int))loc_26C09C)(a1);
    v8 = (_DWORD *)sub_176ED4(v8, 0, v13 + v10);
  }
  return sub_26E88C(a1, v8, v10, HIDWORD(v10));
}
