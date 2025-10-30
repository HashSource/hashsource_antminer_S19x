int __fastcall sub_1E0D84(int a1, int *a2)
{
  int v2; // r3
  __int64 v3; // r0
  __int64 v4; // r2

  v2 = *a2;
  v3 = *(_QWORD *)(*(_DWORD *)a1 + 8);
  v4 = *(_QWORD *)(v2 + 8);
  if ( v3 < v4 )
    return -1;
  else
    return v3 != v4;
}
