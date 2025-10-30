int __fastcall sub_2B29E8(int a1)
{
  int v2; // r0
  int v3; // r0
  __int64 v4; // r2
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  if ( (unsigned int)(v2 - 1) > 0x16 )
  {
    sub_2A6BBC("elf32-arm.c", 4909);
    v2 = *(_DWORD *)(a1 + 36);
  }
  v3 = sub_2B2958(v2, &v6, (int *)&v6 + 1);
  if ( *(_DWORD *)(a1 + 48) )
  {
    v4 = v6;
    *(_DWORD *)(a1 + 40) = v3;
    *(_QWORD *)(a1 + 44) = v4;
  }
  if ( *(_DWORD *)(a1 + 16) == -1 )
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 36) += (v3 + 7) & 0xFFFFFFF8;
  return 1;
}
