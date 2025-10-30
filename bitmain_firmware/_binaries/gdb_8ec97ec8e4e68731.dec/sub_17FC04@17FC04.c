int __fastcall sub_17FC04(int a1, int a2)
{
  int v4; // r0
  int result; // r0

  v4 = sub_183688(a1);
  *(_DWORD *)(v4 + 44) = a1;
  result = sub_183688(v4);
  *(_DWORD *)(result + 48) = a2;
  return result;
}
