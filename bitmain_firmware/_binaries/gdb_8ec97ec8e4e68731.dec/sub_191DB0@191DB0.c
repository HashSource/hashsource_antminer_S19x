__int64 __fastcall sub_191DB0(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r4
  unsigned __int64 v8; // r0

  v7 = a5;
  v8 = *(_QWORD *)(a2 + 8);
  if ( a6 + a5 > v8 )
    v7 = v8 - a6;
  if ( v7 && sub_230020(*(_DWORD *)a2 + a6, a3, v7) )
    return -1;
  return v7;
}
