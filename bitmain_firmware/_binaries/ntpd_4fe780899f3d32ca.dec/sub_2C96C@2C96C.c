int __fastcall sub_2C96C(int result)
{
  __int64 v1; // r2

  *(_DWORD *)(result + 64) = -1;
  *(_DWORD *)(result + 68) = -1;
  v1 = *(_QWORD *)(result + 64);
  *(_QWORD *)(result + 56) = v1;
  *(_QWORD *)(result + 48) = v1;
  *(_QWORD *)(result + 40) = v1;
  return result;
}
