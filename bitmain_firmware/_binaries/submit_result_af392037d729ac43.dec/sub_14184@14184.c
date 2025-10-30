int __fastcall sub_14184(int a1, __int64 a2)
{
  if ( !a1 || *(_DWORD *)a1 != 3 )
    return -1;
  *(_QWORD *)(a1 + 8) = a2;
  return 0;
}
