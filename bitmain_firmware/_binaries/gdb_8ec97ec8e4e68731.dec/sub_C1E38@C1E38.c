int __fastcall sub_C1E38(int a1, int a2, int a3, void *a4, __int64 a5, unsigned __int64 a6, __int64 a7, _QWORD *a8)
{
  if ( a2 == 2 )
    return sub_95540(
             a4,
             (void *)a5,
             a6,
             a7,
             a8,
             *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4),
             *(_DWORD *)(*(_DWORD *)(a1 + 16) + 8),
             0);
  else
    return -1;
}
