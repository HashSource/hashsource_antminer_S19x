__int64 __fastcall sub_21438(int a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // r3
  __int64 result; // r0

  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 )
  {
    *a2 = *(_QWORD *)(v3 + 16);
    result = *(_QWORD *)(v3 + 24);
    *a3 = result;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    return 0;
  }
  return result;
}
