int __fastcall sub_1721CC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0

  result = sub_172140(a1, a2, a3, a4, a5, a6);
  **(_BYTE **)(result + 24) = 13;
  return result;
}
