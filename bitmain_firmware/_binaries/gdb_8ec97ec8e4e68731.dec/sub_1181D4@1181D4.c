int __fastcall sub_1181D4(_DWORD *a1, char *a2, int a3, int a4, int a5)
{
  size_t v5; // r4
  bool v6; // zf
  int v10; // r0
  int v11; // lr
  int v12; // r1
  int v13; // [sp+1Ch] [bp-30h]
  _BYTE _30[7]; // [sp+30h] [bp-1Ch] BYREF

  v6 = a2 + 1 == 0;
  if ( a2 == (char *)-1 )
    a2 = (char *)a1[2];
  if ( v6 )
    v5 = a1[3];
  else
    a2 = (char *)a1[4];
  if ( !v6 )
    v5 = a1[5];
  if ( !a2 )
  {
    v10 = sub_92F64(11, "Cannot resolve DW_AT_call_data_value");
    v13 = v11;
    sub_117684(
      *(_DWORD *)(v10 + 24),
      v12,
      **(_DWORD **)(v10 + 36),
      *(_DWORD *)(*(_DWORD *)(v10 + 36) + 4),
      *(_DWORD *)(*(_DWORD *)(v10 + 36) + 8),
      0,
      0);
    __asm { POP             {R4,R5,PC} }
  }
  memcpy(_30, a2, v5);
  _30[v5] = -97;
  return sub_117684(a3, a4, (int)_30, v5 + 1, a5, 0, 0);
}
