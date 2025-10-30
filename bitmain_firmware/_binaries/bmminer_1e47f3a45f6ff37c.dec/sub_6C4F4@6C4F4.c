int __fastcall sub_6C4F4(int a1, int a2)
{
  _WORD v3[18]; // [sp+10h] [bp-2Ch] BYREF

  v3[0] = (*(unsigned __int8 *)(a2 + 2) << 8) | *(unsigned __int8 *)(a2 + 1);
  return sub_6C41C(a1, 0, *(_BYTE *)a2, 3, (int)v3);
}
