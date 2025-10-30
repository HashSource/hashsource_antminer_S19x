__int64 __fastcall sub_618(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x19
  int v6; // w1
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 result; // x0
  __int64 v10; // x21

  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 256);
  v6 = *(unsigned __int8 *)(v5 + 101);
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 56LL);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 144LL) + 56LL);
  *(_BYTE *)(v5 + 100) = 0;
  if ( !v6 )
    return sub_598(a1, a2);
  *(_BYTE *)(v5 + 101) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 64))(v8, *(_QWORD *)(v5 + 104), *(int *)(v5 + 112));
  vfree(*(_QWORD *)(v5 + 104));
  *(_QWORD *)(v5 + 104) = 0;
  *(_DWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 96) = 1;
  LODWORD(result) = sub_598(a1, a2);
  if ( v10 >= 0 )
    return (unsigned int)result;
  else
    return (unsigned int)v10;
}
