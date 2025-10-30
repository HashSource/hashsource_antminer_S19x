int __fastcall sub_1123EC(int result)
{
  __int64 v1; // r2

  v1 = *(_QWORD *)(result + 4);
  if ( (_DWORD)v1 == HIDWORD(v1) )
    sub_946E0("dwarf expression stack underflow");
  *(_DWORD *)(result + 8) = HIDWORD(v1) - 8;
  return result;
}
