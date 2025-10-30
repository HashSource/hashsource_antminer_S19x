int __fastcall sub_7C2F0(int a1, _DWORD *a2)
{
  void (*v4)(void); // r7
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r12
  int v10; // r2
  int v11; // [sp+4h] [bp-8h]

  v4 = (void (*)(void))a2[10];
  v5 = _stack_chk_guard;
  v6 = a2[4] & 0xFFFFF00 | 8;
  a2[4] = v6;
  v11 = v5;
  if ( v4 )
  {
    v4();
    v6 = a2[4];
  }
  v7 = *(unsigned __int16 *)a2;
  v8 = *(_DWORD *)(a1 + 120);
  a2[6] = *(_DWORD *)(*(_DWORD *)(a1 + 116) + 4 * v7);
  v10 = *(_DWORD *)(v8 + 4 * v7);
  a2[4] = v6 & 0xFFFFF00;
  a2[7] = v10;
  return v11;
}
