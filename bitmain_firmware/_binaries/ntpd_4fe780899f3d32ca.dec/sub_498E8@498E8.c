int __fastcall sub_498E8(int a1, int a2, int a3)
{
  __int16 *v3; // r6
  int v8; // r3
  int v9; // r12
  __int16 *v10; // r0
  int v11; // lr
  int v12; // r3

  v3 = (__int16 *)(a3 + 500);
  if ( (*(&off_B46E4[5 * *(__int16 *)(a3 + 502)] + *(__int16 *)(a3 + 500)))() == 1 )
  {
    v8 = *(__int16 *)(a3 + 502);
    v9 = *v3;
    *(_WORD *)(a3 + 496) = 0;
    v10 = (__int16 *)((char *)&unk_9795C + 10 * v8 + 2 * v9);
    v11 = *v10;
    v12 = v10[56];
    if ( v9 != v12 )
    {
      *(_BYTE *)(a3 + 15) = 0;
      *(_WORD *)(a3 + 498) = 0;
      *(_WORD *)(a3 + 504) = 0;
      *(_DWORD *)(a3 + 56) = 0;
      *(_DWORD *)(a3 + 488) = 0;
      *(_BYTE *)(a3 + 492) = 0;
      *(_WORD *)(a3 + 406) = 0;
      if ( !v12 )
        *(_WORD *)(a3 + 12) = 3;
    }
    *v3 = v12;
    if ( v11 )
    {
      *(_WORD *)(a3 + 502) = v11;
      sub_498E8(a1, a2, a3);
    }
  }
  *(_WORD *)(a3 + 502) = 0;
  return 0;
}
