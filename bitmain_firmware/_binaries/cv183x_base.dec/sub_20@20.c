__int64 __fastcall sub_20(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD); // x3

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 40) + 72LL);
  if ( v3 )
    return v3(a1, a2, a3);
  else
    return -515;
}
