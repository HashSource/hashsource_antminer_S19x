int __fastcall sub_42A98(int *a1, _DWORD *a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  int result; // r0
  int v11; // [sp+1Ch] [bp-8h]

  *a2 = sub_30CD8();
  v11 = *a1;
  sub_2D95C(a3 + 212, "cgminer.c", "get_work_by_nonce2", 8409);
  *(_QWORD *)(a3 + 624) = a5;
  a6 = HIBYTE(a6) | (a6 >> 8) & 0xFF00 | (a6 << 8) & 0xFF0000 | (a6 << 24);
  sub_2AF08((void *)(a3 + 1580), &a6, 4u, "cgminer.c", "get_work_by_nonce2", 8412);
  sub_2DA5C(a3 + 212, "cgminer.c", "get_work_by_nonce2", 8413);
  result = sub_42C20(a3, *a2);
  *(_DWORD *)(*a2 + 260) = a4;
  *(_DWORD *)(*a2 + 256) = v11;
  *(_DWORD *)(*a2 + 336) = dword_86EF4;
  ++*(_DWORD *)(*(_DWORD *)(*a2 + 260) + 68);
  *(_BYTE *)(*a2 + 272) = 1;
  *(_DWORD *)(*a2 + 444) = a6;
  return result;
}
