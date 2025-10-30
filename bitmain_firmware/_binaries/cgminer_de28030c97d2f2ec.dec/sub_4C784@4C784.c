int __fastcall sub_4C784(int result)
{
  *(_DWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 200) = *(_QWORD *)(result + 208);
  return result;
}
