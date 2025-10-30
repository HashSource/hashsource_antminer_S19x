int __fastcall sub_43858(int *a1, _DWORD *a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  int result; // r0
  int v11; // [sp+1Ch] [bp-8h]

  *a2 = sub_31E10();
  v11 = *a1;
  sub_2E980(a3 + 212, "cgminer.c", "get_work_by_nonce2", 8409);
  *(_QWORD *)(a3 + 640) = a5;
  a6 = HIBYTE(a6) | ((a6 & 0xFF0000) >> 8) | ((a6 & 0xFF00) << 8) | (a6 << 24);
  sub_2BEFC((void *)(a3 + 1596), &a6, 4u, "cgminer.c", "get_work_by_nonce2", 8412);
  sub_2EA74(a3 + 212, "cgminer.c", "get_work_by_nonce2", 8413);
  result = sub_439D8(a3, *a2);
  *(_DWORD *)(*a2 + 260) = a4;
  *(_DWORD *)(*a2 + 256) = v11;
  *(_DWORD *)(*a2 + 336) = dword_8808C;
  ++*(_DWORD *)(*(_DWORD *)(*a2 + 260) + 68);
  *(_BYTE *)(*a2 + 272) = 1;
  *(_DWORD *)(*a2 + 444) = a6;
  return result;
}
